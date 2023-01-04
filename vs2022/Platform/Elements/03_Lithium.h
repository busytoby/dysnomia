#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lithium : public Poly<Epsilon^, Epsilon^> {
			public:
				Lithium() : Poly<Dysnomia::Epsilon^, Dysnomia::Epsilon^>() {};
				void Zeta(Dysnomia::Epsilon^ S, Dysnomia::Epsilon^ G) { Add(KeyValuePair<Dysnomia::Epsilon^, Dysnomia::Epsilon^>(S, G)); }
				void Zeta(KeyValuePair<Dysnomia::Epsilon^, Dysnomia::Epsilon^> M) {	Add(M);	}
			};
		}
	}
}
