#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lith : public Dai<Hydrogen^, Hel^> {
			public:
				property BigInteger Base { BigInteger get() { return Last->I->R->Base; }};

				Lith(Hydrogen^ Beta) {
					Add(Beta, gcnew Hel());
				}

				Lith(Hydrogen^ Beta, Hel^ Eta) {
					Add(Beta, Eta);
				}
			};
		}
	}
}
