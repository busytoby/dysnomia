#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Beryl : public Quark<Hel^, Hydrogen^, Lith^> { 
			public:
				property BigInteger Secret { BigInteger get() { return R->R->Secret; }};

				Beryl(Hel^ Mu, Lith^ Rho) : Quark(Mu, gcnew Hydrogen(), Rho) {
					Affinity^ Q = gcnew Affinity(R->R, L->Mu->I->R);
				}
				
				/*
				Beryllium(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Xi) : Affinity(Rho, Upsilon, Ohm, Xi) {
					Phi = gcnew Lithium(gcnew Hydrogen(), Cone, Rod);
				}
				*/
			};
		}
	}
}
