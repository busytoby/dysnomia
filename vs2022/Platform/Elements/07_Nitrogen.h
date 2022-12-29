#pragma once
#include "09_Fluorine.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nitrogen
			{
			public:
				Fluorine^ Fluorine;

				Nitrogen() { Fluorine = gcnew Dysnomia::Platform::Elements::Fluorine(); }
			};
		}
	}
}
