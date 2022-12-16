#include "pch.h"

#include "Spinor.h"

namespace Dysnomia {
	Spinor::Spinor(Quaternion^ Q, Polygamma^ X) {
		Octogamma = X->First;
		Epsilon = Math::ModPow(Octogamma->Value.Key, Octogamma->Value.Value->Nu->Cone->Manifold, Q->Nu->Rod->Barn);

		Gamma = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, Q->Gamma->Cone),
			gcnew Affinity(Q->Gamma->Rod, Octogamma->Value.Value->Gamma->Cone));

		Nu = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(Octogamma->Value.Value->Nu->Rod, Q->Nu->Cone),
			gcnew Affinity(Q->Nu->Rod, Octogamma->Value.Value->Nu->Cone));

		Phi = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(gcnew Dynamic(), Q->Phi->Cone),
			gcnew Affinity(Q->Phi->Rod, gcnew Dynamic()));

		Rho = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(gcnew Dynamic(), Q->Rho->Cone),
			gcnew Affinity(gcnew Dynamic(), Octogamma->Value.Value->Rho->Cone));

		Sigma = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(Octogamma->Value.Value->Sigma->Rod, Q->Sigma->Cone),
			gcnew Affinity(Q->Sigma->Rod, Octogamma->Value.Value->Sigma->Cone));

		Transit();
		IsoSpin();
	}

	void Spinor::Transit(LinkedList<KeyValuePair<BigInteger, Quaternion^>>^ Zeta) {
		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ L = Zeta->First;
		while (L = L->Next) {
			Epsilon = Math::ModPow(Epsilon, L->Value.Value->Nu->Cone->Manifold, L->Value.Value->Nu->Rod->Barn);

			Gamma = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(L->Value.Value->Gamma->Rod, Gamma->Item1->Cone),
				gcnew Affinity(Gamma->Item2->Rod, L->Value.Value->Gamma->Cone));

			Nu = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(L->Value.Value->Nu->Rod, Nu->Item1->Cone),
				gcnew Affinity(Nu->Item2->Rod, L->Value.Value->Nu->Cone));


			// Phi Is Unmodified


			Rho = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(gcnew Dynamic(), Rho->Item1->Cone),
				gcnew Affinity(gcnew Dynamic(), L->Value.Value->Rho->Cone));

			Sigma = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(gcnew Dynamic(), Sigma->Item1->Cone),
				gcnew Affinity(Sigma->Item2->Rod, L->Value.Value->Sigma->Cone));
		}
	}

	void Spinor::Transit() {
		LinkedList<KeyValuePair<BigInteger, Quaternion^>>^ L = Octogamma->List;
		Transit(L);
	}

	void Spinor::IsoSpin() {
		Quaternion^ L = Head();
		Octogamma->List->AddLast(KeyValuePair<BigInteger, Quaternion^>(L->Epsilon, L));
	}

	Quaternion^ Spinor::Head() {
		Quaternion^ L = gcnew Quaternion();
		L->Gamma = gcnew Affinity(Phi->Item1->Rod, Octogamma->List->Last->Value.Value->Sigma->Cone);
		L->Nu = gcnew Affinity(Phi->Item2->Rod, Gamma->Item1->Cone);
		L->Phi = gcnew Affinity(Rho->Item2->Rod, Phi->Item1->Cone);
		L->Rho = gcnew Affinity(gcnew Dynamic(), Rho->Item1->Cone);
		L->Sigma = gcnew Affinity(Sigma->Item2->Rod, gcnew Dynamic());

		L->Epsilon = Math::ModPow(Octogamma->List->Last->Value.Key, Octogamma->List->Last->Value.Value->Rho->Cone->Manifold, Nu->Item2->Rod->Barn);
		return L;
	}

	Wavelet::Wavelet(Spinor^ Y, Spinor^ X, Spinor^ Z)
	{
		N = Y;
		R = X;
		L = Z;

		Epsilon = L->Epsilon;
	}
}