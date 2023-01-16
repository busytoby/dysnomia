#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fermion : public Quark<Hel^, Hadron^, Lith^> {
			public:
				static Quark<Hel^, Hadron^, Lith^>^ Corona;

				Fermion(Hel^ Beta, Hadron^ Pi, Lith^ Xi) : Quark(Beta, Pi, Xi) {
					if (Corona != nullptr) throw gcnew Exception("Fermion Is Singular");
					R->Last->I->Phi(I);
					R->Add(I, N);
					Chi(I, I->I);
					Corona = this;
				}

				void Chi(Hadron^ Beta, Dynamic^ Pi) {
					N->Add(Beta, Pi);
					for (int i = N->Count - 1; i > -1; i--) {
						/*
						if (N->Count > 1) {
							for (int j = 0; j < N->Count; j++) {
								if (j == i) continue;
								Double Kappa = (-N[i]->Mass + N[j]->Mass) / ((N[i]->I->R->Rho - N[j]->I->R->Rho) / 2);
								N[j]->I->Rho(Kappa);
							}
						}
						*/
						if (N[i]->I->R->Rho != 0) {
							Double Kappa = (-N->Mass + N[i]->Mass) / 2;
							N[i]->I->Rho(Kappa);
						}
						N[i]->I->Rho(Mass);
						N->Omicron();
					}
				}
			};
		}
	}
}
