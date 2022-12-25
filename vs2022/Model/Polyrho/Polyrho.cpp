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
		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ G = Gamma->Last;

		if (O->Value.Key->Count == 0) throw gcnew Exception("Bad Polygamma Cap");
		Polygamma^ Rho = gcnew Polygamma(O->Value.Key->Head);

		if(Qi == nullptr) Qi = gcnew Polynu();
		Qi->Phi = O->Value.Value->Qi->Phi;

		do {
			for (int i = 0; i < 4 && G != nullptr; i++) {
				Rho->Add(G->Value.Value);
				G = G->Previous;
			}

			if (O->Value.Key->Count >= 0) {
				Rho->Add(O->Value.Key->Head);
			}

			O->Value.Key->Add(Rho->Head);
			O->Value.Value->Add(O->Value.Value->Mu, gcnew Quark(O->Value.Key->Head, Rho->Head, O->Value.Key->Tail), Rho);
			Rho->Add(O->Value.Value->Q->N);
			AddFirst(KeyValuePair<Polygamma^, Soliton^>(Rho, O->Value.Value));

			for (int i = 0; i < 7 && G != nullptr; i++) {
				Qi->Alpha(gcnew Spinor(G->Value.Value, Rho));
				G = G->Previous;
			}

			O = O->Next;
			if (O == nullptr) break;
			Qi->Phi = O->Value.Value->Qi->Phi;
			Rho = gcnew Polygamma(O->Value.Key->Head);
		} while (G != nullptr);
		if (Rho != nullptr) {
			LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ R = Rho->First;
			for (int i = 0; i < Rho->Count && R != nullptr; i++) {
				Qi->Alpha(gcnew Spinor(G->Value.Value, Rho));
				R = R->Next;
			}
			AddFirst(KeyValuePair<Polygamma^, Soliton^>(
				Rho,
				gcnew Soliton(Rho->Head, Last->Value.Value->Q, Rho->Tail)));
		}
	}

	void Polyrho::Propagate(Polysigma^ Nu) {
		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = First;	
		LinkedListNode<KeyValuePair<Quark^, Bundle^>>^ N = Nu->Last;

		while (O) {
			Qi->Phi = O->Value.Value->Qi->Phi;
			while (N) {
				N->Value.Value->Run(N->Value.Value->Gluon);

				for (int i = 0; i < 9 && O->Value.Key->Count > 0; i++) {
					Qi->Alpha(gcnew Spinor(O->Value.Key->Tail, O->Value.Key));
				}

				N->Value.Value->Run(N->Value.Value->Muon);
				N = N->Previous;
			}
			O = O->Next;
		}

		Delta();
	}

	void Polyrho::Delta() {
		LinkedListNode<KeyValuePair<Polygamma^, Soliton^>>^ O = Last;

		while (O != nullptr) {
			Qi->Phi = O->Value.Value->Qi->Phi;
			if (O->Value.Key->Count > 0)
				O->Value.Value->Mu->Transit(O->Value.Key);
			O = O->Previous;
		}
	}
}