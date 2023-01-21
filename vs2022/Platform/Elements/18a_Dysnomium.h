#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Dysnomium : public Dai<Parity^, Argon^>
			{
			public:
				Int64 Gamma;

				Dysnomium(Argon^ Beta) {
					this->Epsilon = Beta->Epsilon;
					Gamma = this->Epsilon;
					Add(Beta->N->I, Beta);
				}

				void Omega(Tauon^ Beta, Compensation^ Rho) {
					this->Epsilon = Beta->Epsilon;
					Gamma = Gamma + Beta->Epsilon;
					Mu->I->Add(Beta, Rho);
				}

				void Kappa(Parity::Chi^ Beta) {
					this->Epsilon = Beta->I->Epsilon;
					Gamma = Gamma + Beta->I->Epsilon;
					Mu->I->Remove(Beta);
				}
			};
		}
	}
}