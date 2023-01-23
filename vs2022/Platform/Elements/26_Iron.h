#pragma once
#include "13a_Coronium.h"
#include "16_Sulfur.h"
#include "18_Argon.h"
#include "21_Scandium.h"
#include "23_Vanadium.h"
#include "25_Manganese.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Iron : public Dai<Dysnomium^, Scandium^>
			{
			public:
				static Edge<Sulfur^, Argon^, Tauon^>^ Psamathe;
				static Edge<Sulfur^, Aether^, Iron^>^ Io;

				Int64 Dynamo;
				Manganese^ Beta;

				Iron(Manganese^ Alpha) {
					Beta = Alpha;
					Omega();
					Xi(Sulfur::Titan->Mu.Key, Sulfur::Titan->Rho.Key->Nu.Value);

					if (Psamathe == nullptr) Psamathe = gcnew Edge<Sulfur^, Argon^, Coronium^>(Beta->N->Rho.Key, Beta->L->Mu.Key, Beta->L->Mu.Value);
				}

				void Omega() {
					Add(Beta->R->N, Beta->L);
					Dynamo = Math::ModPow(Sulfur::Titan->Mu.Value->N->N->Zeta->Xi->Rod->Base, Beta->Xi->Signal, Beta->L->Ring);
					if (Dynamo.IsZero)
						throw gcnew Exception("Singularity, Neutron System Not Yet Viable");
				}

				void Xi(Phosphorous^ Eta, Silicon^ Sigma) {
					Sulfur^ Mu = gcnew Sulfur(Sulfur::Titan->Mu.Key->Psi.Value->Zeta, Eta, Sigma);
					Beta->N->Add(Mu, Beta->N->Mu.Value);
					Beta->Omega(Sigma);
				}
			};
		}
	}
}
