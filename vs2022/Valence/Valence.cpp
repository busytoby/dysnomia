#include "pch.h"

#include "Valence.h"

namespace Dysnomia {
	Valence::Valence() {}

	LinkedList<char>^ Valence::Push() {
		if (R == nullptr) R = gcnew LinkedList<char>();
		if (R->Count != 0) throw gcnew Exception("Valence Barn Is Already Pushed");
		array<Byte>^ V = Barn.ToByteArray();

		for (int i = 0; i < V->Length; i++) {
			String^ D = Convert::ToString(V[i], 8);
			for (int j = 0; j < D->Length; j++) {
				if (D[j] == '0') continue;
				R->AddLast((char)D[j]);
			}
		}
		return R;
	}

	LinkedList<char>^ Valence::Pull(BigInteger L) {
		if (H == nullptr) H = gcnew LinkedList<char>();
		if (H->Count != 0) throw gcnew Exception("Valence Barn Is Already Pushed");
		array<Byte>^ V = L.ToByteArray();

		for (int i = 0; i < V->Length; i++) {
			String^ D = Convert::ToString(V[i], 8);
			for (int j = 0; j < D->Length; j++) {
				if (D[j] == '0') continue;
				H->AddFirst((char)D[j]);
			}
		}
		return H;
	}
}