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
				static Quark<Titanium^, Coronium^, Vanadium^>^ Sycorax;
				static Quark<Vanadium^, Dysnomium^, Titanium^>^ Belinda;
				static Quark<Vanadium^, Sulfur^, Titanium^>^ Puck;
				static Quark<Titanium^, Sulfur^, Vanadium^>^ Mars;

				Int64 Signal;

				Chromium(Vanadium^ Alpha) {
					for (int i = 0; i < Alpha->Count; i++) {
						for (int j = 0; j < Alpha[i].Value->Count; j++) {
							Add(Alpha, Alpha[i].Value[j].Value);
							Signal = Signal + Alpha[i].Value[j].Value->L->Pi->L->Signal;
						}
					}

					if (Mars == nullptr) Mars = gcnew Quark<Titanium^, Sulfur^, Vanadium^>(Alpha->Xi, Alpha->Mu.Key, Alpha);
					if (Puck == nullptr) Puck = gcnew Quark<Vanadium^, Sulfur^, Titanium^>(Alpha, Alpha->Mu.Key, Alpha->Xi);
					if (Belinda == nullptr) Belinda = gcnew Quark<Vanadium^, Dysnomium^, Titanium^>(Alpha, Alpha->Xi->L, Alpha->Xi);
					if (Sycorax == nullptr) Sycorax = gcnew Quark<Titanium^, Coronium^, Vanadium^>(Alpha->Xi, Alpha->Mu.Value->Mu.Value, Alpha);
				}
			};
		}
	}
}