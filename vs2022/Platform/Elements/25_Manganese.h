#pragma once
#include "19_Potassium.h"
#include "21_Scandium.h"
#include "23_Vanadium.h"
#include "24_Chromium.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Manganese : public Quark<Vanadium^, Potassium^, Scandium^> {
			public:
				static Dai<Manganese^, Vanadium^>^ Mab;
				static Dai<Vanadium^, Manganese^>^ Rosalind;
				static Quark<Scandium^, Potassium^, Vanadium^>^ Ganymede;
				static Quark<Potassium^, Scandium^, Vanadium^>^ Himalia;

				Manganese(Chromium^ Alpha) : Quark(Alpha->Mu.Key, Alpha->Mu.Key->Xi->R->Mu.Key, Alpha->Mu.Key->Xi->N) {
					if (Mab == nullptr) Mab = gcnew Dai<Manganese^, Vanadium^>();
					if (Rosalind == nullptr) Rosalind = gcnew Dai<Vanadium^, Manganese^>();
					if (Ganymede == nullptr) Ganymede = gcnew Quark<Scandium^, Potassium^, Vanadium^>(L, R, N);
					if (Himalia == nullptr) Himalia = gcnew Quark<Potassium^, Scandium^, Vanadium^>(R, L, N);
					for (int i = 0; i < Alpha->Count; i++) {
						Mab->Add(this, Alpha[i].Key);
						Rosalind->Add(Alpha[i].Key, this);
					}
				};
			};
		}
	}
}