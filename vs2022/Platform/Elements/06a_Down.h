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
					Alpha = gcnew Affinity(
						Sigma[0]->I->R->R->Base, 
						Eta->L[0]->I->R->Secret,
						Eta->L[1]->I->R->Signal,
						Sigma[0]->L[0]->L->Channel);
					Hadron^ Beta = gcnew Hadron(Alpha->Rod);
					Beta->L->Epsilon = Alpha->Cone->Tau;
					Eta->Chi(Beta, Alpha->Cone);
				}
			};
		}
	}
}