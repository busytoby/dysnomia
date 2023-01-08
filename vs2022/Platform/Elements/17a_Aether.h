#pragma once
#include "13a_Coronium.h"
#include "16_Sulfur.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aether : Dai<Sulfur^, Coronium^> {
			public:
				Aether(Sulfur^ Upsilon) {
					Aether(Upsilon, Upsilon);
				}

				Aether(Sulfur^ Upsilon, Sulfur^ Tau) {
					Add(Upsilon, Upsilon->L->Consider(Tau->N->L->Beta->Identity));
				}
			};
		}
	}
}