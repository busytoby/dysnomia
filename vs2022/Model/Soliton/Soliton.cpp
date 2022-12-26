#include "pch.h"

#include "Soliton.h"

namespace Dysnomia {
	Soliton::Soliton(Quaternion^ Rho, Quark^ Delta, Quaternion^ Nu) {
		if (Sigma == nullptr) Sigma = Rho;
		V = gcnew LinkedList<KeyValuePair<BigInteger, Octonion^>>();

		Qi = gcnew Polynu();

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
			gcnew Polygamma(Epsilon[5]),
			gcnew Polygamma(Epsilon[9]),
			gcnew Polygamma(Epsilon[6]),
			gcnew Polygamma(Epsilon[8]),
			gcnew Polygamma(Epsilon[7]));

		Octonion^ X = gcnew Octonion(Delta, Lambda1);
		Octonion^ Y = gcnew Octonion(Delta, Lambda2);
		V->AddLast(KeyValuePair<BigInteger, Octonion^>(X->Epsilon, X));
		V->AddLast(KeyValuePair<BigInteger, Octonion^>(Y->Epsilon, Y));
		Q = gcnew Quark(Epsilon[2], Delta->N, Epsilon[7]);
	}

	void Soliton::Add(Spinor^ Eta, Polygamma^ Phi) {
		if (Eta->Lambda->Count < 5)
			return;
		Shift<Quaternion^>^ Epsilon = gcnew Shift<Quaternion^>(Eta->Lambda);

		int i = Epsilon->Count;
		Spinor^ L = gcnew Spinor(Q->R, Phi);
		XL->AddFirst(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));

		Tensor^ Lambda = gcnew Tensor(
			Phi,
			gcnew Polygamma(Epsilon[i-2]),
			gcnew Polygamma(Epsilon[i-4]),
			gcnew Polygamma(Epsilon[i-1]),
			gcnew Polygamma(Epsilon[i-5]));

		Octonion^ X = gcnew Octonion(Q, Lambda);
		V->AddLast(KeyValuePair<BigInteger, Octonion^>(X->Epsilon, X));
		Q = gcnew Quark(Q->N, Epsilon[i-3], Q->L);
	}

	void Soliton::Add(Spinor^ Eta, Quark^ Nu, Polygamma^ Phi) {
		if (Eta->Lambda->Count < 5) 
			return;
		Shift<Quaternion^>^ Epsilon = gcnew Shift<Quaternion^>(Eta->Lambda);

		int i = Epsilon->Count;
		Spinor^ L = gcnew Spinor(Nu->L, Phi);
		XL->AddFirst(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));

		Tensor^ Lambda = gcnew Tensor(
			gcnew Polygamma(Epsilon[i-5]),
			gcnew Polygamma(Epsilon[i-1]),
			gcnew Polygamma(Epsilon[i-4]),
			gcnew Polygamma(Epsilon[i-2]),
			Phi);

		Octonion^ X = gcnew Octonion(Q, Lambda);
		V->AddLast(KeyValuePair<BigInteger, Octonion^>(X->Epsilon, X));
		Q = Nu;
	}
}