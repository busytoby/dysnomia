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
				Affinity^ Alpha;

				Down() {
					Hadron^ Mu = gcnew Hadron();
					Hel^ Rho = gcnew Hel();
					Lith^ Psi = gcnew Lith(Mu);
					Hadron^ Nu = gcnew Hadron();
					Fermion^ Eta = gcnew Fermion(Rho, Nu, Psi);
					Nucleon^ Sigma = gcnew Nucleon(Eta);
					Add(Eta, Sigma);
					Omega();
					Hadron^ Beta = gcnew Hadron(Alpha->Rod);
					Beta->L->Epsilon = Alpha->Cone->Tau;
					Eta->Chi(Beta, Alpha->Cone);
				}

				void Omega() {
					if (Alpha != nullptr) throw gcnew Exception("Nope");
					//Alpha = gcnew Affinity(Mu->I->L[0]->I->R->Base, Mu->I->L[1]->I->R->Secret, Gamma[0]->I->R->Signal, Zeta->Channel);
				}
			};
		}
	}
}