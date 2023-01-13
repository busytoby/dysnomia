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
					Aether^ Alpha = gcnew Aether();
					this->Chlorine::Chlorine(Psi, Alpha);
				}

				Chlorine(Sulfur^ Psi, Aether^ Alpha) {
					for (int i = 0; i < Psi->R->Count; i++)
						Alpha->Add(Psi, Psi->L->Contain(Psi->R[i].Key->R->Epsilon));
					Add(Psi->L->Mu.Value, Alpha);
				}
			};
		}
	}
}