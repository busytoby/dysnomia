#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Epsilon^, Hydrogen^, Hydrogen^> {
			public:
				BigInteger Barn;

				Oxygen(Dysnomia::Epsilon^ N, Affinity^ R) : Quark(N, R->Cone, R->Rod) { 
					if (R->Cone->Barn != R->Rod->Barn) throw gcnew Exception("Sour");
					Barn = R->Rod->Barn;
				};
			};
		}
	}
}
