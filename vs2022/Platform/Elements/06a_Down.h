#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Down : public Metal<Nucleon^> {
			public:
				property Hadron^ Gamma { Hadron^ get() { return Last->L->Gamma; }};
				property Dynamic^ Zeta { Dynamic^ get() { return Last->L->Zeta; }};
				property BigInteger Channel { BigInteger get() { return Zeta->Channel; }};

				Affinity^ Alpha;

				Down() {
					Hadron^ Mu = gcnew Hadron();
					Hel^ Rho = gcnew Hel();
					Lith^ Psi = gcnew Lith(Mu);
					Hadron^ Nu = gcnew Hadron();
					Beryl^ Eta = gcnew Beryl(Rho, Nu, Psi);
					Rho->Add(Eta->R, Eta->L->Mu->I->R);
					Nucleon^ Sigma = gcnew Nucleon(Eta);
					Add(Eta, Sigma);
					Omega();
					Hadron^ Beta = gcnew Hadron(Alpha->Rod);
					Beta->L->Epsilon = Alpha->Cone->Tau;
					Eta->Chi(Beta, Alpha->Cone);
				}

				void Omega() {
					if (Alpha != nullptr) throw gcnew Exception("Nope");
					Alpha = gcnew Affinity(Zeta->Base, Zeta->Secret, Zeta->Signal, Zeta->Channel);
				}
			};
		}
	}
}