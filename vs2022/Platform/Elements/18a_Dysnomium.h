#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Dysnomium : public Dai<Gluon^, Argon^>
			{
			public:
				Int64 Gamma;

				Dysnomium(Argon^ Beta) {
					this->Epsilon = Beta->Epsilon;
					Gamma = this->Epsilon;
					Add(Beta->R, Beta);
				}

				void Omicron(Tauon^ Beta) {
					this->Epsilon = Beta->Epsilon;
					Gamma = Gamma + Beta->Epsilon;
					Mu->I->Add(Last->L->N, Beta);
				}

				void Omega(Gluon^ Beta) {
					this->Epsilon = Beta->Epsilon;
					Gamma = Gamma + Beta->Epsilon;
					Add(Beta, Last->L);
				}

				void Omega(Gluon^ Beta, Argon^ Rho) {
					this->Epsilon = Beta->Epsilon;
					Gamma = Gamma + Beta->Epsilon;
					Add(Beta, Rho);
				}

				void Kappa(Gluon::Chi^ Beta) {
					this->Epsilon = Beta->I->Epsilon;
					Gamma = Gamma + Beta->I->Epsilon;
					Mu->I->Remove(Beta);
				}
			};
		}
	}
}