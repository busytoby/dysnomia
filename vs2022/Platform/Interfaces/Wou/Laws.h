#pragma once
#include "Constants.h"

using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		public ref class Laws abstract sealed {
		public:
			static property BigInteger First { BigInteger get() { return BigInteger::Add(Constants::Rho, Constants::Evidences[0]); }};
			static property BigInteger Second { BigInteger get() { return BigInteger::ModPow(Constants::Rho, Constants::Mu, First); }};
			static property BigInteger Third { BigInteger get() { return BigInteger::ModPow(First, Constants::Psi, Constants::Nu); }};
			static property BigInteger Fourth { BigInteger get() { return BigInteger::ModPow(Constants::Last, Constants::Psi, Constants::Eta); }};
			static property BigInteger Fifth { BigInteger get() { return BigInteger::Add(Constants::Upsilon, Constants::Rho); }};
			static property BigInteger Sixth { BigInteger get() { return BigInteger::ModPow(Constants::Upsilon, Constants::Sigma, Third); }};
			static property BigInteger Seventh { BigInteger get() { return BigInteger::ModPow(Sixth, Constants::Nu, Constants::Upsilon); }};
			static property BigInteger Eighth { BigInteger get() { return BigInteger::ModPow(Constants::Sigma, Seventh, Constants::Last); }};
			static property BigInteger Ninth { BigInteger get() { return BigInteger::ModPow(Constants::Eta, Constants::Last, Constants::Tau); }};
			static property BigInteger Tenth { BigInteger get() { return BigInteger::Add(Constants::Last, Constants::Tau); }};
		};
	}
}