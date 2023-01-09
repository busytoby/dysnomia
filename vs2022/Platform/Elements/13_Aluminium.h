#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Magnesium^, Helium^, Carbon^> {
			public:
				static Quark<Aluminium^, Helium^, Carbon^>^ Phobos;

				Aluminium(Magnesium^ N) : Quark<Magnesium^, Helium^, Carbon^>(N, N->Mu.Key->Omicron, N->Mu.Key) {
					if (Phobos == nullptr) {
						Phobos = gcnew Quark<Aluminium^, Helium^, Carbon^>(this, R, L);
					}
				}

				BigInteger PresentEvidence() {
					return BigInteger::ModPow(L->Phi->N->Identity, N->Mu.Value->Mu.Key->Phi->N->Ring, R->Mu.Key->Barn);
				}

				BigInteger Testify(BigInteger Phi) {
					return BigInteger::ModPow(Phi, N->Mu.Value->Mu.Key->Phi->N->Ring, R->Mu.Key->Barn);
				}
			};
		}
	}
}
