#pragma once
#include "05_Boron.h"
#include "34_Selenium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Bromine : public Dai<Selenium^, Boron^>
			{
			public:
				static Quark<Bromine^, Argon^, Nickel^>^ Sun;
				static Quark<Argon^, Bromine^, Nickel^>^ Valetudo;

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
					if (Sun == nullptr) Sun = gcnew Quark<Bromine^, Argon^, Nickel^>(this, Zeta, Pi);
					if (Valetudo == nullptr) Valetudo = gcnew Quark<Argon^, Bromine^, Nickel^>(Zeta, this, Pi);
				}
			};
		}
	}
}