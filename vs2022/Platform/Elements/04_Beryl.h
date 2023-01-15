#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Beryl : public Quark<Hel^, Hydrogen^, Lith^> { 
			public:
				property Hydrogen^ Gamma { Hydrogen^ get() { return L->Gamma; }};
				property Dynamic^ Zeta { Dynamic^ get() { return L->Zeta; }};
				property BigInteger Secret { BigInteger get() { return Zeta->Secret; }};

				Beryl(Hel^ Mu, Hydrogen^ Psi, Lith^ Rho) : Quark(Mu, Psi, Rho) {
					Affinity^ Q = gcnew Affinity(R->R, L->Mu->I->R);
					L->Add(R, N);
					L->Last->L->Add(R, L->Mu->I->R);
					N->Add(R, L->Mu->I->R);
				}
			};
		}
	}
}