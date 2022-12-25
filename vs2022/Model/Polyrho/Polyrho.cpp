#include "pch.h"

#include "Polyrho.h"

namespace Dysnomia {
	Polyrho::Polyrho(Polysigma^ Omega, Polygamma^ Gamma) {
		LinkedListNode<KeyValuePair<Quark^, Bundle^>>^ O = Omega->Last;

		if (O == nullptr) throw gcnew Exception("Null Polysigma");

		Polygamma^ Rho = gcnew Polygamma(O->Value.Key->N);
		do {
			for (int i = 0; i < 5 && Gamma->Count > 0; i++) {
				Rho->Add(Gamma->Head);
				Gamma->RemoveLast();
			}
			if (O != nullptr && O->Value.Value->Eta != nullptr) {
				Rho->Add(O->Value.Value->Gamma->Item1->N);
				Rho->Add(O->Value.Value->Nu->Item1->N);
				Rho->Add(O->Value.Value->Rho->Item1->N);
				Rho->Add(O->Value.Value->Nu->Item2->N);
				Rho->Add(O->Value.Value->Phi->Item2->N);
				Rho->Add(O->Value.Value->Rho->Item2->N);
				Rho->Add(O->Value.Value->Sigma->Item2->N);
				AddLast(KeyValuePair<Polygamma^, Soliton^>(Rho, O->Value.Value->Eta));
			}
			O = O->Next;
			if (O == nullptr) break;
			Rho = gcnew Polygamma(O->Value.Key->N);
		} while (O = O->Previous);

		AddLast(KeyValuePair<Polygamma^, Soliton^>(
			Rho,
			gcnew Soliton(Rho->Tail, Omega->TailQuark, Rho->Head)));
	}

	void Polyrho::Cap(Polygamma^ Gamma) {
		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = First;

		if (O->Value.Key->Count == 0) throw gcnew Exception("Bad Polygamma Cap");
		Polygamma^ Rho = gcnew Polygamma(O->Value.Key->Head);
		O->Value.Key->RemoveLast();

		do {
			for (int i = 0; i < 4 && Gamma->Count > 0; i++) {
				Rho->Add(Gamma->Head);
				Gamma->RemoveLast();
			}

			if (O->Value.Key->Count >= 0) {
				Rho->Add(O->Value.Key->Head);
				O->Value.Key->RemoveLast();
			}

			if (Gamma->Count == 0) break;
			O->Value.Key->Add(Rho->Head);
			O->Value.Value->Add(O->Value.Value->Mu, gcnew Quark(O->Value.Key->Head, Rho->Head, O->Value.Key->Tail), Rho);
			Rho->Add(O->Value.Value->Q->N);
			AddFirst(KeyValuePair<Polygamma^, Soliton^>(Rho, O->Value.Value));

			if (Gamma->Count == 0) break;
			for (int i = 0; i < 7 && Gamma->Count > 0; i++) {
				O->List->Last->Value.Value->Qi->Alpha(gcnew Spinor(Gamma->Tail, Rho));
				Gamma->RemoveFirst();
			}

			Rho = nullptr;
			O = O->Next;
			if (O == nullptr) break;
			Rho = gcnew Polygamma(O->Value.Key->Head);
			O->Value.Key->RemoveLast();
		} while (Gamma->Count > 0);
		if(Rho != nullptr)
			AddFirst(KeyValuePair<Polygamma^, Soliton^>(
				Rho,
				gcnew Soliton(Rho->Tail, Last->Value.Value->Q, Rho->Head)));
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