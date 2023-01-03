#pragma once
#include "10_Neon.h"
#include "11_Sodium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Magnesium : public Quark<Epsilon^>
			{
			public:
				Helium^ Xi;

				Magnesium(Neon^ N, Sodium^ S) : Quark(S->Beta->Rod, N->R, N->N) {
					assert(N->Weight != S->Rho->Weight);

					Xi = gcnew Helium((Dynamic^)N->L, (Dynamic^)N->R);
				}
			};
		}
	}
}
