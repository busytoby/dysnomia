#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Magnesium^, Helium^, Carbon^> {
			public:
				static Quark<Aluminium^, Helium^, Carbon^>^ Phobos;

				Aluminium(Magnesium^ N) : Quark<Magnesium^, Helium^, Carbon^>(N, gcnew Helium(), N->Mu.Key) {
					if (Phobos == nullptr) {
						Phobos = gcnew Quark<Aluminium^, Helium^, Carbon^>(this, R, L);
					}
				}

				Int64 Evidence() {
					return Math::ModPow(L->Phi->N->Identity, N->Mu.Value->Mu.Key->Phi->N->Ring, R->Rod->Barn);
				}

				Int64 Testify(Int64 Phi) {
					return Math::ModPow(Phi, N->Mu.Value->Mu.Key->Phi->N->Ring, R->Cone->Barn);
				}
			};
		}
	}
}
