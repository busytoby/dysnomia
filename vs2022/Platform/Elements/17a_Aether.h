#pragma once
#include "13_Aluminium.h"
#include "13a_Coronium.h"
#include "16_Sulfur.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aether : public Dai<Sulfur^, Coronium^> {
			public:
				Aether() {}

				Aether(Sulfur^ Upsilon) {
					Add(Upsilon, Upsilon->L->Contain(Helium::Gamma->Cone->Manifold));
				}

				Aether^ Beta(Aluminium^ Theta) {
					Aether^ Phi = gcnew Aether();
					Phi->Add(Mu.Key, Mu.Key->L->Contain(Theta->L->Pi->N->Cone->Manifold));
					return Phi;
				}
			};
		}
	}
}