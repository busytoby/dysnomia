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
				static Quark<Silicon^, Coronium^, Aluminium^>^ Thalassa;

				Phosphorous(Aluminium^ Mu, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Silicon^ Alpha = gcnew Silicon(Mu, Rho, Upsilon, Ohm, Qi);
					Add(Alpha->Mu.Value, Alpha);
					Retain(Qi, Alpha);
					Retain(Rho, Alpha);
					Retain(Ohm, Alpha);
					if (Jupiter19 == nullptr) Jupiter19 = this;
					if (Thalassa == nullptr) Thalassa = gcnew Quark<Silicon^, Coronium^, Aluminium^>(Alpha, Alpha->Mu.Value, Mu);
				}

				Coronium^ Retain(BigInteger Qi, Silicon^ Alpha) {
					Coronium^ Iota = Alpha->Contain(Qi);
					Add(Iota, Alpha);
					return Iota;
				}
			};
		}
	}
}
