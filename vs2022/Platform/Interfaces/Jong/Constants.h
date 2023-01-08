#pragma once

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
				static property BigInteger Psi { BigInteger get() { return Objects::Deimos->R->Last.Key->Ring; }};
				static property BigInteger Nu { BigInteger get() { return Objects::Enceladus->Last.Value->R->R->Channel; }};

				static Constants() {
					Evidences = gcnew List<BigInteger>();
				}
			};
		}
	}
}