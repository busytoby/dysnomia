#pragma once
#include "Constants.h"

using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Jong {
			public ref class Laws abstract sealed {
			public:
				static property BigInteger First { BigInteger get() { return BigInteger::Add(Constants::Mu, Constants::Evidences[0]); }};
				static property BigInteger Second { BigInteger get() { return BigInteger::ModPow(Dysnomia::Platform::Wou::Laws::Fourth, Constants::Mu, Constants::Rho); }};
			};
		}
	}
}