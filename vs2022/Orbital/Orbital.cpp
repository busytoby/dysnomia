#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	void Orbital::Ring(BigInteger Cation) {
		Ring(Cation, N->Ir.Barn);
	}

	void Orbital::Ring(BigInteger Cation, BigInteger Anion) {
		if (R == nullptr || L == nullptr || N == nullptr) {
			R = gcnew Ion(Boson);
			L = gcnew Ion(Boson, *R);
			N = gcnew Ion(*L->R);
		}

		R->Nitrate(Anion);
		R->Ir.Coordinate = N->R->Coordinate(R->Ir.Ring); // Relative Right Position

		N->Push(Cation); // Patent Ring Rung
		L->Ir.Prime = N->Ir.Prime;
		L->Ir.Coordinate = N->R->Coordinate(L->Ir.Prime); // Relative Left Position
		if (L->Ir.Coordinate.IsZero) throw gcnew Exception("Universe Destroyed By Black Hole");

		N->Ir.Ring = Ligand;
		Pull();
		R->Prime(%N->Ir, %L->Ir);

		N->Ir.Coordinate = Boson.Coordinate(L->Ir.Ring);
		if (!N->Ir.Coordinate.IsZero) throw gcnew Exception("Universe Destroyed By White Hole");

		DetectCollision();

		R->Swing(%N->Ir, %L->Ir);

		R->Ir.Push();
		Vent();
		R->Ir.Pull(Ligand);

		R->Ir.L = R->Ir.R->First;
		N->Ir.L = R->Ir.H->First;
		Fly(R->Ir.R, R->Ir.H);
		
		N->Ir.Pull(R->Ir);
		L->Ir.Barn = N->Ir.Barn % R->Ir.Prime;
		R->Ir.L = R->Ir.R->First;
		R->Ir.Dynamo = 0;
	}

	void Orbital::Pull() {
		Ligand = BigInteger::ModPow(N->Ir.Barn, Ligand, Math::AzimuthPrime); // Patent Bromonium
	}

	void Orbital::DetectCollision() { // There's No Such Thing As Hadrons
		if (R->Ir.Dynamo.IsZero) {
			R->Ir.Dynamo = BigInteger::ModPow(N->R->Dynamo, N->Ir.Element, 541);
		}
		else throw gcnew Exception("Universe Destroyed By Hadron Collision");
		if (R->Ir.Dynamo != N->Ir.Dynamo) throw gcnew Exception("Universe Destroyed By Hadron Collision");
	}

	void Orbital::Vent() {
		Ligand = BigInteger::ModPow(R->Ir.Barn, N->Ir.Ring, Math::AzimuthPrime); // Patent Wind
		N->Ir.Ring = 0;
		R->Ir.Barn = 0;
	}

	void Orbital::Push() {
		L->Ir.L = N->Ir.R->First;
		R->Ir.L = R->Ir.R->First;

		// First Pull
		if (L->Ir.R == nullptr)
			L->Ir.R = gcnew LinkedList<Int16>();
		else throw gcnew Exception("LR Remainder");
		if(N->Ir.H == nullptr)
			N->Ir.H = gcnew LinkedList<Int16>();
		else throw gcnew Exception("NH Remainder");

		while (N->Ir.L = N->Ir.R->First) {
			if (N->Ir.L->Value == 0) {
				N->Ir.R->RemoveFirst();
				continue;
			}
			L->Ir.R->AddFirst(N->Ir.L->Value);
			N->Ir.R->RemoveFirst();

			if (N->Ir.L->Value != 7) continue;

			Fly(L->Ir.R, R->Ir.R);
			Fly(N->Ir.R, R->Ir.R);
			if (R->Ir.R->Count == 0)
				Fly(L->Ir.R, N->Ir.R);
			Fly(R->Ir.R, L->Ir.R);
		}
	}

	void Orbital::Fly(LinkedList<Int16>^ Down, LinkedList<Int16>^ Up) {
		R->Ir.L = Down->First;
		N->Ir.L = Up->First;
		
		if (!R->Ir.L || !N->Ir.L) return;

		bool Peptides = false;
		int Blow;

		do {
			if (!Peptides && R->Ir.L->Value > 7)
				Peptides = true;
			switch (R->Ir.L->Value) {
			case 1:
				while (N->Ir.L && N->Ir.L->Value < 4) {
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
					Up->Remove(L->Ir.L);
				}
				if (N->Ir.L && N->Ir.L->Value >= 4) {
					R->Ir.L = Down->AddAfter(R->Ir.L, 4);
					if (N->Ir.L->Value < 8) {
						L->Ir.L = N->Ir.L;
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(L->Ir.L);
					}
				}
				break;
			case 2:
				break;
			case 3:
				while (N->Ir.L && N->Ir.L->Value < 9) {
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
					Up->Remove(L->Ir.L);
				}
				R->Ir.L = Down->AddAfter(R->Ir.L, 5);
				break;
			case 4:
				while (N->Ir.L) {
					while (N->Ir.L && N->Ir.L->Value < 9) N->Ir.L = N->Ir.L->Next;
					if (!N->Ir.L) break;
					if (N->Ir.L->Value < 15) N->Ir.L->Value++;
					else {
						R->Ir.L = Down->AddAfter(R->Ir.L, 10);
						break;
					}
				}
				N->Ir.L = Up->First;
				break;
			case 5:
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 15) {
					if (N->Ir.L->Value == 1) {
						L->Ir.L = R->Ir.L;
						R->Ir.L = R->Ir.L->Next;
						Down->Remove(L->Ir.L);
						L->Ir.L = N->Ir.L;
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(L->Ir.L);
					}
					else if (N->Ir.L->Value < 5) {
						R->Ir.L = Down->AddAfter(R->Ir.L, N->Ir.L->Value);
						L->Ir.L = N->Ir.L;
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(L->Ir.L);
					}
					else if (N->Ir.L->Value < 8) {
						R->Ir.L = Down->AddAfter(R->Ir.L, N->Ir.L->Value);
						N->Ir.L = Up->First;
						break;
					} else
						N->Ir.L = N->Ir.L->Next;
				}
				break;
			case 6:
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 15) {
					if (N->Ir.L->Value == 1) {
						L->Ir.L = R->Ir.L;
						R->Ir.L = R->Ir.L->Next;
						Down->Remove(L->Ir.L);
						L->Ir.L = N->Ir.L;
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(L->Ir.L);
					}
					else if (N->Ir.L->Value < 9) {
						R->Ir.L = Down->AddAfter(R->Ir.L, N->Ir.L->Value);
						L->Ir.L = N->Ir.L;
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(L->Ir.L);
					}
					else {
						R->Ir.L = Down->AddAfter(R->Ir.L, N->Ir.L->Value);
						N->Ir.L = N->Ir.L->Next;
					}
				}
				N->Ir.L = Up->First;
				break;
			case 7:
				if (Peptides) {
					while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 15) {
						if (N->Ir.L->Value == 1) {
							L->Ir.L = R->Ir.L;
							R->Ir.L = R->Ir.L->Next;
							Down->Remove(L->Ir.L);
							L->Ir.L = N->Ir.L;
							N->Ir.L = N->Ir.L->Next;
							Up->Remove(L->Ir.L);
						}
						else if (N->Ir.L->Value < 11) {
							R->Ir.L = Down->AddAfter(R->Ir.L, 11);
							L->Ir.L = N->Ir.L;
							N->Ir.L = N->Ir.L->Next;
							Up->Remove(L->Ir.L);
							break;
						}
						else {
							L->Ir.L = N->Ir.L;
							N->Ir.L = N->Ir.L->Next;
							Up->Remove(L->Ir.L);
						}
					}
					N->Ir.L = Up->First;
				}
				break;
			case 8:
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				Up->Remove(N->Ir.L);
				N->Ir.L = Up->First;
				break;
			case 9:
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 19) {
					R->Ir.H->AddLast(N->Ir.L->Value);
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
					if (N->Ir.L && N->Ir.L->Value != 12)
						Up->Remove(L->Ir.L);
					if (N->Ir.L && N->Ir.L->Value == 14) {
						Up->AddLast(19);
					}
				}
				if (N->Ir.L && N->Ir.L->Value >= 19) {
					N->Ir.L->Value++;
					R->Ir.H->AddLast(N->Ir.L->Value);
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
				}
				N->Ir.L = Up->First;
				break;
			case 10:
			case 11:
				while (N->Ir.L && R->Ir.L) {
					Down->AddAfter(R->Ir.L, N->Ir.L->Value);
					if (N->Ir.L && N->Ir.L->Value >= 19) {
						N->Ir.L->Value++;
						R->Ir.H->AddLast(N->Ir.L->Value);
						L->Ir.L = N->Ir.L;
						N->Ir.L = N->Ir.L->Next;
						if (N->Ir.L && N->Ir.L->Value == 21) break;
						if (N->Ir.L && N->Ir.L->Value != 23) continue;
					}
					if (!N->Ir.L) return;
					N->Ir.L = N->Ir.L->Next;
					if (R->Ir.L->Value == 10) break;
				}
				break;
			case 12:
				L->Ir.L = N->Ir.L;
				N->Ir.L = N->Ir.L->Next;
				Up->Remove(L->Ir.L);
				break;
			case 13:
			case 14:
				R->Ir.H->AddLast(N->Ir.L->Value);
				L->Ir.L = N->Ir.L;
				N->Ir.L = N->Ir.L->Next;
				Up->Remove(L->Ir.L);
				if (R->Ir.L->Value == 13) break;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 29) {
					R->Ir.H->AddLast(N->Ir.L->Value);
					N->Ir.L = N->Ir.L->Next;
				}
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value > 100) {
					Down->AddLast(N->Ir.L->Value);
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
					Up->Remove(L->Ir.L);
				}
				break;
			case 15:
			case 16:
			case 17:
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 29) {
					R->Ir.H->AddLast(N->Ir.L->Value);
					N->Ir.L = N->Ir.L->Next;
				}
				Blow = 0;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value > 100) {
					Up->AddLast(N->Ir.L->Value);
					R->Ir.H->AddLast(N->Ir.L->Value);
					Up->Remove(N->Ir.L);
					N->Ir.L = Up->First;
					if (Blow++ > 999) break;
				}
				if (R->Ir.L->Value == 15) break;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value <= 37) {
					Up->AddLast(N->Ir.L->Value);
					R->Ir.H->AddLast(N->Ir.L->Value);
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
					Up->Remove(L->Ir.L);
				}
				N->Ir.L = Up->First;
				if (R->Ir.L->Value == 16) break;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 99) {
					Down->AddLast(1);
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
					Up->Remove(L->Ir.L);
				}
				break;
			case 18:
				R->Ir.H->AddLast(N->Ir.L->Value);
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				Up->Remove(N->Ir.L);
				N->Ir.L = Up->First;
				break;
			case 19:
				R->Ir.H->AddLast(N->Ir.L->Value);
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				Up->AddLast(N->Ir.L->Value);
				Up->Remove(N->Ir.L);
				break;
			default:
				if(N->Ir.L->Value == 1) Up->AddLast(N->Ir.L->Value);
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				Up->Remove(N->Ir.L);
				return;
			}
			if (!R->Ir.L || !N->Ir.L) break;
		} while (R->Ir.L = R->Ir.L->Next);
	}
}