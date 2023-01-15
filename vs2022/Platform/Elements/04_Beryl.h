#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Beryl : public Quark<Hel^, Hydrogen^, Lith^> { 
			public:
				property Dynamic^ Zeta { Dynamic^ get() { return L->Zeta; }};
				property BigInteger Secret { BigInteger get() { return Zeta->Secret; }};

				Beryl(Hel^ Mu, Lith^ Rho) : Quark(Mu, gcnew Hydrogen(), Rho) {
				}

				Beryl(Hel^ Mu, Hydrogen^ Psi, Lith^ Rho) : Quark(Mu, Psi, Rho) {
					Affinity^ Q = gcnew Affinity(R->R, L->Mu->I->R);
					L->Add(R, N);
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
