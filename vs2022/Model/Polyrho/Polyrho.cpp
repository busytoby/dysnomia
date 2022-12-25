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
			if (i + 5 >= Gamma->Count) break;
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
			if (i + 5 >= Gamma->Count) break;
		} while (O = O->Next);
	}

	void Polyrho::Cap(Polygamma^ Gamma) {
		Shift<Quaternion^>^ GammaShift = gcnew Shift<Quaternion^>(Gamma);
		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = First;

		int i = 0;
		do {
			O->Value.Key->Add(GammaShift[i + 0]);
			O->Value.Value->Add(gcnew Spinor(GammaShift[i + 2], O->Value.Key), O->Value.Value->Q, Gamma);
			O = O->Next;

			O->Value.Key->Add(GammaShift[i + 2]);
			O->Value.Value->Add(O->Value.Value->Mu, O->Value.Value->V->Last->Value.Value->X, Gamma);
			O = O->Next;

			if (O != nullptr && GammaShift->Count > i + 5) {
				Spinor^ Chi = gcnew Spinor(GammaShift[i], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 1], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 2], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 3], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 4], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);

				O->Value.Key->Add(GammaShift[i + 5]);
				O->Value.Value->Add(gcnew Spinor(GammaShift[i + 5], O->Value.Key), O->Value.Value->Q, Gamma);
				O = O->Next;
			}

			if (O != nullptr && GammaShift->Count > i + 7) {
				O->Value.Key->Add(GammaShift[i + 7]);
				O->Value.Value->Add(O->Value.Value->Mu, O->Value.Value->Q, Gamma);
				O = O->Next;
			}

			if (O != nullptr && GammaShift->Count > i + 9) {
				Spinor^ Chi = gcnew Spinor(GammaShift[i + 4], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 5], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 6], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 7], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 8], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);

				O->Value.Key->Add(GammaShift[i + 9]);
				O->Value.Value->Add(gcnew Spinor(GammaShift[i + 7], O->Value.Key), O->Value.Value->Q, Gamma);
				O = O->Next;
			}

			if (O != nullptr && GammaShift->Count > i + 11) {
				Spinor^ Chi = gcnew Spinor(GammaShift[i], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 1], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 2], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 3], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 4], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);

				Chi = gcnew Spinor(GammaShift[i + 6], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 7], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 8], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 9], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(GammaShift[i + 10], Gamma);
				O->List->Last->Value.Value->Qi->Alpha(Chi);

				O->Value.Key->Add(GammaShift[i + 11]);
				O->Value.Value->Add(O->List->Last->Value.Value->Mu, O->Value.Value->V->First->Value.Value->X, Gamma);

				for (int i = 5; i > 1; i--) {
					Spinor^ L = gcnew Spinor(GammaShift[GammaShift->Count - i], Gamma);
					O->List->Last->Value.Value->Qi->Alpha(L);
				}
			}
			i++;
		} while (O != nullptr && (O = O->Next));
	}

	void Polyrho::Propagate(Polysigma^ Nu) {
		LeftShift<Quark^, Bundle^>^ QuarkShift = gcnew LeftShift<Quark^, Bundle^>((LinkedList<KeyValuePair<Quark^, Bundle^>>^)Nu);
		RightShift<Quark^, Bundle^>^ BundleShift = gcnew RightShift<Quark^, Bundle^>((LinkedList<KeyValuePair<Quark^, Bundle^>>^)Nu);

		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = First;	

		for (int i = 0; i < BundleShift->Count && O != nullptr; i++) {
			BundleShift[i]->Run(gcnew Wavelet(O->Value.Value->Qi->Phi->Nu, O->Value.Value->Mu, O->Value.Value->Qi->Phi->Sigma));

			O->Value.Key->Add(QuarkShift[i]->R);
			O->Value.Value->Add(O->Value.Value->Mu, QuarkShift[i], O->Value.Key);
			O = O->Next;

			if (BundleShift->Count > i + 2) {
				O->Value.Key->Add(QuarkShift[i]->N);
				O->Value.Value->Add(O->Value.Value->XL->First->Value.Value, QuarkShift[i + 2], O->Value.Key);
				O = O->Next;
			}

			if (BundleShift->Count > i + 5) {
				O->Value.Key->Add(QuarkShift[i]->L);
				O->Value.Value->Add(O->Value.Value->XL->Last->Value.Value, QuarkShift[i + 5], O->Value.Key);
				O = O->Next;
			}

			if (BundleShift->Count > i + 7) {
				Spinor^ Chi = gcnew Spinor(O->Value.Value->V->Last->Value.Value->L->Gamma, O->Value.Key);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(O->Value.Value->V->Last->Value.Value->L->Nu, O->Value.Key);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				Chi = gcnew Spinor(O->Value.Value->V->Last->Value.Value->L->Phi, O->Value.Key);
				O->List->Last->Value.Value->Qi->Alpha(Chi);
				// Rho Isn't Added
				Chi = gcnew Spinor(O->Value.Value->V->Last->Value.Value->L->Sigma, O->Value.Key);
				O->List->Last->Value.Value->Qi->Alpha(Chi);

				O->Value.Key->Add(O->Value.Value->V->Last->Value.Value->L->Phi);
				O->Value.Value->Add(O->Value.Value->XL->Last->Value.Value, QuarkShift[i + 7], O->Value.Key);

				O = O->Next;
			}
		}

		if (O != nullptr) {
			do {
				Select(Nu, O->Value.Key, O);
			} while (O = O->Next);
		}

		Delta();
	}

	void Polyrho::Select(Polysigma^ Sigma, Polygamma^ Alpha, LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O) {
		LeftShift<Quark^, Bundle^>^ QuarkShift = gcnew LeftShift<Quark^, Bundle^>((LinkedList<KeyValuePair<Quark^, Bundle^>>^)Sigma);
		RightShift<Quark^, Bundle^>^ BundleShift = gcnew RightShift<Quark^, Bundle^>((LinkedList<KeyValuePair<Quark^, Bundle^>>^)Sigma);

		for (int i = 0; i < BundleShift->Count && O != nullptr; i++) {
			Spinor^ Chi = gcnew Spinor(O->Value.Value->V->Last->Value.Value->L->Gamma, O->Value.Key);
			O->List->Last->Value.Value->Qi->Alpha(Chi);
			Chi = gcnew Spinor(O->Value.Value->V->Last->Value.Value->L->Nu, O->Value.Key);
			O->List->Last->Value.Value->Qi->Alpha(Chi);

			BundleShift[i]->Spin(gcnew Wavelet(
				O->Value.Value->XL->Last->Value.Value, 
				O->Value.Value->Mu, 
				O->Value.Value->XL->First->Value.Value));
			// Phi & Rho Aren't Added

			Chi = gcnew Spinor(O->Value.Value->V->Last->Value.Value->L->Sigma, O->Value.Key);
			O->List->Last->Value.Value->Qi->Alpha(Chi);
			O = O->Next;
		}
	}

	void Polyrho::Delta() {
		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = Last;

		O->List->Last->Value.Value->Mu->Transit(O->Value.Key);
	}
}