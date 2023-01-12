#pragma once
#include "29_Copper.h"
#include "28_Nickel.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Zinc : Quark<Copper^, Nickel^, Nickel^> {
			public:
				Zinc(Copper^ Mu, Nickel^ Rho, Nickel^ Psi) : Quark(Mu, Rho, Psi) {};
			};
		}
	}
}
