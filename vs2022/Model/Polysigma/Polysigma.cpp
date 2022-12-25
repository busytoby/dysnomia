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

	void Polysigma::Add(Polygamma^ Rho, Polysigma^ Omicron) {
		J = gcnew Bundle(
			gcnew Spinor(Omicron->First->Value.Value->Gamma->Item1->R, Rho),
			gcnew Spinor(Omicron->First->Value.Value->Nu->Item1->R, Rho),
			gcnew Spinor(Omicron->First->Value.Value->Rho->Item1->R, Rho),
			gcnew Spinor(Omicron->First->Value.Value->Sigma->Item1->R, Rho)
		);

		Wavelet^ Alpha = gcnew Wavelet(
			gcnew Spinor(Omicron->First->Value.Value->Phi->Item1->L, Rho),
			gcnew Spinor(Omicron->First->Value.Value->Phi->Item1->R, Rho),
			gcnew Spinor(Omicron->First->Value.Value->Phi->Item1->N, Rho)
		);
		Add(Alpha);

		Wavelet^ Polyalpha = gcnew Wavelet(
			gcnew Spinor(Omicron->Last->Value.Value->Phi->Item1->L, Rho),
			gcnew Spinor(Omicron->Last->Value.Value->Phi->Item1->R, Rho),
			gcnew Spinor(Omicron->Last->Value.Value->Phi->Item1->N, Rho)
		);
		Add(Polyalpha);
	}

	void Polysigma::Cap(Polygamma^ Rho, Polysigma^ Omicron) {
		J = gcnew Bundle(
			gcnew Spinor(Omicron->Last->Value.Value->Gamma->Item2->R, Rho),
			gcnew Spinor(Omicron->Last->Value.Value->Nu->Item2->R, Rho),
			gcnew Spinor(Omicron->Last->Value.Value->Rho->Item2->R, Rho),
			gcnew Spinor(Omicron->Last->Value.Value->Sigma->Item2->R, Rho)
		);

		Wavelet^ Alpha = gcnew Wavelet(
			gcnew Spinor(Omicron->First->Value.Value->Phi->Item2->L, Rho),
			gcnew Spinor(Omicron->First->Value.Value->Phi->Item2->R, Rho),
			gcnew Spinor(Omicron->First->Value.Value->Phi->Item2->N, Rho)
		);
		Add(Alpha);

		Wavelet^ Polyalpha = gcnew Wavelet(
			gcnew Spinor(Omicron->Last->Value.Value->Phi->Item2->L, Rho),
			gcnew Spinor(Omicron->Last->Value.Value->Phi->Item2->R, Rho),
			gcnew Spinor(Omicron->Last->Value.Value->Phi->Item2->N, Rho)
		);
		Add(Polyalpha);
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
		if (Iota->XL->First->Value.Value == nullptr || Iota->XL->Last->Value.Value == nullptr || Iota->Mu == nullptr) throw gcnew Exception("Null Values On Soliton");
		Spinor^ X = Iota->XL->First->Value.Value;
		Spinor^ N = Iota->XL->Last->Value.Value;
		Spinor^ R = Iota->Mu;
		Spinor^ L = gcnew Spinor(Iota->V->First->Value.Value->X->L, gcnew Polygamma(Iota->V->First->Value.Value->L->Sigma));
		Add(X, N, R, L, Iota);
	}

	void Polysigma::Run(Soliton^ Iota, Quaternion^ Q) {
		Wavelet^ W;
		if (J->Muon == nullptr) {
			Spinor^ X = gcnew Spinor(Iota->V->First->Value.Value->X->N, gcnew Polygamma(Iota->V->First->Value.Value->L->Nu));
			Spinor^ N = gcnew Spinor(Iota->V->First->Value.Value->X->R, gcnew Polygamma(Iota->V->First->Value.Value->L->Phi));
			Spinor^ R = Iota->Qi->Phi->Gamma;
			W = gcnew Wavelet(N, R, X);
		}
		else if (J->Gluon == nullptr) {
			Spinor^ X = gcnew Spinor(Iota->V->Last->Value.Value->X->N, gcnew Polygamma(Iota->V->Last->Value.Value->L->Gamma));
			Spinor^ N = gcnew Spinor(Iota->V->Last->Value.Value->X->R, gcnew Polygamma(Iota->V->Last->Value.Value->L->Rho));
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