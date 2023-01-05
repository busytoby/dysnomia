#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Beryllium : public Affinity { 
			public:
				Hydrogen^ Beta;
				Lithium^ Xi;

				Beryllium() : Affinity() {
					Beta = gcnew Hydrogen();
					Xi = gcnew Lithium();
					Xi->Zeta(Rod, Cone);
				}
			};
		}
	}
}
