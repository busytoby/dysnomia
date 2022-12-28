#include "pch.h"

#include "Soliton.h"

namespace Dysnomia {
	Soliton::Soliton(Quaternion^ Rho, Quark^ Delta, Quaternion^ Nu) {
		if (Sigma == nullptr) Sigma = Rho;

		Qi = gcnew Polynu();
		Tsi = gcnew Polyphi();

		Polygamma^ Xi = gcnew Polygamma(Rho);
		Mu = gcnew Spinor(Nu, Xi);
		Xi->Add(Sigma);
		Xi->Add(Rho);
		Xi->Add(Nu);
		Xi->Add(Sigma);

		Shift<Quaternion^>^ Epsilon = gcnew Shift<Quaternion^>(Xi);
		for (int i = 0; i < 5; i++) {
			Spinor^ L = gcnew Spinor(Rho, gcnew Polygamma(Epsilon[i]));
			Qi->Alpha(L);
		}
		Qi->Eta();

		XL = gcnew LinkedList<KeyValuePair<BigInteger, Spinor^>>();
		for (int i = 5; i < 10; i++) {
			Spinor^ L = gcnew Spinor(Nu, gcnew Polygamma(Epsilon[i]));
			XL->AddLast(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));
		}

		Tensor^ Lambda1 = gcnew Tensor(Delta, Xi);

		Tensor^ Lambda2 = gcnew Tensor(
			gcnew Polygamma(Epsilon[0]),
			gcnew Polygamma(Epsilon[4]),
			gcnew Polygamma(Epsilon[1]),
			gcnew Polygamma(Epsilon[3]),
			gcnew Polygamma(Epsilon[2]));

		Octonion^ X = gcnew Octonion(Delta->N->Rho, Lambda1->Nu->Nu->Phi->L);
		X->Xi(Delta);
		Octonion^ Y = gcnew Octonion(Delta->N->Gamma, Lambda2->Phi->Nu->Phi->Y);
		Q = gcnew Quark(Delta->N, Delta->R, Epsilon[2]);
		Y->Xi(Q);
		X->Psi->Attach(Y->Psi);
		Tsi->AddLast(KeyValuePair<Tensor^, Octonion^>(Lambda1, X));
		Tsi->AddLast(KeyValuePair<Tensor^, Octonion^>(Lambda2, Y));
	}

	void Soliton::Add(Spinor^ Eta, Polygamma^ Phi) {
		if (Eta->Lambda->Count < 5)
			return;
		Eta->Transit(Phi);
		Shift<Quaternion^>^ Epsilon = gcnew Shift<Quaternion^>(Eta->Lambda);

		Spinor^ L = gcnew Spinor(Q->L, Phi);
		XL->AddFirst(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));

		Tensor^ Lambda = gcnew Tensor(
			Phi,
			gcnew Polygamma(Epsilon[4]),
			gcnew Polygamma(Epsilon[1]),
			gcnew Polygamma(Epsilon[3]),
			gcnew Polygamma(Epsilon[2]));

		Octonion^ X = gcnew Octonion(Q->N->Rho, Lambda->Phi->Rho->Phi->L);
		X->Xi(Q);
		Q = gcnew Quark(Q->N, Q->R, Epsilon[2]);
		X->Psi->Attach(Q);
		Tsi->AddLast(KeyValuePair<Tensor^, Octonion^>(Lambda, X));
	}

	void Soliton::Add(Spinor^ Eta, Quark^ Nu, Polygamma^ Phi) {
		if (Eta->Lambda->Count < 5) 
			return;
		Eta->Transit(Phi);
		Shift<Quaternion^>^ Epsilon = gcnew Shift<Quaternion^>(Eta->Lambda);

		Spinor^ L = gcnew Spinor(Nu->N, Phi);
		XL->AddFirst(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));

		Tensor^ Lambda = gcnew Tensor(
			gcnew Polygamma(Epsilon[0]),
			gcnew Polygamma(Epsilon[4]),
			gcnew Polygamma(Epsilon[1]),
			gcnew Polygamma(Epsilon[3]),
			Phi);

		Octonion^ X = gcnew Octonion(Q->N->Phi, Lambda->Sigma->Phi->Phi->R);
		X->Xi(Q);
		X->Psi->Attach(Nu);
		Q = gcnew Quark(Nu->L, Nu->R, Epsilon[2]);
		X->Psi->Attach(Q);
		Tsi->AddLast(KeyValuePair<Tensor^, Octonion^>(Lambda, X));
	}
}