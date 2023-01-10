#pragma once
#include "19_Potassium.h"
#include "21_Scandium.h"
#include "23_Vanadium.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Manganese : public Quark<Vanadium^, Potassium^, Scandium^> {
			public:
			};
		}
	}
}