#pragma once
#include "Constants.h"

using namespace System::Numerics;
using Dysnomia::Math;

namespace Dysnomia {
	namespace Platform {
		namespace Xun {
			public ref class Laws abstract sealed {
			public:
				static property BigInteger First { BigInteger get() { return Math::ModPow(Constants::Last, Constants::Rho, Constants::Mu); }};
				static property BigInteger Second { BigInteger get() { return Math::ModPow(Constants::Mu, Constants::Last, Constants::Rho); }};
				static property BigInteger Third { BigInteger get() { return Math::ModPow(Constants::Mu, Constants::Psi, Constants::Nu); }};
				static property BigInteger Fourth { BigInteger get() { return Math::ModPow(Constants::Mu, Constants::Sigma, Constants::Rho); }};
				static property BigInteger Fifth { BigInteger get() { return Math::ModPow(Constants::Eta, Constants::Sigma, Constants::Mu); }};
				static property BigInteger Sixth { BigInteger get() { return Math::ModPow(Platform::Wou::Constants::Tau, Constants::Last, Constants::Sigma); }};
				static property BigInteger Seventh { BigInteger get() { return Math::ModPow(Constants::Rho, Laws::Sixth, Platform::Jong::Constants::Psi); }};
			};
		}
	}
}