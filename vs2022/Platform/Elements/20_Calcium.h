#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Calcium : public Dai<Argon^, Potassium^>
			{
			public:
				static Edge<Sulfur^, Potassium^, Calcium^>^ Deimos;

				Calcium(Parity^ Beta) {
					Sulfur^ Rho = gcnew Sulfur(Beta);
					this->Calcium::Calcium(Rho);
					if (Deimos == nullptr) Deimos = gcnew Edge<Sulfur^, Potassium^, Calcium^>(Rho, Mu->L, this);
				}

				Calcium(Sulfur^ Beta) {
					Chlorine^ Rho = gcnew Chlorine(Beta);
					Argon^ Sigma = gcnew Argon(Rho);
					Add(Sigma, gcnew Potassium(Sigma));
				}
			};
		}
	}
}
