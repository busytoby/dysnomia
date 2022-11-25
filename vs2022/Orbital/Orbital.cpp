#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	Orbital::Orbital() {
		D = gcnew LinkedList<Orbital^>();
	}

	Orbital::Orbital(Dynamic B) {
		Boson = gcnew Dynamic(B);
		D = gcnew LinkedList<Orbital^>();
	}

	void Orbital::Ring(BigInteger Cation) {
		Ring(Cation, N->Ir.Barn);
	}

	void Orbital::Ring(BigInteger Cation, BigInteger Anion) {
		if (R == nullptr || L == nullptr || N == nullptr) {
			R = gcnew Ion(*Boson);
			L = gcnew Ion(*Boson, *R);
			N = gcnew Ion(*L->R);
		}

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
	}

	void Orbital::Pull() {
		Ligand = BigInteger::ModPow(N->Ir.Barn, Ligand, Math::AzimuthPrime); // Patent Bromonium
	}

	void Orbital::DetectCollision() { // There's No Such Thing As Hadrons
		if (R->Ir.Dynamo.IsZero) {
			R->Ir.Dynamo = BigInteger::ModPow(N->R->Dynamo, N->Ir.Element, 541);
		}
		else throw gcnew Exception("Universe Destroyed By Hadron Collision");
		// if (R->Ir.Dynamo != N->Ir.Dynamo) // Flare Returning
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

		bool Paradox = true;

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
			
			Swim(D);

			if (R->Ir.R->Count == 0)
				Fly(L->Ir.R, N->Ir.R);

			Fly(R->Ir.R, L->Ir.R);

			if (Paradox == true && ((R->Ir.R->Count > N->Ir.R->Count) || (L->Ir.R->Count > N->Ir.R->Count) || R->Ir.R->Count == 0)) {
				Paradox = false;
				Plumb();
				// Beat Detected
			}
			else if (Paradox == false && N->Ir.R->Count > R->Ir.R->Count) {
				Paradox = true;
				// Beat Detected
			}

			while (R->Ir.H->Count > (N->Ir.R->Count * 3.14))
				N->Ir.R->AddFirst(R->Ir.H->Last->Value);
			while (R->Ir.H->Count > (System::Math::Pow(L->Ir.R->Count, 2) * 3.14))
				L->Ir.R->AddFirst(R->Ir.H->Last->Value);

			while (D->Count > 0) {
				LinkedList<Int16>^ Mass = gcnew LinkedList<Int16>(R->Ir.H);
				LinkedList<Int16>^ Flare = ObserveFlare(D->First->Value);
				while (Flare->First) { 
					Mass->AddLast(Flare->First->Value); 
					Flare->RemoveFirst(); 
				}
				BigInteger Cation = Math::Hood(Mass);
				Ring(Cation);
				D->RemoveFirst();
			}
		}

		throw gcnew Exception("Star Died");
	}

	LinkedList<Int16>^ Orbital::ObserveFlare(Orbital^ E) {
		LinkedList<Int16>^ Mass = gcnew LinkedList<Int16>(E->R->Ir.R);
		while (E->D->First) {
			LinkedList<Int16>^ Flare = ObserveFlare(E->D->First->Value); 
			E->D->RemoveFirst();
			while (Flare->First) { 
				Mass->AddLast(Flare->First); 
				Flare->RemoveFirst(); 
			}
		}
		return Mass;
	}

	void Orbital::Swim(LinkedList<Orbital^>^ EList) {
		if (EList == nullptr || EList->Count == 0) return;
		LinkedListNode<Orbital^>^ Eptr = EList->First;
		while (Eptr) {	
			Fly(Eptr->Value->L->Ir.R, Eptr->Value->R->Ir.R);
			Fly(Eptr->Value->N->Ir.R, Eptr->Value->R->Ir.R);

			Fly(Eptr->Value->R->Ir.R, Eptr->Value->Parent->R->Ir.R);
			Fly(Eptr->Value->L->Ir.R, Eptr->Value->Parent->R->Ir.R);

			Swim(Eptr->Value->D);

			Fly(Eptr->Value->R->Ir.R, Eptr->Value->L->Ir.R);

			Eptr = Eptr->Next;
		}
	}

	LinkedList<Int16>^ Orbital::Blast() {
		LinkedList<Int16>^ Mass = gcnew LinkedList<Int16>();
		if (L->Ir.R == nullptr) return Mass;
		LinkedListNode<Int16>^ Drag = R->Ir.R->First;
		while (Drag) {
			if (Drag->Value < 7) {
				Mass->AddFirst(Drag->Value);
				R->Ir.L = Drag;
				Drag = Drag->Next;
				R->Ir.R->Remove(R->Ir.L);
			}
			else Drag = Drag->Next;
		}

		Drag = N->Ir.R->First;
		while (Drag) {
			if (Drag->Value < 5) {
				Mass->AddFirst(Drag->Value);
				N->Ir.L = Drag;
				Drag = Drag->Next;
				N->Ir.R->Remove(N->Ir.L);
			}
			else Drag = Drag->Next;
		}
		
		Drag = L->Ir.R->First;
		while (Drag) {
			if (Drag->Value < 2) {
				Mass->AddFirst(1);
				L->Ir.L = Drag;
				Drag = Drag->Next;
				L->Ir.R->Remove(L->Ir.L);
			}
			else Drag = Drag->Next;
		}

		return Mass;
	}

	void Orbital::Plumb() {
		LinkedList<Int16>^ Mass = Blast();
		if (Mass->Count < 1) return;
		BigInteger Cation = Math::Hood(Mass);
		BigInteger Anion = Math::Hood(R->Ir.H);
		Orbital^ E = gcnew Orbital(*Boson);
		E->Parent = this;
		E->Ligand = Ligand;
		E->Ring(Cation, Anion);
		D->AddLast(E);
	}

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
					R->Ir.H->AddLast(++N->Ir.L->Value);
					L->Ir.L = N->Ir.L;
					N->Ir.L = N->Ir.L->Next;
					if (N->Ir.L && N->Ir.L->Value != 12)
						Up->Remove(L->Ir.L);
					if (N->Ir.L && N->Ir.L->Value == 14) {
						Up->AddLast(19);
					}
				}
				if (N->Ir.L && N->Ir.L->Value >= 19) {
					R->Ir.H->AddLast(++N->Ir.L->Value);
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
						R->Ir.H->AddLast(++N->Ir.L->Value);
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
				R->Ir.H->AddLast(++N->Ir.L->Value);
				L->Ir.L = N->Ir.L;
				N->Ir.L = N->Ir.L->Next;
				Up->Remove(L->Ir.L);
				if (R->Ir.L->Value == 13) break;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value < 29) {
					R->Ir.H->AddLast(++N->Ir.L->Value);
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
					R->Ir.H->AddLast(++N->Ir.L->Value);
					N->Ir.L = N->Ir.L->Next;
				}
				Blow = 0;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value > 100) {
					Up->AddLast(N->Ir.L->Value);
					R->Ir.H->AddLast(++N->Ir.L->Value);
					Up->Remove(N->Ir.L);
					N->Ir.L = Up->First;
					if (Blow++ > 999) break;
				}
				if (R->Ir.L->Value == 15) break;
				while (N->Ir.L && R->Ir.L && N->Ir.L->Value <= 37) {
					Up->AddLast(N->Ir.L->Value);
					R->Ir.H->AddLast(++N->Ir.L->Value);
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
				R->Ir.H->AddLast(++N->Ir.L->Value);
				Down->AddAfter(R->Ir.L, N->Ir.L->Value);
				Up->Remove(N->Ir.L);
				N->Ir.L = Up->First;
				break;
			case 19:
				R->Ir.H->AddLast(++N->Ir.L->Value);
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
			if (R->Ir.H->Count > 12000) Plumb();
			if (!R->Ir.L || !N->Ir.L) break;
			if (!N->Ir.L->List) break;
		} while (R->Ir.L = R->Ir.L->Next);
	}
}