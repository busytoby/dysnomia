#pragma once
#include "23_Vanadium.h"
#include "24_Chromium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Cobalt : public Dai<Vanadium^, Chromium^> {
			public:
				static Quark<Vanadium^, Manganese^, Chromium^>^ Mercury;
				static Dai<Vanadium^, Chromium^>^ Larissa;
				Manganese^ Phi;

				Cobalt(Manganese^ Alpha) {
					Phi = Alpha;
					Add(Alpha->N, Alpha->Xi);
					if (Mercury == nullptr) Mercury = gcnew Quark<Vanadium^, Manganese^, Chromium^>(Alpha->N, Alpha, Alpha->Xi);
					if (Larissa == nullptr) Larissa = this;
				}
			};
		}
	}
}
