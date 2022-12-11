#include "pch.h"

#include "Soliton.h"

namespace Dysnomia {
	Soliton::Soliton(Quaternion^ Rho, Quark^ Delta, Quaternion^ Nu) {
		if (Sigma == nullptr) Sigma = Rho;
		Polygamma^ Xi = gcnew Polygamma(Rho);
		Mu = gcnew Spinor(Nu, Xi);
		Xi->Add(Sigma);
		Xi->Add(Rho);
		Xi->Add(Nu);
		Xi->Add(Sigma);

		Shift<Quaternion^>^ Epsilon = gcnew Shift<Quaternion^>(Xi->T);

		YL = gcnew LinkedList<KeyValuePair<BigInteger, Spinor^>>();
		for (int i = 0; i < 5; i++) {
			Spinor^ L = gcnew Spinor(Rho, gcnew Polygamma(Epsilon[i]));
			YL->AddLast(KeyValuePair<BigInteger, Spinor^>(L->Epsilon, L));
		}

		Sigma = Epsilon[5];

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

		Y = gcnew Octonion(Delta, Lambda1);
		X = gcnew Octonion(Delta, Lambda2);
 		Q = gcnew Quark(Epsilon[8], Epsilon[5], Epsilon[2]);	
	}
}