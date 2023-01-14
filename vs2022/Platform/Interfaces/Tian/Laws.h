#pragma once
#include "Constants.h"

using namespace System::Numerics;
using Dysnomia::Math;

namespace Dysnomia {
	namespace Platform {
		namespace Tian {
			public ref class Laws abstract sealed {
			public:
				static property BigInteger First { BigInteger get() { return BigInteger::Add(Constants::Mu, Constants::Rho); }};
				static property BigInteger Second { BigInteger get() { return Math::ModPow(Constants::Last, First, Constants::Rho); }};
				static property BigInteger Third { BigInteger get() { return BigInteger::Add(Constants::Last, Constants::Eta); }};
				static property BigInteger Fourth { BigInteger get() { return Math::ModPow(Constants::Sigma, Constants::Eta, Constants::Mu); }};
				static property BigInteger Fifth { BigInteger get() { return Math::ModPow(Constants::Last, Constants::Upsilon, Constants::Sigma); }};
				static property BigInteger Sixth { BigInteger get() { return Math::ModPow(Constants::Theta, Constants::Sigma, Constants::Rho); }};
				static property BigInteger Seventh { BigInteger get() { return BigInteger::Add(Constants::Theta, Constants::Last); }};
			};
		}
	}
}