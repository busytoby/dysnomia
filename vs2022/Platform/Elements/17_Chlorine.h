#pragma once
#include "13_Aluminium.h"
#include "16_Sulfur.h"
#include "17a_Aether.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Chlorine : public Dai<Coronium^, Aether^>
			{
			public:
				Chlorine(Sulfur^ Psi) {
					for (int i = 0; i < Psi->R->Count; i++) {
						Aether^ Mu = gcnew Aether();
						Mu->Add(Psi, Psi->L->Consider(Psi->L[i].Key->Phi->N->Barn));
						Mu->Add(Psi, Psi->L->Consider(Psi->R[i].Value->Zeta->L->Phi->N->Barn));
						Add(Psi->R[i].Key, Mu);
					}
				}
			};
		}
	}
}