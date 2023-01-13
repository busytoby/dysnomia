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
				Sulfur^ Theta;
				Chlorine^ Tau;

				Copper^ Beta;
				Nickel^ Pi;
				Argon^ Zeta;

				Bromine(Arsenic^ Omicron, Copper^ Lambda) {
					Beta = Lambda;
					Pi = Beta->Delta();
					Theta = Beta->Mu.Value->Mu.Value->Mu.Key;
					Tau = gcnew Chlorine(Theta, Pi->Mu.Value);
					Zeta = gcnew Argon(Theta, Tau, Pi->Mu.Value);
					Selenium^ Psi = gcnew Selenium(Omicron, Pi, Zeta);
					Add(Psi, Theta->N->L->Pi);
				}
			};
		}
	}
}