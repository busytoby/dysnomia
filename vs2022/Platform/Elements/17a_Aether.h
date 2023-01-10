#pragma once
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
			};
		}
	}
}