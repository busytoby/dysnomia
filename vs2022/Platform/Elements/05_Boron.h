#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Boron : public Quark<Affinity^, Epsilon^, Hydrogen^>	{
			public:
				property BigInteger Signal { BigInteger get() { return N->Rod->Signal; }};

				Boron(Affinity^ N, Dysnomia::Epsilon^ R, Hydrogen^ L) : Quark(N, R, L) {};
			};
		}
	}
}
