#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Jong {
			public ref class Constants abstract sealed {
			public:
				static List<BigInteger>^ Evidences;
				static property BigInteger Last { BigInteger get() { return Evidences[Evidences->Count - 1]; }}
				static property BigInteger Mu { BigInteger get() { return Dysnomia::Platform::Wou::Constants::Theta; }};
				static property BigInteger Rho { BigInteger get() { return Constants::Last; }};
				static property BigInteger Psi { BigInteger get() { return Objects::Phobos->R->Rod->Ring; }};
				static property BigInteger Nu { BigInteger get() { return Objects::Enceladus->Last.Value->R->L->Channel; }};
				static property BigInteger Eta { BigInteger get() { return Objects::Titan->Mu.Key->Mu.Key->N->Mu.Key->Pi->N->Rod->Coordinate; }};
				static property BigInteger Sigma { BigInteger get() { return Objects::Telesto->R->Last.Value->R->R->Rod->Signal; }};
				static property BigInteger Upsilon { BigInteger get() { return Objects::Psamathe->L->L->Mu.Key->Mu.Value->L->Foundation; }};
				static property BigInteger Tau { BigInteger get() { return BigInteger::ModPow(Constants::Eta, Constants::Upsilon, Constants::Rho); }};
				static property BigInteger Theta { BigInteger get() { return Objects::Psamathe->N->L->Mu.Value->L->Mu.Value->Phi->N->Barn; }};

				static Constants() {
					Evidences = gcnew List<BigInteger>();
				}
			};
		}
	}
}