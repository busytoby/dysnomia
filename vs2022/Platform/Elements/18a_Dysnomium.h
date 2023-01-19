#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Dysnomium : public Epsilon
			{
			public:
				Phosphorous^ Tau;
				Int64 Gamma;

				Dysnomium(Phosphorous^ Phi) {
					this->Epsilon = Phi->Epsilon;
					Gamma = this->Epsilon;
					Tau = Phi;
				}

				void Omega(Coronium^ Psi, Silicon^ Nu) {
					this->Epsilon = Psi->Epsilon;
					Gamma = Gamma + Psi->Epsilon;
					Tau->Add(KeyValuePair<Coronium^, Silicon^>(Psi, Nu));
				}

				void Kappa(Coronium^ Psi, Silicon^ Nu) {
					this->Epsilon = Psi->Epsilon;
					Gamma = Gamma + Psi->Epsilon;
					Tau->Remove(KeyValuePair<Coronium^, Silicon^>(Psi, Nu));
				}
			};
		}
	}
}