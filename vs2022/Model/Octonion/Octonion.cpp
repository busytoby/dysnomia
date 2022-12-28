#include "pch.h"

#include "Octonion.h"

namespace Dysnomia {
	Octonion::Octonion(Affinity^ A, Affinity^ B) {
		if (L != nullptr && R != nullptr && Omega != nullptr) throw gcnew OctonionException(1, "Already Pushed");
		L = gcnew Ion(A);
		R = gcnew Ion(B);
		Omicron();
	}

	void Octonion::Omicron() {
		L->Charge(L->Mu);
		L->Induce(L->Sigma);
		L->Torque(L->Rho);
		L->Amplify(L->Upsilon, true);
		L->Sustain(L->Ohm, true);
		L->React(L->Pi);

		R->Charge(L->Mu);
		R->Induce(R->Sigma);
		R->Torque(R->Rho);
		R->Amplify(R->Upsilon, true);
		R->Sustain(R->Ohm, true);
		R->React(R->Pi);

		Omega = gcnew Prion();
		Omega->Gamma = L->Omicron;
		Omega->Nu = R->Omega;
		Omega->Phi = L->Mu;
		Omega->Rho = L->Omicron;
		Omega->Sigma = R->Omega;
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