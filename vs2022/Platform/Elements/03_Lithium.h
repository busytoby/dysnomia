#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lithium : public Quark<Hydrogen^, Hydrogen^, Hydrogen^> {
			public:
				Lithium(Hydrogen^ Beta, Hydrogen^ Phi, Hydrogen^ Gamma) : Quark<Hydrogen^, Hydrogen^, Hydrogen^>(Beta, Phi, Gamma) {};
			};
		}
	}
}
