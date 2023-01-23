#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Apse : public Dai<Dysnomium^, Tauon^>
			{
			private:
			//	Int64 _Ring;
			public:
				static Edge<Sulfur^, Tauon^, Argon^>^ Pluto;

				/*
				property Int64 Ring { Int64 get() {
					for(int i = 0; i < this->Count; i++)
						_Ring = _Ring + this[i]->L[0]->L[0]->L[0]->L[0]->L[0]->I[0]->L->Ring; 
					return _Ring;
				}};
				*/

				Apse(Pion^ Beta) {
					Gluon^ Rho = gcnew Gluon();
					for (int i = 0; i < Beta->R->Count; i++) {
						Add(Beta->I, Beta->R[i]->L);
						Rho->Add(Beta->N->N, Beta->R[i]->L);
					}
					Beta->I->Add(Rho, Beta->N);
					if (Pluto == nullptr) Pluto = gcnew Edge<Sulfur^, Tauon^, Argon^>(Beta->N->N, Mu->L, Beta->N);
				}
			};
		}
	}
}
