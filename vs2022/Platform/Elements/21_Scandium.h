#pragma once
#include "13a_Coronium.h"
#include "18_Argon.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Scandium : Dai<Argon^, Coronium^>
			{
			public:
				static Quark<Sulfur^, Coronium^, Argon^>^ Pluto;

				Scandium(Argon^ Chi) {
					for (int i = 0; i < Chi->L->Count; i++)
						Add(Chi, Chi->L[i].Value);
					if (Pluto == nullptr) Pluto = gcnew Quark<Sulfur^, Coronium^, Argon^>(Chi->N, Mu.Value, Chi);
				}
			};
		}
	}
}
