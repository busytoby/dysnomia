#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Ramus : public Dai<Dysnomium^, Apse^>
			{
			public:
				static Edge<Sulfur^, Argon^, Tauon^>^ Psamathe;
				static Edge<Sulfur^, Gluon^, Iron^>^ Io;

				Int64 Dynamo;

				Ramus(Auctus^ Beta) {
					Omega();
					Xi(Sulfur::Titan->Mu.Key, Sulfur::Titan->Rho.Key->Nu.Value);

					if (Psamathe == nullptr) Psamathe = gcnew Edge<Sulfur^, Argon^, Tauon^>(Beta->N->Rho.Key, Beta->L->Mu.Key, Beta->L->Mu.Value);
				}

				void Omega() {
					Add(Beta->R->N, Beta->L);
					Dynamo = Math::ModPow(Sulfur::Titan->Mu.Value->N->N->Zeta->Xi->Rod->Base, Beta->Xi->Signal, Beta->L->Ring);
					if (Dynamo.IsZero)
						throw gcnew Exception("Singularity, Neutron System Not Yet Viable");
				}

				void Xi(Parity^ Eta, Compensation^ Sigma) {
					Sulfur^ Mu = gcnew Sulfur(Sulfur::Titan->Mu.Key->Psi.Value->Zeta, Eta, Sigma);
					Beta->N->Add(Mu, Beta->N->Mu.Value);
					Beta->Omega(Sigma);
				}
			};
		}
	}
}
