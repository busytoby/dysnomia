#pragma once
#include "01_Hydrogen.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Boron : public Quark<Hydrogen^, Hydrogen^, Hydrogen^>	{
			public:
				Boron(Hydrogen^ N, Hydrogen^ R, Hydrogen^ L) : Quark(N, R, L) {};
			};
		}
	}
}
