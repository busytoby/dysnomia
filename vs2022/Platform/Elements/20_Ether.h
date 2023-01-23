#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Ether : public Dai<Argon^, Pion^>
			{
			public:
				static Edge<Sulfur^, Pion^, Ether^>^ Deimos;

				Ether(Parity^ Beta) {
					Sulfur^ Rho = gcnew Sulfur(Beta);
					this->Ether::Ether(Rho);
					if (Deimos == nullptr) Deimos = gcnew Edge<Sulfur^, Pion^, Ether^>(Rho, Mu->L, this);
				}

				Ether(Sulfur^ Beta) {
					Chlorine^ Rho = gcnew Chlorine(Beta);
					Argon^ Sigma = gcnew Argon(Rho);
					Add(Sigma, gcnew Pion(Sigma));
				}
			};
		}
	}
}
