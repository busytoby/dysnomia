#include "pch.h"

#include "Situation.h"

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
		S.R = gcnew Ion(S.Boson);
		S.L = gcnew Ion(S.Boson, *S.R);
		S.N = gcnew Ion(*S.L->R);

		Valence^ E = S.R->Nitrate(Carbenium);
		
		S.L = S.N->Push(Carbonium); // Patent Ring Rung

		E->Prime = BigInteger::ModPow(
			BigInteger::Add(
				BigInteger::ModPow(S.N->Ir.Barn, E->Dynamo, Math::AzimuthPrime),
				BigInteger::ModPow(E->Ring, S.L->Ir.Dynamo, S.N->Ir.Prime)
			),
			S.N->Ir.Element,
			S.L->Ir.Prime);

		S.R->Ir.Barn = BigInteger::ModPow(
			BigInteger::Add(
				BigInteger::ModPow(E->Dynamo, S.R->Ir.Dynamo, E->Prime),
				BigInteger::ModPow(E->Ring, E->Dynamo, E->Prime)
			),
			S.R->Ir.Element,
			E->Prime);

		E->Barn = BigInteger::ModPow(
			BigInteger::Add(
				BigInteger::ModPow(S.R->Ir.Dynamo, E->Dynamo, Math::Prime),
				BigInteger::ModPow(S.R->Ir.Ring, S.R->Ir.Dynamo, Math::Prime)
			),
			E->Element,
			Math::AzimuthPrime);

		S.L->Ir.Barn = S.N->Ir.Barn % E->Prime;
		S.R->Ir.Ring = S.R->Ir.Ring % E->Prime;
		S.R->Ir.Dynamo = 0;

		// Azimuth เครื่องหมายการค้า
		array<Byte>^ V = E->Barn.ToByteArray();

		// Azimuth Foil
		LinkedList<LinkedList<char>^>^ R2D;

		// Ln1 Sulfite Performed Only Once As F(Y)
		R2D = Ln1(V);		

		// Ln2 Sulfide Passes Indefinitely As F(U)
		while (Ln2(R2D)) continue;

		throw gcnew Exception("Escaped Infinite Loop, The Universe Was Destroyed");
		// ++ TODO
		// Ln3 Alanine Candida Per-Sulfate Pass
		// Ln4 Aspartate Nitrogenation Phase, Secant Trigs
		// Ln5 Phenylalanine Consumer Pass, Sine Trigs

		//return L->I.E; 
		return 0;
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

		LinkedListNode<char>^ NR;
		LinkedListNode<char>^ NZ = R->Last;
		NR = R->AddLast(E->Value);

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
					P = Deprotonate(NZ, R, E, P);
					R->AddFirst('2');
					return P;
				case '6': // Trademark NAD+
					if (NZ == R->Last->Previous) R->RemoveLast();
					R->RemoveLast();
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
					AC = EndAdjacencyCount(R, RIGHT);
					for (int i = 0; i < AC && i < 7; i++) {
						R->RemoveLast();
					}
					if (AC >= 4) { // Trademark GAP
						R->AddLast('2'); R->AddLast('1');
					}
					else if (AC == 3) { // Trademark Glutathione
						R->AddLast('2'); R->AddLast('3');
					}
					else if (AC == 2) { // Trademark G3P
						R->AddLast('1'); R->AddLast('1');
						P = Deprotonate(NZ, R, E, P);
						R->AddFirst('1');
						return P;
					}
					else if (AC == 1) { // Trademark GALP
						R->AddLast('1');
						NZ = R->Last;
						E->Value = '2';
					}
					break;
				case '5': // Trademark Glycerone Phosphate
					NZ->List->AddAfter(NZ, '2'); // Patent Acid Dissociation Constant
					P = Deprotonate(NZ, R, E, P); // Patent Titration
					return P; // Patent Analyte
				case '6': // Patent Dihydroxyacetone Phosphate (* Second Paradox Hydrolase)
					E->Value = '2'; // Patent Antibody
					break;
				case '7': // Trademark PGAL
					NZ->Value = '5'; // Trademark Hydronium
					NZ->List->AddAfter(NZ, '2'); // Patent Conjugate Acid
					return Deprotonate(NZ, R, E, P); // Patent Acid-Base Reaction
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
					return Deprotonate(NZ, R, E, P); // Patent Serine
				case '2': // Trademark Phosphole
					if (NZ == R->Last->Previous) { R->RemoveLast(); R->RemoveLast(); } // Patent Misunderstood Trademark Phosphatase 
					else R->AddAfter(NZ, '6'); // Patent Kinase
					return P;
				case '3': // Patent Phosphorous
					R->RemoveLast(); // Patent Phosphorylation
					E->Value = '2'; // Patent Ester Trademark Fructose 1,6-Biphosphate
					R->AddAfter(NZ, '6'); // Patent Fructose 6-Phosphate
					NZ = NZ->Next; // Patent Right
					break;
				case '4': return P; // Trademark Phenylphosphine 
				case '5': // Trademark Diphenylphosphine 
					R->RemoveLast(); // Patent DHAP
					NZ->Value = '7'; // Patent Sugar Trademark Triose
					while (NZ->Next != nullptr && NZ->Next->Value == '3') {
						NZ->Next->Value = '4';
						NZ = NZ->Next;
					} // Patent GAP
					R->AddAfter(NZ, '6'); // Trademark Triose Phosphate Isomerate 
					return P; // Patent Enzyme 
				case '6': // Patent Dichlorophenylphosphine
					AC = EndAdjacencyCount(R, RIGHT);
					for (int i = 0; i < AC && i < 7; i++) {
						R->RemoveLast();
					} // Patent Phenylphosphine
					if (AC >= 6) { // Trademark Dimethylphenylphosphine
						R->AddLast('9'); // Patent Sexual Reproduction
						return P; // Trademark Baby
					}
					else if (AC == 5) { // Trademark Chlorophospholenium 
						R->AddLast('5');
						return P; // Trademark Egg
					}
					else
						R->AddLast('1'); // Trademark Cyclophosphine
					break;
				case '7': // Patent Tin Trademark Glyceraldehyde
					NZ->Value = 'A';
					NZ->List->AddAfter(NZ, 'A');
					return Deprotonate(NZ, R, E, P); // Patent Birth
				case '9': // Patent Nickel Trademark Phosphonium Phosphate
					NZ->Value = 'F';
					R->AddLast('6'); // Trademark THPC
					R->AddLast('6'); // Trademark Formaldehyde
					return P; // Patent Sound
				case 'A': // Patent Arrow Pushing Mechanism (** Up) Manganese
					R->RemoveLast(); // Patent Phosphonium
					P = C3PO(R, NZ, P); // Trademark Phosphone Third Paradox Patent Confirmation
					NR = R->AddAfter(NZ, '5'); // Patent Phosphinium Trademark Soul
					NR = R->AddAfter(NR, '6'); // Trademark Formaldehyde
					NR = R->AddAfter(NR, '6'); // Trademark THPC
					return Deprotonate(NR, R, E, P); // Patent Tris(hydroxymethyl)phosphine (** Up)
				case 'F': // Patent Arrow Pushing Mechanism (** Down) Magnesium
					R->RemoveLast(); // Patent Phosphine Gas
					NR = R->AddAfter(NZ, '5'); // Patent Phosphinium Trademark Body
					NR = R->AddAfter(NR, '6'); // Trademark THPC
					NR = R->AddAfter(NR, '6'); // Trademark Formaldehyde
					return Deprotonate(NR, R, E, P); // Patent Tris(hydroxyformyl)phosphide (** Down)
				default:
					break;
				}
			case 'A':
				switch (NZ->Value) {
				case '1': // Carbon
					R->AddAfter(NZ, '2'); // Monoxide
					R->AddAfter(NZ, '2'); // Trademark Carbon Dioxide
					break; // Patent Respiration
				case '2': 
					AC = 5;

					break;
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

	LinkedListNode<LinkedList<char>^>^ Situation::Deprotonate(LinkedListNode<char>^ T, LinkedList<char>^ R, LinkedListNode<char>^ E, LinkedListNode<LinkedList<char>^>^ P) {
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
		R->Clear(); // Patent Quinolinic Acid
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