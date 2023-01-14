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
				static Quark<Sulfur^, Aether^, Iron^>^ Io;

				BigInteger Ring;
				Manganese^ Beta;

				Iron(Manganese^ Alpha) {
					Beta = Alpha;
					Omega();
					Xi(Sulfur::Titan->Mu.Key, Sulfur::Titan->Rho.Key->Nu.Value);

					if (Scandium::Psamathe == nullptr) Scandium::Psamathe = gcnew Quark<Sulfur^, Argon^, Coronium^>(Beta->N->Rho.Key, Beta->L->Mu.Key, Beta->L->Mu.Value);
				}

				void Omega() {
					Add(Beta->R->N, Beta->L);
					Ring = BigInteger::ModPow(BigInteger::Add(Ring, Beta->L->Ring), Beta->N->Xi->Ring, Beta->L->Ring);
					if (Ring.IsZero)
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
