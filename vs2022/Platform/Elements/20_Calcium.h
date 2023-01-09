#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Calcium : Dai<Potassium^, Argon^>
			{
			public:
				static Quark<Sulfur^, Potassium^, Calcium^>^ Deimos;

				Argon^ Beta;

				Calcium(Phosphorous^ Rho) {
					Sulfur^ Psi = gcnew Sulfur(Rho->Last.Value->Zeta, Rho, Rho->Last.Value);
					Chlorine^ Nu = gcnew Chlorine(Psi);
					Aether^ Eta = gcnew Aether(Psi);
					Beta = gcnew Argon(Psi, Nu, Eta);

					Add(KeyValuePair<Potassium^, Argon^>(gcnew Potassium(Beta->N), Beta));

					if (Deimos == nullptr) Deimos = gcnew Quark<Sulfur^, Potassium^, Calcium^>(Psi, Mu.Key, this);
				}
			};
		}
	}
}
