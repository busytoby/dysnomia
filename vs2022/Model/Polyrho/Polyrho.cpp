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

	void Polyrho::Cap(Polygamma^ Gamma) {
		Shift<Quaternion^>^ GammaShift = gcnew Shift<Quaternion^>(Gamma);
		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = this->First;

		int i = 0;
		do {
			O->Value.Key->Add(GammaShift[i + 0]);
			O->Value.Value->Add(gcnew Spinor(GammaShift[i + 2], O->Value.Key), O->Value.Value->Q);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 2]);
			O->Value.Value->Add(O->Value.Value->Mu, O->Value.Value->V->First->Value.Value->X);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 5]);
			O->Value.Value->Add(gcnew Spinor(GammaShift[i + 2], O->Value.Key), O->Value.Value->Q);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 7]);
			O->Value.Value->Add(O->Value.Value->Mu, O->Value.Value->Q);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 9]);
			O->Value.Value->Add(gcnew Spinor(GammaShift[i + 2], O->Value.Key), O->Value.Value->Q);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 11]);
			O->Value.Value->Add(O->Value.Value->Mu, O->Value.Value->V->Last->Value.Value->X);
		} while (O = O->Next);
	}
}