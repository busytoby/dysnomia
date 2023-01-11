#pragma once
#include "Constants.h"

using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Tian {
			public ref class Laws abstract sealed {
			public:
				static property BigInteger First { BigInteger get() { return BigInteger::Add(Constants::Mu, Constants::Rho); }};
			};
		}
	}
}