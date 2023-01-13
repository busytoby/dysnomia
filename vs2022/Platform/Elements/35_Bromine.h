#pragma once
#include "05_Boron.h"
#include "34_Selenium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Bromine : Dai<Selenium^, Boron^>
			{
			public:
				Bromine(Arsenic^ Eta, Copper^ Nu) {
					Nickel^ Rho = Nu->Delta();
					Sulfur^ Theta = Nu->Mu.Value->Mu.Value->Mu.Key;
					Chlorine^ Tau = gcnew Chlorine(Theta, Rho->Mu.Value);
					Argon^ Sigma = gcnew Argon(Theta, Tau, Rho->Mu.Value);
					Selenium^ Psi = gcnew Selenium(Eta, Rho, Sigma);
					Add(Psi, Theta->N->L->Pi);
				}
			};
		}
	}
}