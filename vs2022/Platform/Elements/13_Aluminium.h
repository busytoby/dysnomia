#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Magnesium^, Helium^, Carbon^> {
			public:
				static Quark<Aluminium^, Carbon^, Helium^>^ Mars;

				Aluminium(Magnesium^ N) : Quark<Magnesium^, Helium^, Carbon^>(N, N->Rho.Key->Omicron, N->Mu.Key) {
					if (Mars == nullptr) {
						Mars = gcnew Quark<Aluminium^, Carbon^, Helium^>(this, L, R);
						Mars->R->Omicron->Zeta(R->Mu.Value, N->Mu.Value->Last.Key->Pi->L);
					}
				}
			};
		}
	}
}
