#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lithium : public Dai<Helium^, Hydrogen^> {
			public:
				property BigInteger Base { BigInteger get() { return Last->L->R->Base; }};

				Lithium(Hydrogen^ Beta) {
					Add(gcnew Helium(), Beta);
				}
			};
		}
	}
}
