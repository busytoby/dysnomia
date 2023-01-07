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
				void Zeta(Dysnomia::Epsilon^ S, Dysnomia::Epsilon^ G) { 
					if (S == nullptr || G == nullptr) throw gcnew Exception("Null Addition");
					Add(KeyValuePair<Dysnomia::Epsilon^, Dysnomia::Epsilon^>(S, G)); 
				}
				void Zeta(KeyValuePair<Dysnomia::Epsilon^, Dysnomia::Epsilon^> M) {	
					if (M.Key == nullptr || M.Value == nullptr) throw gcnew Exception("Null Addition");
					Add(M);
				}
			};
		}
	}
}
