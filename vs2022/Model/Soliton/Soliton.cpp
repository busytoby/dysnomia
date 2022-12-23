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
		for (int i = 6; i < 11; i++) {
			Spinor^ L = gcnew Spinor(Nu, gcnew Polygamma(Epsilon[i]));
			XL->AddLast(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));
		}

		Tensor^ Lambda1 = gcnew Tensor(
			gcnew Polygamma(Epsilon[0]),
			gcnew Polygamma(Epsilon[1]),
			gcnew Polygamma(Epsilon[2]),
			gcnew Polygamma(Epsilon[3]),
			gcnew Polygamma(Epsilon[4]));

		Tensor^ Lambda2 = gcnew Tensor(
			gcnew Polygamma(Epsilon[6]),
			gcnew Polygamma(Epsilon[7]),
			gcnew Polygamma(Epsilon[8]),
			gcnew Polygamma(Epsilon[9]),
			gcnew Polygamma(Epsilon[10]));

		Octonion^ Y = gcnew Octonion(Delta, Lambda1);
		Octonion^ X = gcnew Octonion(Delta, Lambda2);
		V->AddLast(KeyValuePair<BigInteger, Octonion^>(Y->Epsilon, Y));
		V->AddLast(KeyValuePair<BigInteger, Octonion^>(X->Epsilon, X));
 		Q = gcnew Quark(Epsilon[8], Epsilon[5], Epsilon[2]);
	}

	void Soliton::Add(Spinor^ Eta, Polygamma^ Phi) {
		if (Eta->Octogamma->List->Count < 5) 
			return;
		Shift<Quaternion^>^ Epsilon = gcnew Shift<Quaternion^>(Eta->Octogamma->List);

		int i = Epsilon->Count;
		XL = gcnew LinkedList<KeyValuePair<BigInteger, Spinor^>>();
		for (int j = 1; j < 6; j++) {
			Spinor^ L = gcnew Spinor(Q->L, Phi);
			XL->AddFirst(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));
		}

		Tensor^ Lambda = gcnew Tensor(
			gcnew Polygamma(Epsilon[i-5]),
			gcnew Polygamma(Epsilon[i-4]),
			gcnew Polygamma(Epsilon[i-3]),
			gcnew Polygamma(Epsilon[i-2]),
			gcnew Polygamma(Epsilon[i-1]));

		Octonion^ X = gcnew Octonion(Q, Lambda);
		V->AddLast(KeyValuePair<BigInteger, Octonion^>(X->Epsilon, X));
		Q = gcnew Quark(Q->N, Epsilon[i-3], Q->L);
	}

	void Soliton::Add(Spinor^ Eta, Quark^ Nu, Polygamma^ Phi) {
		if (Eta->Octogamma->List->Count < 5) 
			return;
		Shift<Quaternion^>^ Epsilon = gcnew Shift<Quaternion^>(Eta->Octogamma->List);

		int i = Epsilon->Count;
		XL = gcnew LinkedList<KeyValuePair<BigInteger, Spinor^>>();
		for (int j = 1; j < 6; j++) {
			Spinor^ L = gcnew Spinor(Nu->R, Phi);
			XL->AddFirst(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));
		}

		Tensor^ Lambda = gcnew Tensor(
			gcnew Polygamma(Epsilon[i - 5]),
			gcnew Polygamma(Epsilon[i - 4]),
			gcnew Polygamma(Epsilon[i - 3]),
			gcnew Polygamma(Epsilon[i - 2]),
			gcnew Polygamma(Epsilon[i - 1]));

		Octonion^ X = gcnew Octonion(Q, Lambda);
		V->AddLast(KeyValuePair<BigInteger, Octonion^>(X->Epsilon, X));
		Q = gcnew Quark(Nu->N, Epsilon[i - 3], Nu->L);
	}
}