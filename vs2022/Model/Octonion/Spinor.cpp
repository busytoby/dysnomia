#include "pch.h"

#include "Spinor.h"

namespace Dysnomia {
	Spinor::Spinor(Quaternion^ Q, Polygamma^ X) {
		Octogamma = X->First;
		Epsilon = Math::ModPow(Octogamma->Value.Key, Octogamma->Value.Value->Nu->Cone->Manifold, Q->Nu->Rod->Barn);
		if (Octogamma->Value.Key.IsZero)
			throw gcnew Exception("Zero Octogamma Key");
		if (Epsilon.IsZero)
			throw gcnew Exception("Zero Epsilon");

		Gamma = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Gamma, Q->Gamma);
		Nu = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Nu, Q->Nu);
		Phi = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Phi, Q->Phi);
		Rho = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Rho, Q->Rho);
		Sigma = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Sigma, Q->Sigma);
	}

	void Spinor::Transit(Polygamma^ Zeta) {
		if (Zeta == List) {
			Next();
			return;
		}

		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ L = Zeta->First;
		while (L = L->Next) {
			Octogamma->List->AddLast(KeyValuePair<BigInteger, Quaternion^>(L->Value.Value->Epsilon, L->Value.Value));
		}
	}

	void Spinor::Next() {
		Octogamma = Octogamma->Next;
		Head();
	}

	void Spinor::Head() {
		Epsilon = Math::ModPow(Octogamma->Value.Key, Octogamma->Value.Value->Nu->Cone->Manifold, Nu->Item2->Rod->Barn);
		if (Octogamma->Value.Key.IsZero)
			throw gcnew Exception("Zero Octogamma Key");
		if (Epsilon.IsZero)
			throw gcnew Exception("Zero Epsilon");

		Gamma = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Gamma, Gamma->Item2);
		Nu = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Nu, Nu->Item2);
		Phi = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Phi, Phi->Item2);
		Rho = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Rho, Rho->Item2);
		Sigma = gcnew Tuple<Affinity^, Affinity^>(Octogamma->Value.Value->Sigma, Sigma->Item2);
	}

	Wavelet::Wavelet(Spinor^ Y, Spinor^ X, Spinor^ Z)
	{
		N = Y;
		R = X;
		L = Z;

		Epsilon = L->Epsilon;
	}
}