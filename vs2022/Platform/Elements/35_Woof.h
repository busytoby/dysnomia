#pragma once
#include "05_Boron.h"
#include "34_Hiss.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Woof : public Dai<Hiss^, Boron^>
			{
			public:
				static Quark<Woof^, Argon^, Nickel^>^ Sun;
				static Quark<Argon^, Woof^, Nickel^>^ Valetudo;
				static Dai<Hiss^, Boron^>^ Daphnis;

				Sulfur^ Theta;
				Chlorine^ Tau;

				Copper^ Beta;
				Nickel^ Pi;
				Argon^ Zeta;

				Woof(Arsenic^ Omicron, Copper^ Lambda) {
					Beta = Lambda;
					Pi = Beta->Delta();
					Theta = Omicron->Mu.Key->N->Mu.Key;
					Tau = gcnew Chlorine(Theta, Pi->Mu.Value);
					Zeta = gcnew Argon(Theta, Tau, Pi->Mu.Value);
					Hiss^ Psi = gcnew Hiss(Omicron, Pi, Zeta);
					Add(Psi, Theta->N->L->Pi);
					if (Sun == nullptr) Sun = gcnew Quark<Woof^, Argon^, Nickel^>(this, Zeta, Pi);
					if (Valetudo == nullptr) Valetudo = gcnew Quark<Argon^, Woof^, Nickel^>(Zeta, this, Pi);
					if (Daphnis == nullptr) Daphnis = this;
				}
			};
		}
	}
}