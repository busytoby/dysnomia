#include "pch.h"

#include "Polyrho.h"

namespace Dysnomia {
	Polyrho::Polyrho(Polysigma^ Omega, Polygamma^ Gamma) {
		Shift<Quaternion^>^ GammaShift = gcnew Shift<Quaternion^>(Gamma);
		LinkedListNode<KeyValuePair<Quark^, Bundle^>>^ O = Omega->First;

		int i = 0;
		do {
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 0], O->Value.Value->Rho->Item1, GammaShift[i + 0])));
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 3], O->Value.Value->Gamma->Item1, GammaShift[i + 1])));
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 4], O->Value.Value->Phi->Item1, GammaShift[i + 2])));
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 1], O->Value.Value->Nu->Item1, GammaShift[i + 4])));
			i += 5;
			if (i >= Gamma->Count) break;
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 0], O->Value.Value->Rho->Item2, GammaShift[i + 0])));
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 1], O->Value.Value->Gamma->Item2, GammaShift[i + 3])));
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 2], O->Value.Value->Phi->Item2, GammaShift[i + 4])));
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 4], O->Value.Value->Nu->Item2, GammaShift[i + 1])));
			i += 5;
		} while (O = O->Next);
	}
}