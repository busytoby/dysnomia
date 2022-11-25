#include "pch.h"

#include "Valence.h"

namespace Dysnomia {
	Valence::Valence() {
	}

	Valence::Valence(const Valence% Copier) {
		Foundation = Copier.Foundation;
		Element = Copier.Element;
		Dynamo = Copier.Dynamo;
		Manifold = Copier.Manifold;
		Ring = Copier.Ring;
		Barn = Copier.Barn;
		Coordinate = Copier.Coordinate;
		Prime = Copier.Prime;	
	}

	void Valence::Push() {
		R = gcnew LinkedList<Int16>();
		array<Byte>^ V = Barn.ToByteArray();

		for (int i = 0; i < V->Length; i++) {
			String^ D = Convert::ToString(V[i], 8);
			for (int j = 0; j < D->Length; j++) {
				if (D[j] == '0') continue;
				R->AddLast(D[j] - '0');
			}
		}
	}

	void Valence::Pull(Valence% V) {
		if (R == nullptr) R = gcnew LinkedList<Int16>();

		V.L = V.H->First;
		while (V.L) {
			L = R->AddLast(7);
			while (V.L && V.L->Value < 14) {
				L = R->AddAfter(L, V.L->Value);
				V.L = V.L->Next;
				if (V.L)
					V.H->Remove(V.L->Previous);
				else V.H->RemoveLast();
			}
			if (V.L && V.L->Value == 15 && V.L->Next && V.L->Next->Value == 15) {
				L = R->AddAfter(L, V.L->Value);
				V.L = V.L->Next;
				V.H->Remove(V.L->Previous);
				L = R->AddAfter(L, V.L->Value);
				V.L = V.L->Next;
				if (V.L)
					V.H->Remove(V.L->Previous);
				else V.H->RemoveLast();
				continue;
			}
			while (V.L && V.L->Value >= 14) {
				L = R->AddAfter(L, V.L->Value);
				V.L = V.L->Next;
				if (V.L)
					V.H->Remove(V.L->Previous);
				else V.H->RemoveLast();
			}
		}
		V.L = V.H->First;
		L = R->First;

		if (V.H->Count > 0) throw gcnew Exception("Fallout Failure");
	}

	void Valence::Pull(BigInteger L) {
		H = gcnew LinkedList<Int16>();
		array<Byte>^ V = L.ToByteArray();

		for (int i = 0; i < V->Length; i++) {
			String^ D = Convert::ToString(V[i], 16)->ToUpper();
			for (int j = 0; j < D->Length; j++) {
				if (D[j] == '0') continue;
				H->AddFirst(System::Int16::Parse(D[j].ToString(), System::Globalization::NumberStyles::HexNumber));
			}
		}
	}
}