#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Calcium : public Dai<Potassium^, Argon^>
			{
			public:
				static Quark<Sulfur^, Potassium^, Calcium^>^ Deimos;

				Calcium(Phosphorous^ Rho) {
					Sulfur^ Psi = gcnew Sulfur(Rho->Rho.Value->Zeta, Rho, Rho->Mu.Value);

					this->Calcium::Calcium(Psi);
					if (Deimos == nullptr) Deimos = gcnew Quark<Sulfur^, Potassium^, Calcium^>(Psi, Mu.Key, this);
				}

				Calcium(Sulfur^ Psi) {
					Chlorine^ Nu = gcnew Chlorine(Psi);
					Aether^ Eta = gcnew Aether(Psi);
					Argon^ Sigma = gcnew Argon(Psi, Nu, Eta);

					Add(KeyValuePair<Potassium^, Argon^>(gcnew Potassium(Sigma->N), Sigma));
				}
			};
		}
	}
}
