#pragma once
#include "01_Hydrogen.h"

using namespace Dysnomia::Platform::Elements;
using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hafnium : Octonion
			{
			public:
				Hafnium(Hydrogen^ D) : Octonion((Affinity^)D->L, (Affinity^)D->R) { };
			};
		}
	}
}
