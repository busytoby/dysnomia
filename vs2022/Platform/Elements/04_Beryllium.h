#pragma once
#include "01_Hydrogen.h"
#include "02_Helium.h"
#include "03_Lithium.h"

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
				};
			};
		}
	}
}
