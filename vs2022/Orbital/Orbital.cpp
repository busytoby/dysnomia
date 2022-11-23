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

	void Orbital::Fly(LinkedList<Int16>^ Down, LinkedList<Int16>^ Up) {
		R->Ir.L = Down->First;
		N->Ir.L = Up->First;
		
		do {
			switch (R->Ir.L->Value) {
			case 1:
				while (N->Ir.L && N->Ir.L->Value < 4) {
					N->Ir.L = N->Ir.L->Next;
					Up->Remove(N->Ir.L->Previous);
				}
				if (N->Ir.L->Value >= 4) {
					R->Ir.L = Down->AddAfter(R->Ir.L, 4);
					if (N->Ir.L->Value < 8) {
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(N->Ir.L->Previous);
					}
				}
				break;
			case 2:
				break;
			case 3:
				do {
					N->Ir.L = N->Ir.L->Next;
					Up->Remove(N->Ir.L->Previous);
				} while (N->Ir.L && N->Ir.L->Value < 9);
				if (!N->Ir.L) break;
				R->Ir.L = Down->AddAfter(R->Ir.L, 5);
				N->Ir.L = N->Ir.L->Next;
				Up->Remove(N->Ir.L->Previous);
				break;
			case 4:
				L->Ir.L = N->Ir.L;
				do {
					while (N->Ir.L->Value < 9) N->Ir.L = N->Ir.L->Next;
					if (N->Ir.L->Value < 15) N->Ir.L->Value++;
					else {
						R->Ir.L = Down->AddAfter(R->Ir.L, 10);
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(N->Ir.L->Previous);
						break;
					}
				} while (N->Ir.L = N->Ir.L->Next);
				if(L->Ir.L && L->Ir.L->List) N->Ir.L = L->Ir.L;
				break;
			case 5:
				L->Ir.L = N->Ir.L;
				do {
					if (N->Ir.L->Value == 1) {
						R->Ir.L = R->Ir.L->Next;
						Down->Remove(R->Ir.L->Previous);
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(N->Ir.L->Previous);
					}
					else if (N->Ir.L->Value < 5) {
						R->Ir.L = Down->AddAfter(R->Ir.L, N->Ir.L->Value);
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(N->Ir.L->Previous);
					}
					else if (N->Ir.L->Value < 8) {
						R->Ir.L = Down->AddAfter(R->Ir.L, N->Ir.L->Value);
						if (L->Ir.L && L->Ir.L->List) N->Ir.L = L->Ir.L;
						break;
					} else
						N->Ir.L = N->Ir.L->Next;
				} while (N->Ir.L->Value < 15);
				break;
			case 6:
				L->Ir.L = N->Ir.L;
				do {
					if (N->Ir.L->Value == 1) {
						R->Ir.L = R->Ir.L->Next;
						Down->Remove(R->Ir.L->Previous);
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(N->Ir.L->Previous);
					}
					else if (N->Ir.L->Value < 9) {
						R->Ir.L = Down->AddAfter(R->Ir.L, N->Ir.L->Value);
						N->Ir.L = N->Ir.L->Next;
						Up->Remove(N->Ir.L->Previous);
					}
					else {
						R->Ir.L = Down->AddAfter(R->Ir.L, N->Ir.L->Value);
						N->Ir.L = N->Ir.L->Next;
					}
				} while (N->Ir.L->Value < 15);
				if (L->Ir.L && L->Ir.L->List) N->Ir.L = L->Ir.L;
				break;
			case 7:
				break;
			default:
				throw gcnew Exception("Universe Totally Busted");
			}
			if (!N->Ir.L) 
				break;
		} while (R->Ir.L = R->Ir.L->Next);
		R->Ir.L = Down->First;
		N->Ir.L = nullptr;
	}
}