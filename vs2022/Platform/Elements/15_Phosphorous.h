#pragma once
#include "14_Silicon.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Phosphorous : Dai<Coronium^, Silicon^>
			{
			public:
				static Dai<Coronium^, Silicon^>^ Jupiter19;

				Phosphorous(Aluminium^ Mu, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Silicon^ Alpha = gcnew Silicon(Mu, Rho, Upsilon, Ohm, Qi);
					Add(Alpha->Mu.Value, Alpha);
					Remember(Qi, Alpha);
					Remember(Rho, Alpha);
					Remember(Ohm, Alpha);
					if (Jupiter19 == nullptr) Jupiter19 = this;
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
