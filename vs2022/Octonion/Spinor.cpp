#include "pch.h"

#include "Spinor.h"

namespace Dysnomia {
	Spinor::Spinor(Quaternion^ Q, Polygamma^ X) {
		Octogamma = X->T->First;
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
		IsoSpin(X);
	}

	void Spinor::Transit() {
		while (Octogamma = Octogamma->Next) {
			Epsilon = Math::ModPow(Epsilon, Octogamma->Value.Value->Nu->Cone->Manifold, Octogamma->Value.Value->Nu->Rod->Barn);

			Gamma = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, Gamma->Item1->Cone),
				gcnew Affinity(Gamma->Item2->Rod, Octogamma->Value.Value->Gamma->Cone));

			Nu = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(Octogamma->Value.Value->Nu->Rod, Nu->Item1->Cone),
				gcnew Affinity(Nu->Item2->Rod, Octogamma->Value.Value->Nu->Cone));


			// Phi Is Unmodified


			Rho = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(gcnew Dynamic(), Rho->Item1->Cone),
				gcnew Affinity(gcnew Dynamic(), Octogamma->Value.Value->Rho->Cone));

			Sigma = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(Octogamma->Value.Value->Sigma->Rod, Sigma->Item1->Cone),
				gcnew Affinity(Sigma->Item2->Rod, Octogamma->Value.Value->Sigma->Cone));
		}
	}

	void Spinor::IsoSpin(Polygamma^ X) {
		Quaternion^ L = gcnew Quaternion();
		L->Gamma = gcnew Affinity(Phi->Item1->Rod, X->T->Last->Value.Value->Sigma->Cone);
		L->Nu = gcnew Affinity(Phi->Item2->Rod, Gamma->Item1->Cone);
		L->Phi = gcnew Affinity(Rho->Item2->Rod, Phi->Item1->Cone);
		L->Rho = gcnew Affinity(gcnew Dynamic(), Rho->Item1->Cone);
		L->Sigma = gcnew Affinity(Sigma->Item2->Rod, X->T->Last->Value.Value->Sigma->Cone);

		L->Epsilon = Math::ModPow(X->T->Last->Value.Key, X->T->Last->Value.Value->Rho->Cone->Manifold, Nu->Item2->Rod->Barn);

		X->T->AddLast(KeyValuePair<BigInteger, Quaternion^>(L->Epsilon, L));
	}
}