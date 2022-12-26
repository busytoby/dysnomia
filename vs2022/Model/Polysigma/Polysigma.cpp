#include "pch.h"

#include "Polysigma.h"

namespace Dysnomia {
	Polysigma::Polysigma(Polysigma^ Theta) {
		LinkedListNode<KeyValuePair<Quark^, Bundle^>>^ Q = Theta->Last;
		while (Q != nullptr) {
			AddLast(Q->Value);
			Q = Q->Previous;
		}
	}

	void Polysigma::Add(Polysigma^ Omicron) {
		J = gcnew Bundle(
			Omicron->First->Value.Value->Gluon->L,
			Omicron->First->Value.Value->Gluon->N,
			Omicron->First->Value.Value->Gluon->R,
			Omicron->Last->Value.Value->Muon->R
		);

		Add(Omicron->First->Value.Value->Muon);
		Add(Omicron->Last->Value.Value->Gluon);
	}

	void Polysigma::Cap(Polysigma^ Omicron) {
		J = gcnew Bundle(
			Omicron->Last->Value.Value->Muon->L,
			Omicron->Last->Value.Value->Muon->N,
			Omicron->Last->Value.Value->Muon->R,
			Omicron->First->Value.Value->Gluon->R
		);

		Add(Omicron->Last->Value.Value->Muon);
		Add(Omicron->First->Value.Value->Gluon);
	}

	void Polysigma::Add(Spinor^ X, Spinor^ N, Spinor^ R, Spinor^ L, Soliton^ Iota) {
		Add(X, N, R, L);
		Add(Iota);
	}
	
	void Polysigma::Add(Spinor ^ X, Spinor ^ N, Spinor ^ R, Spinor ^ L) {
		if (J != nullptr) throw gcnew PolysigmaException(1, "Polysigma Not In Ready State");
		if (X == nullptr || N == nullptr || R == nullptr || L == nullptr) throw gcnew PolysigmaException(2, "Null Values In Add");
		J = gcnew Bundle(X, N, R, L);
	}

	void Polysigma::Add(Soliton^ Iota) {
		if (J->Eta == nullptr)
			J->Eta = Iota;
		else if (J->Eta != Iota)
			throw gcnew PolysigmaException(5, "Bad Bundle Soliton Configuration");
		else
			J->Eta = Iota;
	}


	void Polysigma::Add(Wavelet^ R, Soliton^ Iota) {
		Add(Iota);
		Add(R);
	}

	void Polysigma::Add(Wavelet^ R) {
		if (J->Muon == nullptr) {
			J->Muon = R;
			J->Spin(J->Muon);
		}
		else if (J->Gluon == nullptr) {
			J->Gluon = R;
			J->Run(J->Gluon);
		}
		else throw gcnew PolysigmaException(3, "Polysigma In Bad Poly State");
	}

	void Polysigma::Add(Quark^ L) {
		AddLast(KeyValuePair<Quark^, Bundle^>(L, J));
		J = nullptr;
	}

	void Polysigma::Run(Soliton^ Iota) {
		if (J != nullptr) return;
		if (Iota->Qi->Phi == nullptr) throw gcnew Exception("Null Values On Soliton");
		Add(Iota->Qi->Phi->Rho, Iota->Qi->Phi->Phi, Iota->Qi->Phi->Nu, Iota->Qi->Phi->Gamma, Iota);
	}

	void Polysigma::Run(Soliton^ Iota, Quaternion^ Q) {
		Wavelet^ W;
		if (J->Muon == nullptr) {
			Spinor^ X = Iota->Qi->Phi->Rho;
			Spinor^ N = Iota->Qi->Phi->Nu;
			Spinor^ R = Iota->Qi->Phi->Gamma;
			W = gcnew Wavelet(N, R, X);
		}
		else if (J->Gluon == nullptr) {
			Spinor^ X = Iota->Qi->Phi->Nu;
			Spinor^ N = Iota->Qi->Phi->Rho;
			Spinor^ R = Iota->Qi->Phi->Phi;
			W = gcnew Wavelet(N, R, X);
		}
		else throw gcnew PolysigmaException(3, "Polysigma In Bad Poly State");
		Add(W, Iota);
	}

	void Polysigma::Run(Quark^ Q) {
		if (Q == nullptr) throw gcnew PolysigmaException(3, "Null Quark");
		Add(Q);
	}
}