#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Magnesium^, Helium^, Carbon^> {
			public:
				static Quark<Aluminium^, Helium^, Carbon^>^ Deimos;

				Aluminium(Magnesium^ N) : Quark<Magnesium^, Helium^, Carbon^>(N, N->Rho.Key->Omicron, N->Mu.Key) {
					if (Deimos == nullptr) {
						Deimos = gcnew Quark<Aluminium^, Helium^, Carbon^>(this, R, L);
						Deimos->L->Omicron->Zeta(R->Mu.Value, N->Mu.Value->Last.Key->Pi->L);
					}
				}

				BigInteger PresentEvidence() {
					return BigInteger::ModPow(L->Beta->Identity, N->Last.Value->Last.Key->Beta->Ring, R->Mu.Key->Barn);
				}

				BigInteger Testify(BigInteger Phi) {
					return BigInteger::ModPow(Phi, N->Last.Value->Last.Key->Beta->Ring, R->Mu.Key->Barn);
				}
			};
		}
	}
}
