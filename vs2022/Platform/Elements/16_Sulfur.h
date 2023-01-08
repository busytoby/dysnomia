#pragma once
#include "13_Aluminium.h"
#include "14_Silicon.h"
#include "15_Phosphorous.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Sulfur : public Quark<Aluminium^, Phosphorous^, Silicon^>
			{
			public:

			};
		}
	}
}