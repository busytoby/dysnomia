#pragma once
#include "13a_Coronium.h"
#include "18_Argon.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Scandium : public Dai<Argon^, Coronium^>
			{
			public:
				static Quark<Sulfur^, Coronium^, Argon^>^ Pluto;
				static Quark<Sulfur^, Argon^, Coronium^>^ Psamathe;

				Scandium(Argon^ Chi) {
					Aether^ Delta = gcnew Aether();
					for (int i = 0; i < Chi->L->Count; i++) {
						Add(Chi, Chi->L[i].Value);
						Delta->Add(Chi->N, Chi->L[i].Value);
					}
					Chi->R->Add(Chi->N->L->Rho.Value, Delta);
					if (Pluto == nullptr) Pluto = gcnew Quark<Sulfur^, Coronium^, Argon^>(Chi->N, Mu.Value, Chi);

					// Set Psamathe After Second Sulfur
					//if (Psamathe == nullptr) Psamathe = gcnew Quark<Sulfur^, Argon^, Coronium^>(Chi->N, Chi, Mu.Value);
				}
			};
		}
	}
}
