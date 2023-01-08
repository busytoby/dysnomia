#pragma once
#include "14_Silicon.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Phosphorous : Dai<Coronium^, Silicon^>
			{
			public:
				Phosphorous(Aluminium^ Mu, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Silicon^ Alpha = gcnew Silicon(Mu, Rho, Upsilon, Ohm, Qi);
					Add(Alpha->Mu.Value, Alpha);
					Remember(Qi, Alpha);
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
