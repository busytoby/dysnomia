#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lithium : public Tuple<Hydrogen^, Hydrogen^, Hydrogen^> {
			public:
				Lithium(Hydrogen^ A, Hydrogen^ B, Hydrogen^ C) : Tuple(A, B, C) {};
			};
		}
	}
}
