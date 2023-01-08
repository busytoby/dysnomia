#pragma once
#include "18a_Dysnomium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Potassium : Quark<Dysnomium^, Magnesium^, Aluminium^>
			{
			public:
				Potassium() : Quark<Dysnomium^, Magnesium^, Aluminium^>(nullptr, nullptr, nullptr) {}
			};
		}
	}
}
