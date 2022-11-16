﻿#include "pch.h"

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

		do {
			while (P->Value->Count == 0) {
				R->AddLast('7');
				LinkedListNode<LinkedList<char>^>^ N = P->Next;
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
					P = Ln2_PL(R, E, P);
					break;
				default:
					R->AddLast(E->Value);
					break;
				}
			} while (E = E->Next);

			if (P == R2D2->First) {
				R2D2->Remove(P);
				R2D2->AddFirst(R);
				P = R2D2->First;
			}
			else {
				W = P->Previous;
				R2D2->Remove(P);
				P = R2D2->AddAfter(W, R);
			}

			R = gcnew LinkedList<char>();
		} while (P = P->Next);

		Threading::Thread::Sleep(1);
		return true;
	}

	LinkedListNode<LinkedList<char>^>^ Situation::Ln2_PL(LinkedList<char>^ R, LinkedListNode<char>^ E, LinkedListNode<LinkedList<char>^>^ P) {
		if (R->Count == 0) { R->AddLast(E->Value); return P; }

		LinkedListNode<char>^ NZ = R->Last;
		R->AddLast(E->Value);

		LinkedListNode<LinkedList<char>^>^ P1;
		LinkedList<char>^ D2;
		int AC, temp;

		do {
			switch (E->Value) {
			case '2':
				switch (NZ->Value) {
				case '1': NZ->Value = '4'; break;
				case '2': return P;
				case '3': NZ->Value = '4'; return P;
				case '4': break;
				case '5':
					return(AsEx(R, E, P));
				case '6':
					if (NZ == R->Last->Previous) R->RemoveLast();
					R->RemoveLast();
					break;
				case '7': NZ->Value = '9'; return P;
				case '9': NZ->Value = 'A'; /* Ln3 Stub */ return P;
				default:
					temp = 0;
					break;
				}
				break;
			case '4':
				switch (NZ->Value) {
				case '1': return P;
				case '2': break;
				case '3': NZ->Value = '1'; break;
				case '4':
					AC = AdjacencyCount(NZ, LEFT);
					if (AC >= 5) {
						R->RemoveLast(); R->RemoveLast(); R->RemoveLast(); R->RemoveLast(); R->RemoveLast();
						R->AddLast('2'); R->AddLast('1');
						break;
					}
					else if (AC == 4) {
						R->RemoveLast(); R->RemoveLast(); R->RemoveLast(); R->RemoveLast();
						R->AddLast('2'); R->AddLast('3');
					}
					else if (AC == 3) {
						R->RemoveLast(); R->RemoveLast(); R->RemoveLast();
						R->AddLast('1'); R->AddLast('1'); R->AddLast('1');
						E->List->AddBefore(E, '1');
						return AsEx(R, E, P);
					}
					else if (AC == 2) {
						R->RemoveLast(); R->RemoveLast();
						R->AddLast('1');
						E->Value = '2';
					}
					break;
				case '5':
					return(AsEx(R, E, P));
				case '6':
					E->Value = '2';
					break;
				case '7':
					NZ->Value = '5';
					return(AsEx(R, E, P));
				case '9':
					NZ->Value = 'D';
					//Ln4 stub
					return P;
				default:
					temp = 99;
					break;
				}
				break;
			case '6':
				switch (NZ->Value) {
				case '1':
					NZ->Value = '5';
					E = E->List->AddBefore(E, '2');
					return(AsEx(R, E, P));
				case '2':
					if (NZ == R->Last->Previous) { R->RemoveLast(); R->RemoveLast(); }
					else R->AddAfter(NZ, '6');
					return P;
				case '3':
					R->RemoveLast();
					R->AddAfter(NZ, '6');
					R->AddAfter(NZ, '2');
					return P;
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
					AC = AdjacencyCount(NZ, LEFT);
					if (AC >= 5)
						for (int i = 0; i < AC; i++) {
							R->RemoveLast();
						}
					if (AC >= 7) {
						R->AddLast('9');
						return P;
					}
					else if (AC == 6) {
						R->AddLast('5');
						return P;
					}
					else if (AC == 5) {
						R->AddLast('1');
						break;
					}
				case '7':
					NZ->Value = 'A';
					//Ln3 stub
					return P;
				case '9':
					NZ->Value = 'F';
					//Ln5 stub
					return P;
				default:
					temp = 99;
					break;
				}
			}
		} while (NZ = NZ->Previous);

		return P;
	}

	LinkedListNode<LinkedList<char>^>^ Situation::AsEx(LinkedList<char>^ R, LinkedListNode<char>^ E, LinkedListNode<LinkedList<char>^>^ P) {
		LinkedListNode<LinkedList<char>^>^ P1;
		LinkedList<char>^ D;
		R->RemoveLast();
		P1 = P->List->AddBefore(P, R);
		R = gcnew LinkedList<char>();
		D = gcnew LinkedList<char>();
		do {
			D->AddLast(E->Value);
		} while (E = E->Next);
		P1->List->Remove(P);
		return(P1->List->AddAfter(P1, D));
	}

	int Situation::AdjacencyCount(LinkedListNode<char>^ Z, int Direction) {
		int count = 1;
		if (Direction == LEFT) {
			while (Z->Previous != nullptr && Z->Previous->Value == Z->Value) {
				count++;
				Z = Z->Previous;
			}
		}
		else if (Direction == RIGHT) {
			while (Z->Next != nullptr && Z->Next->Value == Z->Value) {
				count++;
				Z = Z->Next;
			}
		}
		else throw gcnew Exception("Unknown Direction");

		return count;
	}
}