#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Boron : public Quark<Affinity^, Epsilon^, Hydrogen^>	{
			public:
				Boron(Affinity^ N, Dysnomia::Epsilon^ R, Hydrogen^ L) : Quark(N, R, L) {};
			};
		}
	}
}
