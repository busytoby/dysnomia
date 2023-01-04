#pragma once
#include "01_Hydrogen.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Boron : public Quark<Affinity^, Affinity^, Hydrogen^>	{
			public:
				Boron(Affinity^ N, Affinity^ R, Hydrogen^ L) : Quark(N, R, L) {};
			};
		}
	}
}
