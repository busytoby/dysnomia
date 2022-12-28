#include "pch.h"

#include "Octonion.h"

namespace Dysnomia {
	Octonion::Octonion(Affinity^ A, Affinity^ B) {
		if (L != nullptr && R != nullptr && Omega != nullptr) throw gcnew OctonionException(1, "Already Pushed");
		L = gcnew Ion(A);
		R = gcnew Ion(B);

		A->Charge(A->Mu);
		A->Induce(A->Sigma);
		A->Torque(A->Rho);
		A->Amplify(A->Upsilon, true);
		A->Sustain(A->Ohm, true);
		A->React(A->Pi);

		B->Charge(A->Mu);
		B->Induce(B->Sigma);
		B->Torque(B->Rho);
		B->Amplify(B->Upsilon, true);
		B->Sustain(B->Ohm, true);
		B->React(B->Pi);

		Omega = gcnew Prion();
		Omega->Gamma = A->Omicron;
		Omega->Nu = A->Omega;
		Omega->Phi = A->Mu;
		Omega->Rho = B->Omicron;
		Omega->Sigma = B->Omega;
	}

	Octonion::Octonion(Affinity^ A) {
		if (L != nullptr && R != nullptr && Omega != nullptr) throw gcnew OctonionException(1, "Already Pushed");
		L = gcnew Ion(A);
	}

	void Octonion::Xi(Quark^ Qi) {
		if (Psi != nullptr) throw gcnew OctonionException(1, "Psi Already");
		Psi = Qi;
	}
}