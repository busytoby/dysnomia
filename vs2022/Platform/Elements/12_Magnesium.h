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
				Magnesium(Neon^ N, Sodium^ S) : Quark(S->Gamma->Item1, N->Zeta->Item3, N->N) {

				}
			};
		}
	}
}
