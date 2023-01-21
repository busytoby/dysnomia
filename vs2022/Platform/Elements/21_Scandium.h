#pragma once
#include "13a_Coronium.h"
#include "18_Argon.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Scandium : public Dai<Argon^, Coronium^>
			{
			private:
				Int64 _Ring;
			public:
				static Edge<Sulfur^, Coronium^, Argon^>^ Pluto;
				static Edge<Sulfur^, Argon^, Coronium^>^ Psamathe;

				property Int64 Ring { Int64 get() {
					for(int i = 0; i < this->Count; i++)
						_Ring = _Ring + this[i].Value->R->R->Cone->Ring; 
					return _Ring;
				}};

				Scandium(Argon^ Chi) {
					Aether^ Delta = gcnew Aether();
					for (int i = 0; i < Chi->L->Count; i++) {
						Add(Chi, Chi->L[i].Value);
						Delta->Add(Chi->N, Chi->L[i].Value);
						Int64 Iota = Ring;
					}
					Chi->R->Add(Chi->N->L->Rho.Value, Delta);
					if (Pluto == nullptr) Pluto = gcnew Edge<Sulfur^, Coronium^, Argon^>(Chi->N, Mu.Value, Chi);
				}
			};
		}
	}
}
