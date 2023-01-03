#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Epsilon^> {
			public:
				property BigInteger Momentum { BigInteger get() { return ((Affinity^)N)->Rod->Dynamo * ((Affinity^)N)->Cone->Foundation; }}
				property Complex Procession { Complex get() { return (Complex)Momentum / (Complex)((Dynamic^)L)->Manifold; }}
				property Complex Mass { Complex get() { return ((Complex)(Momentum % ((Dynamic^)R)->Manifold) / (Complex)((Dynamic^)R)->Ring); }}
				property Complex Weight { Complex get() { return (Complex)((Affinity^)N)->Cone->Foundation / (Complex)((Dynamic^)L)->Element; }};

				Oxygen() : Quark(gcnew Affinity(), gcnew Dynamic(), gcnew Dynamic()) { };
				Oxygen(Affinity^ N, Dynamic^ R, Dynamic^ L) : Quark(N, R, L) { };
			};
		}
	}
}
