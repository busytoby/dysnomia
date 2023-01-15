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
					R->Last->I->Phi(I);
					R->Add(I, N);
					Chi(I, I->I);
				}

				void Chi(Hadron^ Beta, Dynamic^ Pi) {
					N->Add(Beta, Pi);
					Beta->R->Epsilon = Math::ModPow(Beta->R->Epsilon, Pi->Secret, Math::Prime);
					for(int i = N->Count - 1; i > -1; i--)
						N[i]->I->N->Rho();
				}
			};
		}
	}
}
