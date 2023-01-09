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
				static Quark<Aluminium^, Silicon^, Coronium^>^ Thalassa;

				Phosphorous(Aluminium^ Mu, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Silicon^ Alpha = gcnew Silicon(Mu, Rho, Upsilon, Ohm, Qi);
					Add(Alpha->Mu.Value, Alpha);
					Remember(Qi, Alpha);
					Remember(Rho, Alpha);
					Remember(Ohm, Alpha);
					if (Jupiter19 == nullptr) Jupiter19 = this;
					if (Thalassa == nullptr) Thalassa = gcnew Quark<Aluminium^, Silicon^, Coronium^>(Mu, Alpha, Alpha->Mu.Value);
				}

				Coronium^ Remember(BigInteger Qi, Silicon^ Alpha) {
					Coronium^ Iota = Alpha->Consider(Qi);
					Add(Iota, Alpha);
					return Iota;
				}
			};
		}
	}
}
