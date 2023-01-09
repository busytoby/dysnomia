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
				static property BigInteger Third { BigInteger get() { return BigInteger::ModPow(Second, Constants::Rho, Constants::Mu); }};
				static property BigInteger Fourth { BigInteger get() { return BigInteger::ModPow(Dysnomia::Platform::Wou::Constants::Upsilon, Constants::Psi, Third); }};
				static property BigInteger Fifth { BigInteger get() { return BigInteger::Add(Constants::Psi, Constants::Rho); }};
				static property BigInteger Sixth { BigInteger get() { return BigInteger::ModPow(Constants::Psi, Constants::Rho, Dysnomia::Platform::Wou::Laws::Sixth); }};
				static property BigInteger Seventh { BigInteger get() { return BigInteger::ModPow(Constants::Psi, Constants::Rho, Constants::Nu); }};
				static property BigInteger Eighth { BigInteger get() { return BigInteger::ModPow(Constants::Psi, Constants::Eta, Constants::Nu); }};
				static property BigInteger Ninth { BigInteger get() { return BigInteger::ModPow(Constants::Sigma, Eighth, Constants::Rho); }};
				static property BigInteger Tenth { BigInteger get() { return BigInteger::ModPow(Constants::Last, Ninth, Constants::Rho); }};
				static property BigInteger Eleventh { BigInteger get() { return BigInteger::ModPow(Fourth, Constants::Rho, Tenth); }};
				static property BigInteger Twelfth { BigInteger get() { return BigInteger::ModPow(Constants::Upsilon, Constants::Tau, Constants::Sigma); }};
				static property BigInteger Thirteenth { BigInteger get() { return BigInteger::Add(Constants::Upsilon, Constants::Tau); }};
			};
		}
	}
}