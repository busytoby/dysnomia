#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Xun {
			public ref class Constants abstract sealed {
			public:
				static List<BigInteger>^ Evidences;
				static property BigInteger Last { BigInteger get() { return Evidences[Evidences->Count - 1]; }}
				static property BigInteger Mu { BigInteger get() { return Objects::Sun->N->Mu.Key->N->N->N->N->Mu.Key->Pi->N->Rod->Base; }};

				static Constants() { Evidences = gcnew List<BigInteger>(); }
			};
		}
	}
}