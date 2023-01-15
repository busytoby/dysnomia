#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lith : public Dai<Hadron^, Hel^> {
			public:
				property Hadron^ Gamma { Hadron^ get() { return Last->I; }};
				property Dynamic^ Zeta { Dynamic^ get() { return Gamma->R; }};
				property BigInteger Base { BigInteger get() { return Zeta->Base; }};

				Lith(Hadron^ Beta) {
					Add(Beta, gcnew Hel());
				}
			};
		}
	}
}
