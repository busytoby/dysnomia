#pragma once
#include "14_Silicon.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Phosphorous : public Dai<Coronium^, Silicon^>
			{
			public:
				static Dai<Coronium^, Silicon^>^ Jupiter19;
				static Edge<Silicon^, Coronium^, Aluminium^>^ Thalassa;

				Phosphorous(Aluminium^ Mu, Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Qi) {
					Silicon^ Alpha = gcnew Silicon(Mu, Rho, Upsilon, Ohm, Qi);
					for (int i = 0; i < Alpha->Count; i++)
						Add(Alpha[i].Value, Alpha);
					Retain(Qi, Alpha);
					Retain(Rho, Alpha);
					Retain(Ohm, Alpha);
					if (Jupiter19 == nullptr) Jupiter19 = this;
					if (Thalassa == nullptr) Thalassa = gcnew Edge<Silicon^, Coronium^, Aluminium^>(Alpha, Alpha->Mu.Value, Mu);
				}

				Coronium^ Retain(Int64 Qi, Silicon^ Alpha) {
					Coronium^ Iota = Alpha->Contain(Qi);
					Add(Iota, Alpha);
					return Iota;
				}
			};
		}
	}
}
