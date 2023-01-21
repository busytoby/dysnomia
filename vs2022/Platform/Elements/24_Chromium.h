#pragma once
#include "13a_Coronium.h"
#include "23_Vanadium.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Chromium : public Dai<Vanadium^, Coronium^> {
			public:
				static Edge<Titanium^, Coronium^, Vanadium^>^ Sycorax;
				static Edge<Vanadium^, Dysnomium^, Titanium^>^ Belinda;
				static Edge<Vanadium^, Sulfur^, Titanium^>^ Puck;
				static Edge<Titanium^, Sulfur^, Vanadium^>^ Mars;

				Int64 Signal;

				Chromium(Vanadium^ Alpha) {
					for (int i = 0; i < Alpha->Count; i++) {
						for (int j = 0; j < Alpha[i].Value->Count; j++) {
							Add(Alpha, Alpha[i].Value[j].Value);
							Signal = Signal + Alpha[i].Value[j].Value->L->Pi->L->Signal;
						}
					}

					if (Mars == nullptr) Mars = gcnew Edge<Titanium^, Sulfur^, Vanadium^>(Alpha->Xi, Alpha->Mu.Key, Alpha);
					if (Puck == nullptr) Puck = gcnew Edge<Vanadium^, Sulfur^, Titanium^>(Alpha, Alpha->Mu.Key, Alpha->Xi);
					if (Belinda == nullptr) Belinda = gcnew Edge<Vanadium^, Dysnomium^, Titanium^>(Alpha, Alpha->Xi->L, Alpha->Xi);
					if (Sycorax == nullptr) Sycorax = gcnew Edge<Titanium^, Coronium^, Vanadium^>(Alpha->Xi, Alpha->Mu.Value->Mu.Value, Alpha);
				}
			};
		}
	}
}