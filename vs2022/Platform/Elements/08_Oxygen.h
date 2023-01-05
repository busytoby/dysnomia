#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Epsilon^, Hydrogen^, Hydrogen^> {
			public:
				Oxygen(Dysnomia::Epsilon^ N, Hydrogen^ R, Hydrogen^ L) : Quark(N, R, L) { };
			};
		}
	}
}
