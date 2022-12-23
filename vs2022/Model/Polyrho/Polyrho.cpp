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
				gcnew Soliton(GammaShift[i + 3], O->Value.Value->Phi->Item2, GammaShift[i + 4])));
			AddLast(KeyValuePair<Polygamma^, Soliton^>(
				gcnew Polygamma(GammaShift[2]),
				gcnew Soliton(GammaShift[i + 4], O->Value.Value->Nu->Item2, GammaShift[i + 1])));
			i += 5;
		} while (O = O->Next);
	}

	void Polyrho::Cap(Polygamma^ Gamma) {
		Shift<Quaternion^>^ GammaShift = gcnew Shift<Quaternion^>(Gamma);
		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = First;

		int i = 0;
		do {
			O->Value.Key->Add(GammaShift[i + 0]);
			O->Value.Value->Add(gcnew Spinor(GammaShift[i + 2], O->Value.Key), O->Value.Value->Q);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 2]);
			O->Value.Value->Add(O->Value.Value->Mu, O->Value.Value->V->Last->Value.Value->X);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 5]);
			O->Value.Value->Add(gcnew Spinor(GammaShift[i + 5], O->Value.Key), O->Value.Value->Q);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 7]);
			O->Value.Value->Add(O->Value.Value->Mu, O->Value.Value->Q);
			O = O->Next;

			if (O != nullptr && GammaShift->Count > i + 9) {
				O->Value.Key->Add(GammaShift[i + 9]);
				O->Value.Value->Add(gcnew Spinor(GammaShift[i + 7], O->Value.Key), O->Value.Value->Q);
				O = O->Next;
			}

			if (O != nullptr && GammaShift->Count > i + 11) {
				O->Value.Key->Add(GammaShift[i + 11]);
				O->Value.Value->Add(O->List->Last->Value.Value->Mu, O->Value.Value->V->First->Value.Value->X);
			}
		} while (O != nullptr && (O = O->Next));
	}

	void Polyrho::Propagate(Polysigma^ Nu) {
		LeftShift<Quark^, Bundle^>^ QuarkShift = gcnew LeftShift<Quark^, Bundle^>((LinkedList<KeyValuePair<Quark^, Bundle^>>^)Nu);
		RightShift<Quark^, Bundle^>^ BundleShift = gcnew RightShift<Quark^, Bundle^>((LinkedList<KeyValuePair<Quark^, Bundle^>>^)Nu);

		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = First;	

		for (int i = 0; i < BundleShift->Count; i++) {
			BundleShift[i]->Run(gcnew Wavelet(O->Value.Value->YL->First->Value.Value, O->Value.Value->Mu, O->Value.Value->YL->Last->Value.Value));

			O->Value.Key->Add(QuarkShift[i]->R);
			O->Value.Value->Add(O->Value.Value->Mu, QuarkShift[i]);
			O = O->Next;

			if (BundleShift->Count > i + 2) {
				O->Value.Key->Add(QuarkShift[i]->N);
				O->Value.Value->Add(O->Value.Value->XL->First->Value.Value, QuarkShift[i + 2]);
				O = O->Next;
			}

			if (BundleShift->Count > i + 5) {
				O->Value.Key->Add(QuarkShift[i]->L);
				O->Value.Value->Add(O->Value.Value->XL->Last->Value.Value, QuarkShift[i + 5]);
				O = O->Next;
			}

			if (BundleShift->Count > i + 7) {
				O->Value.Key->Add(QuarkShift[i]->R);
				O->Value.Value->Add(O->Value.Value->YL->Last->Value.Value, QuarkShift[i + 7]);

				AddLast(KeyValuePair<Polygamma^, Soliton^>(
					gcnew Polygamma(O->Value.Value->V->First->Value.Value->L->Nu),
					O->Value.Value));
				O = O->Next;
			}
		}

		if (O != nullptr) {
			do {
				Select(Nu, O->Value.Key, O);
			} while (O = O->Next);
		}

		BackPropagate();
	}

	void Polyrho::Select(Polysigma^ Sigma, Polygamma^ Alpha, LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O) {
		LeftShift<Quark^, Bundle^>^ QuarkShift = gcnew LeftShift<Quark^, Bundle^>((LinkedList<KeyValuePair<Quark^, Bundle^>>^)Sigma);
		RightShift<Quark^, Bundle^>^ BundleShift = gcnew RightShift<Quark^, Bundle^>((LinkedList<KeyValuePair<Quark^, Bundle^>>^)Sigma);
		RightShift<BigInteger, Quaternion^>^ AlphaShift = gcnew RightShift<BigInteger, Quaternion^>(Alpha);

		for (int i = 0; i < BundleShift->Count; i++) {
			BundleShift[i]->Spin(gcnew Wavelet(O->Value.Value->XL->First->Value.Value, O->Value.Value->Mu, O->Value.Value->XL->Last->Value.Value));

			if (BundleShift->Count > i + 7) {
				O->Value.Key->Add(QuarkShift[i]->R);
				O->Value.Value->Add(O->Value.Value->YL->First->Value.Value, QuarkShift[i + 2]);
			}

			if (BundleShift->Count > i + 5) {
				O->Value.Key->Add(QuarkShift[i]->L);
				O->Value.Value->Add(O->Value.Value->XL->First->Value.Value, QuarkShift[i + 3]);
			}

			if (BundleShift->Count > i + 5) {
				O->Value.Key->Add(QuarkShift[i + 3]->N);
				O->Value.Value->Add(O->Value.Value->XL->Last->Value.Value, QuarkShift[i + 5]);
			}

			if (BundleShift->Count > i + 7) {
				O->Value.Key->Add(QuarkShift[i]->N);
				O->Value.Value->Add(O->Value.Value->YL->Last->Value.Value, QuarkShift[i + 7]);
			}

			O->Value.Value->Add(O->Value.Value->Mu);
		}
	}

	void Polyrho::BackPropagate() {
		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = Last;

		do {
			O->List->Last->Value.Value->Mu->Transit(O->Value.Key);
		} while (O = O->Previous);
	}
}