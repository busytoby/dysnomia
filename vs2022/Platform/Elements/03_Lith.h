#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lith : public Dai<Hel^, Hydrogen^> {
			public:
				property BigInteger Base { BigInteger get() { return Last->L->R->Base; }};

				Lith(Hydrogen^ Beta) {
					Add(gcnew Hel(), Beta);
				}
			};
		}
	}
}
