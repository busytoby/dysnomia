#pragma once
#include "13_Aluminium.h"
#include "18_Argon.h"
#include "28_Nickel.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Copper : public Dai<Aluminium^, Nickel^> {
			public:
				static Dai<Argon^, Aluminium^>^ Adrastea;
				static Quark<Aluminium^, Aether^, Nickel^>^ Triton;

				Copper(Nickel^ Eta) {
					Add(Eta->Mu.Key->Beta->R->L, Eta);
					if (Adrastea == nullptr) Adrastea = gcnew Dai<Argon^, Aluminium^>();
					Adrastea->Add(Eta->Mu.Key->Beta->L->Mu.Key, Eta->Mu.Key->Beta->R->L);
				}

				Nickel^ Delta() {
					Aether^ Beta = Mu.Value->Mu.Value->Beta(Last.Key);
					Nickel^ Phi = gcnew Nickel(Beta, Mu.Value->Mu.Key);
					Phi->Mu.Key->Omega();
					Phi->Mu.Key->Xi(Beta->Mu.Key->R, Beta->Mu.Key->L);
					Add(Mu.Key, Phi);
					if (Triton == nullptr) Triton = gcnew Quark<Aluminium^, Aether^, Nickel^>(Mu.Key, Beta, Phi);
					return Phi;
				}
			};
		}
	}
}
