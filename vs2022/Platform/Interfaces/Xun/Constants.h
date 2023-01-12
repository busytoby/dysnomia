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
				//static property BigInteger Mu { BigInteger get() { return Objects::Thebe->Mu.Key->N->; }};


				static Constants() { Evidences = gcnew List<BigInteger>(); }
			};
		}
	}
}