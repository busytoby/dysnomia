#pragma once
#include "01_Hydrogen.h"
#include "03_Lithium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Beryllium : public Affinity { 
			public:
				Lithium^ Eta;

				Beryllium() : Affinity() {
					Eta = gcnew Lithium(Rod, Cone, Cone);
				};
				Beryllium(Dynamic^ Rod, Dynamic^ Cone) : Affinity(Rod, Cone) {
					Eta = gcnew Lithium(Rod, Cone, Cone);
				};
			};
		}
	}
}
