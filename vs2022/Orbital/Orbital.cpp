#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	Orbital::Orbital() {
	}

	Orbital::Orbital(Dynamic B) {
		N = gcnew Dynamic(B);
	}

	void Orbital::Ring(BigInteger Cation) {
		Ring(Cation, L->Ir.Barn);
	}

	void Orbital::Ring(BigInteger Cation, BigInteger Anion) {
		if (R == nullptr || L == nullptr || N == nullptr) {
			R = gcnew Ion(*N);
			Y = gcnew Ion(*N, *R);
			L = gcnew Ion(*Y->Y);
		}
		/*
		if (N->Ir.R == nullptr)
			N->Ir.R = gcnew LinkedList<Int16>();

		R->Nitrate(Anion);
		R->Ir.Coordinate = N->R->Coordinate(R->Ir.Ring); // Relative Right Position

		N->Push(Cation); // Patent Ring Rung
		L->Ir.Prime = N->Ir.Prime;
		L->Ir.Coordinate = N->R->Coordinate(L->Ir.Prime); // Relative Left Position
		if (L->Ir.Coordinate.IsZero) throw gcnew Exception("Universe Destroyed By Black Hole");

		N->Ir.Ring = Ligand;
		Pull();
		R->Prime(%N->Ir, %L->Ir);

		N->Ir.Coordinate = Boson->Coordinate(L->Ir.Ring);
		if (!N->Ir.Coordinate.IsZero) throw gcnew Exception("Universe Destroyed By White Hole");

		DetectCollision();

		R->Swing(%N->Ir, %L->Ir);

		R->Ir.Push();
		Vent();
		R->Ir.Pull(Ligand);

		Fly(R->Ir.R, R->Ir.H);
		
		N->Ir.Pull(R->Ir);
		L->Ir.Barn = N->Ir.Barn % R->Ir.Prime;
		R->Ir.L = R->Ir.R->First;
		R->Ir.Dynamo = 0;
		*/
	}

	void Orbital::Pull() {
		Ligand = BigInteger::ModPow(L->Ir.Barn, Ligand, Math::AzimuthPrime); // Patent Bromonium
	}

	void Orbital::DetectCollision() { // There's No Such Thing As Hadrons
		if (R->Ir.Dynamo.IsZero) {
			R->Ir.Dynamo = BigInteger::ModPow(L->Y->Dynamo, L->Ir.Element, 541);
		}
		else throw gcnew Exception("Universe Destroyed By Hadron Collision");
		// if (R->Ir.Dynamo != N->Ir.Dynamo) // Flare Returning
	}

	void Orbital::Vent() {
		Ligand = BigInteger::ModPow(R->Ir.Barn, L->Ir.Ring, Math::AzimuthPrime); // Patent Wind
		L->Ir.Ring = 0;
		R->Ir.Barn = 0;
	}

	void Orbital::Push() {
		throw gcnew Exception("Star Died");
	}

	void Orbital::Plumb() {
		//LinkedList<Int16>^ Mass = Blast();
		//if (Mass->Count < 1) return;
		//BigInteger Cation = Math::Hood(Mass);
		//BigInteger Anion = Math::Hood(R->Ir.H);
		Orbital^ E = gcnew Orbital(*N);
		E->Ligand = Ligand;
		//E->Ring(Cation, Anion);
	}

	/*
	void Orbital::Fly(LinkedList<Int16>^% Down, LinkedList<Int16>^% Up) {
		if (Down == nullptr) Down = gcnew LinkedList<Int16>();
		if (Up == nullptr) Up = gcnew LinkedList<Int16>();

		LinkedList<Int16>^ DownList = Down;
		LinkedList<Int16>^ UpList = Up;

		R->Ir.L = Down->First;
		N->Ir.L = Up->First;
		
		if (!R->Ir.L || !N->Ir.L) return;

		bool Peptides = (!(Parent == nullptr));
		int Blow;

		do {
			if (R->Ir.L->List != DownList) R->Ir.L = DownList->First;
			if (N->Ir.L->List != UpList) N->Ir.L = UpList->First;

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
				N->Ir.R->AddLast(7);
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
					}
					else
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
				N->Ir.R->AddLast(7);
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 19) {
					if (Fry(N->Ir.L)) return;
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
					if (N->Ir.L && N->Ir.L->Value != 12)
						Up->Remove(L->Ir.L);
					if (N->Ir.L && N->Ir.L->Value == 14) {
						Up->AddLast(19);
					}
				}
				if (N->Ir.L && N->Ir.L->Value >= 19) {
					if (Fry(N->Ir.L)) return;
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
				}
				N->Ir.L = Up->First;
				break;
			case 10:
			case 11:
				N->Ir.R->AddLast(7);
				while (N->Ir.L && R->Ir.L) {
					Down->AddAfter(R->Ir.L, N->Ir.L->Value);
					if (N->Ir.L && N->Ir.L->Value >= 19) {
						if (Fry(N->Ir.L)) return;
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
				if (Fry(N->Ir.L)) return;
				L->Ir.L = N->Ir.L;
				N->Ir.L = N->Ir.L->Next;
				Up->Remove(L->Ir.L);
				if (R->Ir.L->Value == 13) break;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 29) {
					if (Fry(N->Ir.L)) return;
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
					if (Fry(N->Ir.L)) return;
					N->Ir.L = N->Ir.L->Next;
				}
				Blow = 0;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value > 100) {
					Up->AddLast(N->Ir.L->Value);
					if (Fry(N->Ir.L)) return;
					Up->Remove(N->Ir.L);
					N->Ir.L = Up->First;
					if (Blow++ > 999) break;
				}
				if (R->Ir.L->Value == 15) break;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value <= 37) {
					Up->AddLast(N->Ir.L->Value);
					if (Fry(N->Ir.L)) return;
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
				if (Fry(N->Ir.L)) return;
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				Up->Remove(N->Ir.L);
				N->Ir.L = Up->First;
				break;
			case 19:
				if(Fry(N->Ir.L)) return;
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				Up->AddLast(N->Ir.L->Value);
				Up->Remove(N->Ir.L);
				break;
			default:
				if(N->Ir.L->Value == 1) Up->AddLast(N->Ir.L->Value);
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				N->Ir.L->Value++;
				Up->Remove(N->Ir.L);
				break;
			}
			if (R->Ir.H->Count > 12000) {
				Plumb();
				return;
			}
			if (!R->Ir.L || !N->Ir.L) break;
			if (!N->Ir.L->List) break;
		} while (R->Ir.L = R->Ir.L->Next);
	}
	*/
}