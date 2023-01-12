#pragma once
#include "Constants.h"

using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Tian {
			public ref class Laws abstract sealed {
			public:
				static property BigInteger First { BigInteger get() { return BigInteger::Add(Constants::Mu, Constants::Rho); }};
				static property BigInteger Second { BigInteger get() { return BigInteger::ModPow(Constants::Last, First, Constants::Rho); }};
				static property BigInteger Third { BigInteger get() { return BigInteger::Add(Constants::Last, Constants::Eta); }};
				static property BigInteger Fourth { BigInteger get() { return BigInteger::ModPow(Constants::Sigma, Constants::Eta, Constants::Mu); }};
				static property BigInteger Fifth { BigInteger get() { return BigInteger::ModPow(Constants::Last, Constants::Upsilon, Constants::Sigma); }};
			};
		}
	}
}