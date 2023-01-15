#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lithium : public Dai<Helium^, Hydrogen^> {
			public:
				property BigInteger Base { BigInteger get() { return Mu->L->R->Base; }};

				Lithium() {
					Add(gcnew Helium(), gcnew Hydrogen());
				}
			};
		}
	}
}
