#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Down : public Metal<Boron^> {
			public:
				property Hydrogen^ Gamma { Hydrogen^ get() { return Last->L->Gamma; }};
				property Dynamic^ Zeta { Dynamic^ get() { return Last->L->Zeta; }};
				property BigInteger Channel { BigInteger get() { return Zeta->Channel; }};

				Affinity^ Alpha;

				Down() {
					Hydrogen^ Mu = gcnew Hydrogen();
					Hel^ Rho = gcnew Hel();
					Lith^ Psi = gcnew Lith(Mu);
					Hydrogen^ Nu = gcnew Hydrogen();
					Beryl^ Eta = gcnew Beryl(Rho, Nu, Psi);
					Rho->Add(Eta->R, Eta->L->Mu->I->R);
					Boron^ Sigma = gcnew Boron(Eta);
					Add(Eta, Sigma);
					Omega();
				}

				void Omega() {
					Alpha = gcnew Affinity(Zeta->Base, Zeta->Secret, Zeta->Signal, Zeta->Channel);
				}
			};
		}
	}
}