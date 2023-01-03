#pragma once
#include "04_Beryllium.h"

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Beryllium^, Hydrogen^, Hydrogen^> {
			public:
				property BigInteger Momentum { BigInteger get() { return ((Affinity^)N)->Rod->Dynamo * ((Affinity^)N)->Cone->Foundation; }}
				property Complex Procession { Complex get() { return (Complex)Momentum / (Complex)((Dynamic^)L)->Manifold; }}
				property Complex Mass { Complex get() { return ((Complex)(Momentum % ((Dynamic^)R)->Manifold) / (Complex)((Dynamic^)R)->Ring); }}
				property Complex Weight { Complex get() { return (Complex)((Affinity^)N)->Cone->Foundation / (Complex)((Dynamic^)L)->Element; }};

				Oxygen() : Quark(gcnew Beryllium(), gcnew Hydrogen(), gcnew Hydrogen()) { };
				Oxygen(Beryllium^ N, Hydrogen^ R, Hydrogen^ L) : Quark(N, R, L) { };
			};
		}
	}
}
