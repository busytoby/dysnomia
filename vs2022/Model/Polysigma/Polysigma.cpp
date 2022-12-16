#include "pch.h"

#include "Polysigma.h"

namespace Dysnomia {
	void Polysigma::Add(Spinor^ X, Spinor^ N, Spinor^ R, Spinor^ L) {
		if (Gluon != nullptr || Muon != nullptr || J != nullptr) throw gcnew PolysigmaException(1, "Polysigma Not In Ready State");

		J = gcnew Bundle(X, N, R, L);
	}

	void Polysigma::Add(Wavelet^ R) {
		if (Muon == nullptr) {
			Muon = R;
			J->Spin(R);
		}
		else if (Gluon == nullptr) {
			Gluon = R;
			J->Run(R);
		}
	}

	void Polysigma::Add(Quark^ L) {
		AddLast(KeyValuePair<Quark^, Bundle^>(L, J));
		Gluon = nullptr; // External Functions On Gluon & Muon Should Be Performed Outside Of Class Prior To Adding Quark
		Muon = nullptr;
		J = nullptr;
	}
}