#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Affinity^> {
			public:
				Aluminium(Affinity^ N, Affinity^ R, Affinity^ L) : Quark(N, R, L) {};
			};
		}
	}
}
