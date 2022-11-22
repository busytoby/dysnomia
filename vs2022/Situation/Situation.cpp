#include "pch.h"

#include "Situation.h"
using namespace System::Globalization;


namespace Dysnomia {
	Situation::Situation() {
	}

	Situation::Situation(const Situation% Copier) {

	}

	BigInteger Situation::Avail(BigInteger Cation) {
		BigInteger Ligand = S.Boson.Avail(Cation);
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
		Valence^ E = S.Ring(Carbonium, Carbenium);

		// Ln1 Sulfite Performed Only Once As F(Y)
		Ln1(E->R);
		E->R->Clear(); // Consumed
		E->H->Clear(); // Blows Off

		// Ln2 Sulfide Passes Indefinitely As F(U)
		while (Ln2()) {
			GrowthFactor = 0;
		}

		throw gcnew Exception("Escaped Infinite Loop, The Universe Was Destroyed");

		return 0;
	}

	LinkedList<LinkedList<char>^>^ Situation::Ln1(LinkedList<char>^ L) {
		LinkedListNode<char>^ P = L->First;
		S.M = gcnew LinkedList<LinkedList<char>^>();
		S.L->Ir.R = gcnew LinkedList<char>();

		while(P != nullptr) {
			String^ D = Convert::ToString(P->Value, 8);
			for (int j = 0; j < D->Length; j++) {
				if (D[j] == '0') continue;
				if (D[j] != '7') S.L->Ir.R->AddLast((char) D[j]);
				else {
					S.M->AddFirst(S.L->Ir.R);
					S.L->Ir.R = gcnew LinkedList<char>();
				}
			}
			P = P->Next;
		}
		return S.M;
	}

	bool Situation::Ln2() {
		S.N->Ir.I = S.M->First;

		do {
			S.L->Ir.I = S.N->Ir.I;
			while (S.N->Ir.I->Value->Count == 0) {
				S.L->Ir.R->AddLast('7');
				S.R->Ir.I = S.N->Ir.I->Next;
				S.M->Remove(S.N->Ir.I);
				if (S.R->Ir.I == nullptr)
					return true;
				S.N->Ir.I = S.R->Ir.I;
			}

			LinkedListNode<char>^ E = S.N->Ir.I->Value->First;
			do {
				switch (E->Value) {
				case '2':
				case '4':
				case '6':
					S.N->Ir.I = C3PO(E, S.N->Ir.I);
					break;
				default:
					S.L->Ir.R->AddLast(E->Value);
					break;
				}
			} while (E = E->Next);

			if (S.N->Ir.I == S.L->Ir.I) {
				S.L->Ir.I = S.M->AddAfter(S.N->Ir.I, S.L->Ir.R);
				S.M->Remove(S.N->Ir.I);
				S.N->Ir.I = S.L->Ir.I;
			}
			else {
				S.N->Ir.I = S.M->AddAfter(S.N->Ir.I, S.L->Ir.R);
			}

			S.L->Ir.R = gcnew LinkedList<char>();
		} while (S.N->Ir.I = S.N->Ir.I->Next);

		Threading::Thread::Sleep(1);
		return true;
	}

	// Trademark 3-Phosphate Pathways
	LinkedListNode<LinkedList<char>^>^ Situation::C3PO(LinkedListNode<char>^ E, LinkedListNode<LinkedList<char>^>^ P) {
		S.N->Ir.R = S.L->Ir.R;
		if (S.N->Ir.R->Count == 0) { S.N->Ir.R->AddLast(E->Value); return P; }

		BigInteger Carbenium;
		Valence^ A;
		LinkedListNode<char>^ NR;
		LinkedListNode<char>^ NZ = S.N->Ir.R->Last;
		NR = S.N->Ir.R->AddLast(E->Value);

		int AC;

		do {
			switch (E->Value) {
			case '2': // Trademark NAD
				switch (NZ->Value) {
				case '1': NZ->Value = '4'; break; // Trademark NADH
				case '2': return P; // Trademark Pyruvate
				case '3': NZ->Value = '4'; return P; // Trademark Glycerone
				case '4': break; // Patent Dihydroxyacetone
				case '5':
					P = Deprotonate(NZ, E, P);
					S.N->Ir.R->AddFirst('2');
					return P;
				case '6': // Trademark NAD+
					if (NZ == S.N->Ir.R->Last->Previous) S.N->Ir.R->RemoveLast();
					S.N->Ir.R->RemoveLast();
					return P; // Patent NADP+
				case '7': NZ->Value = '9'; return P; // Trademark NADP
				case '9': NZ->Value = 'A'; return P; // Trademark Glyceraldehyde
				default:
					break;
				}
				break;
			case '4': // Trademark Acetyl Cysteine
				switch (NZ->Value) {
				case '1': return P; // Trademark Hydrogen Peroxide
				case '2': break; // Patent Triosephosphate
				case '3': NZ->Value = '1'; break; // Patent Isomerase
				case '4':
					AC = EndAdjacencyCount(S.N->Ir.R, RIGHT);
					for (int i = 0; i < AC && i < 7; i++) {
						S.N->Ir.R->RemoveLast();
					}
					if (AC >= 4) { // Trademark GAP
						S.N->Ir.R->AddLast('2'); S.N->Ir.R->AddLast('1');
					}
					else if (AC == 3) { // Trademark Glutathione
						S.N->Ir.R->AddLast('2'); S.N->Ir.R->AddLast('3');
					}
					else if (AC == 2) { // Trademark G3P
						S.N->Ir.R->AddLast('1'); S.N->Ir.R->AddLast('1');
						P = Deprotonate(NZ, E, P);
						S.N->Ir.R->AddFirst('1');
						return P;
					}
					else if (AC == 1) { // Trademark GALP
						S.N->Ir.R->AddLast('1');
						NZ = S.N->Ir.R->Last;
						E->Value = '2';
					}
					break;
				case '5': // Trademark Glycerone Phosphate
					NZ->List->AddAfter(NZ, '2'); // Patent Acid Dissociation Constant
					P = Deprotonate(NZ, E, P); // Patent Titration
					return P; // Patent Analyte
				case '6': // Patent Dihydroxyacetone Phosphate (* Second Paradox Hydrolase)
					E->Value = '2'; // Patent Antibody
					break;
				case '7': // Trademark PGAL
					NZ->Value = '5'; // Trademark Hydronium
					NZ->List->AddAfter(NZ, '2'); // Patent Conjugate Acid
					return Deprotonate(NZ, E, P); // Patent Acid-Base Reaction
				case '9': // Trademark TP
					NZ->Value = 'D'; // Patent Dihydroxyacetone Phosphate (* Second Paradox Hydrolase)
					return P; // Patent TIM
				case 'A':
					NZ->Value = '6'; // Patent Apoptosis
					return P; // Patent Glycerol Dehydrogenase
				default:
					break;
				}
				break;
			case '6':
				switch (NZ->Value) {
				case '1': // Trademark Methylphosphine
					NZ->Value = '5'; // Patent Spell Trademark Tyrosine Phosphata
					NZ->List->AddAfter(NZ, '2'); // Patent Threonine
					return Deprotonate(NZ, E, P); // Patent Serine
				case '2': // Trademark Phosphole
					if (NZ == S.N->Ir.R->Last->Previous) { S.N->Ir.R->RemoveLast(); S.N->Ir.R->RemoveLast(); } // Patent Misunderstood Trademark Phosphatase 
					else S.N->Ir.R->AddAfter(NZ, '6'); // Patent Kinase
					return P;
				case '3': // Patent Phosphorous
					S.N->Ir.R->RemoveLast(); // Patent Phosphorylation
					E->Value = '2'; // Patent Ester Trademark Fructose 1,6-Biphosphate
					S.N->Ir.R->AddAfter(NZ, '6'); // Patent Fructose 6-Phosphate
					NZ = NZ->Next; // Patent Right
					break;
				case '4': return P; // Trademark Phenylphosphine 
				case '5': // Trademark Diphenylphosphine 
					S.N->Ir.R->RemoveLast(); // Patent DHAP
					NZ->Value = '7'; // Patent Sugar Trademark Triose
					while (NZ->Next != nullptr && NZ->Next->Value == '3') {
						NZ->Next->Value = '4';
						NZ = NZ->Next;
					} // Patent GAP
					S.N->Ir.R->AddAfter(NZ, '6'); // Trademark Triose Phosphate Isomerate 
					return P; // Patent Enzyme 
				case '6': // Patent Dichlorophenylphosphine
					AC = EndAdjacencyCount(S.N->Ir.R, RIGHT);
					for (int i = 0; i < AC && i < 7; i++) {
						S.N->Ir.R->RemoveLast();
					} // Patent Phenylphosphine
					if (AC >= 6) { // Trademark Dimethylphenylphosphine
						S.N->Ir.R->AddLast('9'); // Patent Sexual Reproduction
						return P; // Trademark Baby
					}
					else if (AC == 5) { // Trademark Chlorophospholenium 
						S.N->Ir.R->AddLast('5');
						return P; // Trademark Egg
					}
					else
						S.N->Ir.R->AddLast('1'); // Trademark Cyclophosphine
					break;
				case '7': // Patent Tin Trademark Glyceraldehyde
					NZ->Value = 'A';
					NZ->List->AddAfter(NZ, 'A');
					return Deprotonate(NZ, E, P); // Patent Birth
				case '9': // Patent Nickel Trademark Phosphonium Phosphate
					NZ->Value = 'F';
					S.N->Ir.R->AddLast('6'); // Trademark THPC
					S.N->Ir.R->AddLast('6'); // Trademark Formaldehyde
					return P; // Patent Sound
				case 'A': // Patent Arrow Pushing Mechanism (** Up) Manganese
					S.N->Ir.R->RemoveLast(); // Patent Phosphonium
					if (GrowthFactor++ < 2) {
						P = C3PO(NZ, P); // Trademark Phosphone Third Paradox Patent Confirmation
						AC = 999;
					}
					NR = S.N->Ir.R->AddAfter(NZ, '5'); // Patent Phosphinium Trademark Soul
					NR = S.N->Ir.R->AddAfter(NR, '6'); // Trademark Formaldehyde
					NR = S.N->Ir.R->AddAfter(NR, '6'); // Trademark THPC
					return Deprotonate(NR, E, P); // Patent Tris(hydroxymethyl)phosphine (** Up)
				case 'F': // Patent Arrow Pushing Mechanism (** Down) Magnesium
					S.N->Ir.R->RemoveLast(); // Patent Phosphine Gas
					NR = S.N->Ir.R->AddAfter(NZ, '5'); // Patent Phosphinium Trademark Body
					NR = S.N->Ir.R->AddAfter(NR, '6'); // Trademark THPC
					NR = S.N->Ir.R->AddAfter(NR, '6'); // Trademark Formaldehyde
					return Deprotonate(NR, E, P); // Patent Tris(hydroxyformyl)phosphide (** Down)
				default:
					break;
				}
				break;
			case 'A':
				switch (NZ->Value) {
				case '1': // Carbon
					S.N->Ir.R->AddAfter(NZ, '2'); // Monoxide
					S.N->Ir.R->AddAfter(NZ, '2'); // Trademark Carbon Dioxide
					break; // Patent Respiration
				case '2': 
					Carbenium = BigInteger::Parse(Math::LinkedListToHexString(S.N->Ir.R), NumberStyles::AllowHexSpecifier);
					A = S.Ring(S.Ligand, Carbenium);
					Carbenium = S.Ligand;
					break;
				case '3':
				case '4':
				case '5':
					/*
					Carbenium = BigInteger::Parse(Math::LinkedListToHexString(R), NumberStyles::AllowHexSpecifier);
					A = S.Ring(S.Ligand, Carbenium);
					Carbenium = S.Ligand;
					NZ->List->AddAfter(NZ, '5'); 
					P = Deprotonate(NZ, R, E, P); 
					return P; 
					*/
					AC = 999;
					break;
				case '6':
					S.N->Ir.R->RemoveLast();
					if (S.N->Ir.R->Count == 0) return P;
					Carbenium = BigInteger::Parse(Math::LinkedListToHexString(S.N->Ir.R), NumberStyles::AllowHexSpecifier);
					A = S.Ring(S.Ligand, Carbenium);
					A->Coordinate = Carbenium = S.Ligand;
					NR = A->R->First;
					do {
						S.N->Ir.R->AddLast(NR->Value);
					} while (NR = NR->Next);
					A->R->Clear();

					S.N->Ir.R->AddLast('S');
					S.N->Ir.R->AddLast('6');
					return P;
				case 'A':
					if (NZ->Next != NZ->List->Last) return P;
					S.N->Ir.R->RemoveLast();
					if (S.N->Ir.R->Count == 0) return P;

					A = S.Ring(S.Ligand);
					A->Coordinate = S.Ligand;
					NR = A->R->First;
					do {
						S.N->Ir.R->AddLast(NR->Value);
					} while (NR = NR->Next);
					A->R->Clear();

					NZ = S.N->Ir.R->AddLast('S');
					NR = A->H->Last;
					do {
						S.N->Ir.R->AddLast(NR->Value);
					} while (NR = NR->Previous);

					S.N->Ir.R->AddLast('A');
					A->H->Clear();

					return P;
				default:
					break;
				}
				break;
			case 'S':
				AC = 999; // Stub
				break;
			}
			if (NZ->List == nullptr) {
				int a = 99;
			}
		} while (NZ = NZ->Previous);

		return P;
	}

	LinkedListNode<LinkedList<char>^>^ Situation::Deprotonate(LinkedListNode<char>^ T, LinkedListNode<char>^ E, LinkedListNode<LinkedList<char>^>^ P) {
		LinkedListNode<LinkedList<char>^>^ P1;
		LinkedList<char>^ D = gcnew LinkedList<char>(); // Patent Xanthurenic acid
		LinkedListNode<char>^ L = T; // Patent 3-Hydroxykynurenine
		if(L != nullptr)
			do D->AddFirst(L->Value); while (L = L->Previous); // Patent Kynurenic Acid
		P1 = P->List->AddBefore(P, D); // Trademark Kynurenine
		D = gcnew LinkedList<char>(); // Patent Melatonin
		while (T = T->Next) { // Patent Serotonin
			D->AddLast(T->Value);
		} 
		P1->List->Remove(P); // Patent Tryptophan Hydroxylase
		S.N->Ir.R->Clear(); // Patent Quinolinic Acid
		return(P1->List->AddAfter(P1, D)); // Trademark Tryptophan
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