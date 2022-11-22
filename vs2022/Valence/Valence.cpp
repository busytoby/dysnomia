#include "pch.h"

#include "Valence.h"

namespace Dysnomia {
	Valence::Valence() {}

	Valence::Valence(const Valence% Copier) {
		Foundation = Copier.Foundation;
		Element = Copier.Element;
		Dynamo = Copier.Dynamo;
		Manifold = Copier.Manifold;
		Ring = Copier.Ring;
		Barn = Copier.Barn;
		Coordinate = Copier.Coordinate;
		Prime = Copier.Prime;

		R = Copier.R;
		H = Copier.H;
		I = Copier.I;
	}

	void Valence::Push() {
		if (R == nullptr) R = gcnew LinkedList<Int16>();
		if (R->Count != 0) throw gcnew Exception("Valence Is Already Pushed");
		array<Byte>^ V = Barn.ToByteArray();

		for (int i = 0; i < V->Length; i++) {
			String^ D = Convert::ToString(V[i], 8);
			for (int j = 0; j < D->Length; j++) {
				if (D[j] == '0') continue;
				R->AddLast(D[j] - '0');
			}
		}
	}

	void Valence::Pull(BigInteger L) {
		if (H == nullptr) H = gcnew LinkedList<Int16>();
		if (H->Count != 0) throw gcnew Exception("Valence Is Already Pushed");
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