#pragma once
#include "13a_Coronium.h"
#include "16_Sulfur.h"
#include "18_Argon.h"
#include "21_Scandium.h"
#include "23_Vanadium.h"
#include "25_Manganese.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Iron : public Dai<Dysnomium^, Scandium^>
			{
			public:
				Iron(Manganese^ Beta) {
					Add(Beta->R->N, Beta->L);

					if (Scandium::Psamathe == nullptr) Scandium::Psamathe = gcnew Quark<Sulfur^, Argon^, Coronium^>(Beta->N->Rho.Key, Beta->L->Mu.Key, Beta->L->Mu.Value);
				}
			};
		}
	}
}
