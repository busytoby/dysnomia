#pragma once
#include "04_Beryllium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nitrogen : public Quark<Beryllium^, Hydrogen^, Hydrogen^>
			{
			public:
				Nitrogen(Beryllium^ C, Hydrogen^ Y, Hydrogen^ X) : Quark(gcnew Beryllium(Y, X), C->Cone, C->Rod) { };
			};
		}
	}
}
