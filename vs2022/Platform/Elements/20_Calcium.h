#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Calcium : Dai<Potassium^, Argon^>
			{
			public:
				Argon^ Mu;

				Calcium(Phosphorous^ Rho) {
					Sulfur^ Psi = gcnew Sulfur(Rho->Last.Value->Zeta, Rho, Rho->Last.Value);
					Chlorine^ Nu = gcnew Chlorine(Psi);
					Aether^ Eta = gcnew Aether(Psi);
					Mu = gcnew Argon(Psi, Nu, Eta);

					Add(KeyValuePair<Potassium^, Argon^>(gcnew Potassium(Mu->N), Mu));
				}
			};
		}
	}
}
