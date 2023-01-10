#pragma once
#include "16_Sulfur.h"
#include "17a_Aether.h"
#include "22_Titanium.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Vanadium : public Dai<Sulfur^, Aether^> {
			public:
				Titanium^ Xi;

				Vanadium(Titanium^ Phi) {
					Xi = Phi;
					Add(Phi->R->Mu.Value->N, Phi->R->Mu.Value->L);
				}
			};
		}
	}
}