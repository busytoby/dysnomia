#pragma once
#include "01_Hydrogen.h"
#include "04_Beryllium.h"

using namespace Dysnomia::Platform::Elements;
using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hafnium : Bath
			{
			public:
				Hafnium(Beryllium^ Beta) { 
					Gamma = Beta;
				};
			};
		}
	}
}
