#pragma once
#include "04_Beryllium.h"

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Epsilon^, Hydrogen^, Hydrogen^> {
			public:
				Oxygen() : Quark(gcnew Beryllium(), gcnew Hydrogen(), gcnew Hydrogen()) { };
				Oxygen(Dysnomia::Epsilon^ N, Hydrogen^ R, Hydrogen^ L) : Quark(N, R, L) { };
			};
		}
	}
}
