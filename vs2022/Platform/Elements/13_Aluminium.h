#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Affinity^> {
			public:
				property Complex Wight { Complex get() { return (Complex)((Affinity^)N)->Rod->Signal / (Complex)((Affinity^)R)->Cone->Manifold; }};

				Aluminium(Affinity^ N, Affinity^ R, Affinity^ L) : Quark(N, R, L) {};
			};
		}
	}
}
