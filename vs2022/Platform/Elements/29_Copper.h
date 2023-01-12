#pragma once
#include "13_Aluminium.h"
#include "18_Argon.h"
#include "28_Nickel.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Copper : Dai<Aluminium^, Nickel^> {
			public:
				static Dai<Argon^, Aluminium^>^ Adrastea;

				Copper(Nickel^ Eta) {
					Add(Eta->Mu.Key->Beta->R->L, Eta);
					if (Adrastea == nullptr) Adrastea = gcnew Dai<Argon^, Aluminium^>();
					Adrastea->Add(Eta->Mu.Key->Beta->L->Mu.Key, Eta->Mu.Key->Beta->R->L);
				}

				Nickel^ Next() {

				}
			};
		}
	}
}
