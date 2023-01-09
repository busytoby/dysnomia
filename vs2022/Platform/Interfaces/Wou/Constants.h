#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Wou {
			public ref class Constants abstract sealed {
			public:
				static List<BigInteger>^ Evidences;
				static property BigInteger Last { BigInteger get() { return Evidences[Evidences->Count - 1]; }}
				static property BigInteger Mu { BigInteger get() { return Objects::Uranus->N->Rod->Barn; }};
				static property BigInteger Rho { BigInteger get() { return Objects::Tethys->Mu.Value->Mu.Value->Phi->N->Manifold; }};
				static property BigInteger Psi { BigInteger get() { return Objects::Neptune->N->Psi; }}
				static property BigInteger Nu { BigInteger get() { return BigInteger::Add(Objects::Star->N->N->Cone->Manifold, Objects::Star->R->N->Rod->Manifold); }}
				static property BigInteger Eta { BigInteger get() { return Objects::Neptune->N->Ring; }}
				static property BigInteger Sigma { BigInteger get() { return Objects::Star->L->Mu.Key->Pi->N->Rod->Base; }}
				static property BigInteger Upsilon { BigInteger get() { return Objects::Neptune->L->Rho.Key->Cone->Signal; }}
				static property BigInteger Tau { BigInteger get() { return Objects::Phobos->R->Mu.Value->Manifold; }}
				static property BigInteger Theta { BigInteger get() { return BigInteger::Add(Constants::Last, Constants::Tau); }}

				static Constants() {
					Evidences = gcnew List<BigInteger>();
				}
			};
		}
	}
}