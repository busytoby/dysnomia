#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Ether : public Dai<Argon^, Potassium^>
			{
			public:
				static Edge<Sulfur^, Potassium^, Ether^>^ Deimos;

				Ether(Parity^ Beta) {
					Sulfur^ Rho = gcnew Sulfur(Beta);
					this->Ether::Ether(Rho);
					if (Deimos == nullptr) Deimos = gcnew Edge<Sulfur^, Potassium^, Ether^>(Rho, Mu->L, this);
				}

				Ether(Sulfur^ Beta) {
					Chlorine^ Rho = gcnew Chlorine(Beta);
					Argon^ Sigma = gcnew Argon(Rho);
					Add(Sigma, gcnew Potassium(Sigma));
				}
			};
		}
	}
}
