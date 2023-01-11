#pragma once

#include "Constants.h"
#include "Laws.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			typedef Dynamic Hydrogen;

			public ref class Tian
			{
			public:
				Jong^ Mu;
				static property BigInteger Mu { BigInteger get() { return Dysnomia::Platform::Wou::Constants::Theta; }};

				Tian();
			};
		}
	}
}
