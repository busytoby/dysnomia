#pragma once
#include "Constants.h"

using Dysnomia::Math;

namespace Dysnomia {
	namespace Platform {
		namespace Xun {
			public ref class Laws abstract sealed {
			public:
				static property Int64 First { Int64 get() { return Math::ModPow(Constants::Last, Constants::Rho, Constants::Mu); }};
				static property Int64 Second { Int64 get() { return Math::ModPow(Constants::Mu, Constants::Last, Constants::Rho); }};
				static property Int64 Third { Int64 get() { return Math::ModPow(Constants::Mu, Constants::Psi, Constants::Nu); }};
				static property Int64 Fourth { Int64 get() { return Math::ModPow(Constants::Mu, Constants::Sigma, Constants::Rho); }};
				static property Int64 Fifth { Int64 get() { return Math::ModPow(Constants::Eta, Constants::Sigma, Constants::Mu); }};
				static property Int64 Sixth { Int64 get() { return Math::ModPow(Platform::Wou::Constants::Tau, Constants::Last, Constants::Sigma); }};
				static property Int64 Seventh { Int64 get() { return Math::ModPow(Constants::Rho, Laws::Sixth, Platform::Jong::Constants::Psi); }};
			};
		}
	}
}