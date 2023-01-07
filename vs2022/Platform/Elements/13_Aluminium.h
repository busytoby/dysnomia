#pragma once
#include "12_Magnesium.h"

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
						Mars->L->Zeta((Hydrogen^)((Carbon^)N->Mu.Value->Xi->Last.Value)->Pi->N->Cone, N->Mu.Value->Last.Key->Pi->L);
					}
				}
			};
		}
	}
}
