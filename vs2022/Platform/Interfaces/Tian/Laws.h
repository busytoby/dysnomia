#pragma once
#include "Constants.h"

using Dysnomia::Math;

namespace Dysnomia {
	namespace Platform {
		namespace Tian {
			public ref class Laws abstract sealed {
			public:
				static property Int64 First { Int64 get() { return Constants::Mu + Constants::Rho; }};
				static property Int64 Second { Int64 get() { return Math::ModPow(Constants::Last, First, Constants::Rho); }};
				static property Int64 Third { Int64 get() { return Constants::Last + Constants::Eta; }};
				static property Int64 Fourth { Int64 get() { return Math::ModPow(Constants::Sigma, Constants::Eta, Constants::Mu); }};
				static property Int64 Fifth { Int64 get() { return Math::ModPow(Constants::Last, Constants::Upsilon, Constants::Sigma); }};
				static property Int64 Sixth { Int64 get() { return Math::ModPow(Constants::Theta, Constants::Sigma, Constants::Rho); }};
				static property Int64 Seventh { Int64 get() { return Constants::Theta + Constants::Last; }};
			};
		}
	}
}