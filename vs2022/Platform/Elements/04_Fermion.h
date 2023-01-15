#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fermion : public Quark<Hel^, Hadron^, Lith^> {
			public:
				Fermion(Hel^ Beta, Hadron^ Pi, Lith^ Xi) : Quark(Beta, Pi, Xi) {
					L->Last->I->Phi(R);
					L->Add(R, N);
					Chi(R, R->R);
				}

				void Chi(Hadron^ Beta, Dynamic^ Pi) {
					N->Add(Beta, Pi);
					for(int i = N->Count - 1; i > -1; i--)
						N[i]->I->N->Rho();
				}
			};
		}
	}
}
