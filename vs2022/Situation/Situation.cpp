#include "pch.h"

#include "Situation.h"

namespace Dysnomia {
	Situation::Situation() {

	}

	Situation::Situation(const Situation% Copier) {

	}

	BigInteger Situation::Avail(BigInteger Wave) {
		BigInteger Ligand = S.Boson.Avail(Wave);
		return Ligand;
	}

	BigInteger Situation::Form(BigInteger Donor) {
		S.Boson.Form(Donor);
		S.Boson.Polarize();
		return S.Boson.Pole;
	}

	BigInteger Situation::Conjugate(BigInteger Paradox) {
		S.Coordinate = S.Boson.Coordinate(Paradox);
		S.Boson.Conify();

		return S.Boson.Foundation;
	}

	void Situation::Saturate(BigInteger Foundation, BigInteger Channel) {
		S.Boson.Saturate(Foundation, Channel);
		S.Boson.Bond();
	}

	void Situation::Adduct(BigInteger Dynamo) {
		S.Boson.Adduct(Dynamo);
		S.Boson.Open(S.Coordinate);
	}

	BigInteger Situation::Foil(BigInteger Wave, BigInteger Fourier) {
		I = gcnew Ion(S.Boson);
		Avail(Wave);
		BigInteger T = I->Hydrate(Fourier);

		array<Byte>^ L = T.ToByteArray();

		// Ln1 Sulfite
		LinkedList<LinkedList<char>^> R2D;
		LinkedList<char>^ N = gcnew LinkedList<char>();
		for (int i = 0; i < L->Length; i++) {
			String^ R = Convert::ToString(L[i], 8);
			for (int j = 0; j < R->Length; j++) {
				if (R[j] == '0') continue;
				if (R[j] != '7') N->AddLast(R[j]);
				else {
					R2D.AddLast(N);
					N = gcnew LinkedList<char>();
				}
			}
		}

		// Ln2 Sulfide Passes
		/* 
0 Length:
Pass1 nothing
Pass2 Prepend to Next

2 <-->:
1s become 4s & continue
2s nothing & stop
3s become 4s & stop
4s continue
5s break into 2 and retain end 2
6s adjacent become both 0 & collapse
6s non-adjacent become 0 and self-collapse
7s become 9s
8s don't occur yet
9s become A & Ln3

4 <-->:
1s nothing & stop
2s nothing & continue
3s become 1s & continue
4s count #
	5 4s become 21 left or 12 right & continue 4
	4 4s become 23 left or 32 right & continue 4
	3 4s become 11 & break into 2 & retain end 1
	2 4s become 1 & continue 2
5s break into 2 and retain end reacted 2
6s continue as 2
7s become 5 & break into 2 and retain ends reacted 2
8s don't occur yet
9s become D & Ln4

6 <-->:
1s become 5 & break into 2 & retain ends react 2
2s adjacent become 0 & both collapse
2s non-adjacent 6 moves adjacent
3s react 2 then 6 moves adjacent
4s stop
5s become 7 & 6 moves adjacent with 4s in between if 3s reacted
6s count #
	7 6s become 9
	6 6s become 5
	5 6s or less become 1 & continue
7s become A & Ln3
8s don't occur yet
9s become F & Ln5
		*/
		// ++
		// Ln3 Alanine Candida Per-Sulfate Pass
		// Ln4 Aspartate Nitrogenation Phase, Secant Trigs
		// Ln5 Phenylalanine Consumer Pass, Sine Trigs

		return T;
	}
}