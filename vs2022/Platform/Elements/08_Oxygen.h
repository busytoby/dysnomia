#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Epsilon^> {
			public:
				property Complex Weight { Complex get() { return (Complex)((Affinity^)N)->Cone->Base / (Complex)((Dynamic^)L)->Element; }};

				Oxygen() : Quark(gcnew Affinity(), gcnew Dynamic(), gcnew Dynamic()) { };
				Oxygen(Affinity^ N, Dynamic^ R, Dynamic^ L) : Quark(N, R, L) { };
			};
		}
	}
}
