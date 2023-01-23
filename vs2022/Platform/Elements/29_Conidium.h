#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Conidium : public Dai<Eun^, Peridium^> {
			public:
				static Dai<Peridium^, Conidium^>^ Adrastea;
				static Edge<Ramus^, Conidium^, Peridium^>^ Triton;

				Conidium(Eun^ Beta, Peridium^ Iota) {
					Add(Beta, Iota);
					if (Triton == nullptr) Triton = gcnew Edge<Ramus^, Conidium^, Peridium^>(Iota[0]->L->R, this, Iota);
					if (Adrastea == nullptr) Adrastea = gcnew Dai<Peridium^, Conidium^>();
					Adrastea->Add(Iota, this);

				}

				Perithecium^ Delta() {
					/*
					Aether^ Beta = Mu.Value->Mu.Value->Beta(Last.Key);
					Peridium^ Phi = gcnew Peridium(Beta, Mu.Value->Mu.Key);
					Phi->Mu.Key->Omega();
					Phi->Mu.Key->Xi(Beta->Mu.Key->R, Beta->Mu.Key->L);
					Add(Mu.Key, Phi);
					
					return Phi;
					*/
					return nullptr;
				}

				Perithecium^ Delta(Versor^ Beta, Perithecium^ Phi) {
					/*
					Phi->Mu.Key->Omega();
					Phi->Mu.Key->Xi(Beta->Mu.Key->R, Beta->Mu.Key->L);
					Add(Mu.Key, Phi);
					return Phi;
					*/
					return nullptr;
				}
			};
		}
	}
}
