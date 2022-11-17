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

	BigInteger Situation::Foil(BigInteger Carbenium, BigInteger Carbonium) {
		I = gcnew Ion(S.Boson);
		Avail(Carbenium);
		BigInteger T = I->Hydrate(Carbonium);

		// Azimuth เครื่องหมายการค้า
		array<Byte>^ L = T.ToByteArray();

		// Azimuth Foil
		LinkedList<LinkedList<char>^>^ R2D;

		// Ln1 Sulfite Performed Only Once As F(Y)
		R2D = Ln1(L);		

		// Ln2 Sulfide Passes Indefinitely As F(U)
		while (Ln2(R2D)) continue;

		throw gcnew Exception("Escaped Infinite Loop, The Universe Was Destroyed");
		// ++ TODO
		// Ln3 Alanine Candida Per-Sulfate Pass
		// Ln4 Aspartate Nitrogenation Phase, Secant Trigs
		// Ln5 Phenylalanine Consumer Pass, Sine Trigs

		return T;
	}

	LinkedList<LinkedList<char>^>^ Situation::Ln1(array<Byte>^ L) {
		LinkedList<LinkedList<char>^>^ M = gcnew LinkedList<LinkedList<char>^>();
		LinkedList<char>^ N = gcnew LinkedList<char>();
		for (int i = 0; i < L->Length; i++) {
			String^ D = Convert::ToString(L[i], 8);
			for (int j = 0; j < D->Length; j++) {
				if (D[j] == '0') continue;
				if (D[j] != '7') N->AddLast((char) D[j]);
				else {
					M->AddFirst(N);
					N = gcnew LinkedList<char>();
				}
			}
		}
		return M;
	}

	bool Situation::Ln2(LinkedList<LinkedList<char>^>^ R2D2) {
		LinkedList<char>^ R = gcnew LinkedList<char>();
		LinkedListNode<LinkedList<char>^>^ W;
		LinkedListNode<LinkedList<char>^>^ P = R2D2->First;
		LinkedListNode<LinkedList<char>^>^ N;

		do {
			W = P;
			while (P->Value->Count == 0) {
				R->AddLast('7');
				N = P->Next;
				R2D2->Remove(P);
				if (N == nullptr)
					return true;
				P = N;
			}

			LinkedListNode<char>^ E = P->Value->First;
			do {
				switch (E->Value) {
				case '2':
				case '4':
				case '6':
					P = C3PO(R, E, P);
					break;
				default:
					R->AddLast(E->Value);
					break;
				}
			} while (E = E->Next);

			if (P == W) {
				W = R2D2->AddAfter(P, R);
				R2D2->Remove(P);
				P = W;
			}
			else {
				P = R2D2->AddAfter(P, R);
				//P = W;
			}

			R = gcnew LinkedList<char>();
		} while (P = P->Next);

		Threading::Thread::Sleep(1);
		return true;
	}

	// Trademark 3-Phosphate Pathways
	LinkedListNode<LinkedList<char>^>^ Situation::C3PO(LinkedList<char>^ R, LinkedListNode<char>^ E, LinkedListNode<LinkedList<char>^>^ P) {
		if (R->Count == 0) { R->AddLast(E->Value); return P; }

		LinkedListNode<char>^ NZ = R->Last;
		R->AddLast(E->Value);

		LinkedListNode<LinkedList<char>^>^ P1;

		int AC;

		do {
			switch (E->Value) {
			case '2': // Trademark NAD
				switch (NZ->Value) {
				case '1': NZ->Value = '4'; break; // Trademark NADH
				case '2': return P; // Trademark Pyruvate
				case '3': NZ->Value = '4'; return P;
				case '4': break;
				case '5':
					P = AsEx(NZ, R, E, P);
					R->AddFirst('2');
					return P;
				case '6': // Trademark NAD+
					if (NZ == R->Last->Previous) R->RemoveLast();
					R->RemoveLast();
					return P;
				case '7': NZ->Value = '9'; return P; // Trademark NADP
				case '9': NZ->Value = 'A'; /* Ln3 Stub */ return P; // Trademark Glyceraldehyde
				default:
					break;
				}
				break;
			case '4': // Trademark Acetyl Cysteine
				switch (NZ->Value) {
				case '1': return P;
				case '2': break;
				case '3': NZ->Value = '1'; break;
				case '4':
					AC = EndAdjacencyCount(R, RIGHT);
					for (int i = 0; i < AC && i < 7; i++) {
						R->RemoveLast();
					}
					if (AC >= 4) {
						R->AddLast('2'); R->AddLast('1');
					}
					else if (AC == 3) { // Trademark Glutathione
						R->AddLast('2'); R->AddLast('3');
					}
					else if (AC == 2) {
						R->AddLast('1'); R->AddLast('1');
						P = AsEx(NZ, R, E, P);
						R->AddFirst('1');
						return P;
					}
					else if (AC == 1) {
						R->AddLast('1');
						NZ = R->Last;
						E->Value = '2';
					}
					/*
					if (NZ != nullptr && NZ->List != nullptr && NZ != NZ->List->Last)
						NZ = NZ->Next;
					else NZ = R->Last;
					*/
					break;
				case '5':
					NZ->List->AddAfter(NZ, '2');
					P = AsEx(NZ, R, E, P);
					return P;
				case '6':
					E->Value = '2';
					break;
				case '7':
					NZ->Value = '5';
					NZ->List->AddAfter(NZ, '2');
					return AsEx(NZ, R, E, P);
				case '9':
					NZ->Value = 'D';
					//Ln4 stub
					return P;
				default:
					break;
				}
				break;
			case '6':
				switch (NZ->Value) {
				case '1':
					NZ->Value = '5';
					NZ->List->AddAfter(NZ, '2');
					return AsEx(NZ, R, E, P);
				case '2':
					if (NZ == R->Last->Previous) { R->RemoveLast(); R->RemoveLast(); }
					else R->AddAfter(NZ, '6');
					return P;
				case '3':
					R->RemoveLast();
					R->AddAfter(NZ, '6');
					E->Value = '2';
					NZ = NZ->Next;
					break;
				case '4': return P;
				case '5':
					R->RemoveLast();
					NZ->Value = '7';
					while (NZ->Next != nullptr && NZ->Next->Value == '3') {
						NZ->Next->Value = '4';
						NZ = NZ->Next;
					}
					R->AddAfter(NZ, '6');
					return P;
				case '6':
					AC = EndAdjacencyCount(R, RIGHT);
					for (int i = 0; i < AC && i < 7; i++) {
						R->RemoveLast();
					}
					if (AC >= 6) {
						R->AddLast('9');
						return P;
					}
					else if (AC == 5) {
						R->AddLast('5');
						return P;
					}
					else
						R->AddLast('1');
					/*
					if (NZ != nullptr && NZ->List != nullptr && NZ != NZ->List->Last)
						NZ = NZ->Next;
					else NZ = R->Last;
					*/
					break;
				case '7':
					NZ->Value = 'A';
					//Ln3 stub
					return P;
				case '9':
					NZ->Value = 'F';
					//Ln5 stub
					return P;
				default:
					break;
				}
			}
			if (NZ->List == nullptr) {
				int a = 99;
			}
		} while (NZ = NZ->Previous);

		return P;
	}

	LinkedListNode<LinkedList<char>^>^ Situation::AsEx(LinkedListNode<char>^ T, LinkedList<char>^ R, LinkedListNode<char>^ E, LinkedListNode<LinkedList<char>^>^ P) {
		LinkedListNode<LinkedList<char>^>^ P1;
		LinkedList<char>^ D = gcnew LinkedList<char>();
		LinkedListNode<char>^ L = T;
		if(L != nullptr)
			do D->AddFirst(L->Value); while (L = L->Previous);
		P1 = P->List->AddBefore(P, D); // Trademark Streptococcus
		D = gcnew LinkedList<char>();
		while (T = T->Next) {
			D->AddLast(T->Value);
		} 
		P1->List->Remove(P);
		R->Clear();
		return(P1->List->AddAfter(P1, D));
	}

	int Situation::EndAdjacencyCount(LinkedList<char>^ R, int Direction) {
		int count = 1;

		if (Direction == RIGHT) {
			LinkedListNode<char>^ Z = R->Last;
			while (Z->Previous != nullptr && Z->Previous->Value == Z->Value) {
				count++;
				Z = Z->Previous;
			}
		}
		else if (Direction == LEFT) {
			LinkedListNode<char>^ Z = R->First;
			while (Z->Next != nullptr && Z->Next->Value == Z->Value) {
				count++;
				Z = Z->Next;
			}
		}
		else throw gcnew Exception("Unknown Direction");

		return count;
	}
}