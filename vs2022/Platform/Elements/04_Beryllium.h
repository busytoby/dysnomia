#pragma once
#include "01_Hydrogen.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Beryllium : public Affinity { 
			public:
				Beryllium() : Affinity() {};
				Beryllium(Dynamic^ Rod, Dynamic^ Cone) : Affinity(Rod, Cone) {};
			};
		}
	}
}
