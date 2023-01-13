#pragma once
#include "Constants.h"

using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Xun {
			public ref class Laws abstract sealed {
			public:
				static property BigInteger First { BigInteger get() { return BigInteger::ModPow(Constants::Last, Constants::Rho, Constants::Mu); }};
				static property BigInteger Second { BigInteger get() { return BigInteger::ModPow(Constants::Mu, Constants::Last, Constants::Rho); }};
				static property BigInteger Third { BigInteger get() { return BigInteger::ModPow(Constants::Mu, Constants::Psi, Constants::Nu); }};
				static property BigInteger Fourth { BigInteger get() { return BigInteger::ModPow(Constants::Mu, Constants::Sigma, Constants::Rho); }};
				static property BigInteger Fifth { BigInteger get() { return BigInteger::ModPow(Constants::Eta, Constants::Sigma, Constants::Mu); }};
				static property BigInteger Sixth { BigInteger get() { return BigInteger::ModPow(Platform::Wou::Constants::Tau, Constants::Last, Constants::Sigma); }};
			};
		}
	}
}