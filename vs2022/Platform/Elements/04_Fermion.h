#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fermion : public Quark<Hel^, Hadron^, Lith^> {
			public:
				Fermion(Hel^ Mu, Hadron^ Psi, Lith^ Rho) : Quark(Mu, Psi, Rho) {
					L->Last->I->Phi(R);
					L->Add(R, N);
					Chi(R, L->Mu->I->R);
				}

				void Chi(Hadron^ Beta, Dynamic^ Phi) {
					N->Add(Beta, Phi);
					for(int i = N->Count - 1; i > -1; i--)
						N[i]->I->N->Rho();
				}
			};
		}
	}
}
