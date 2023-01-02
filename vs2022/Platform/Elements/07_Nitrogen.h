#pragma once
#include "09_Fluorine.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nitrogen : public Quark<Epsilon^>
			{
			public:
				Nitrogen(Affinity^ C, Dynamic^ Y, Dynamic^ X) : Quark(gcnew Affinity(Y, X), C->Cone, C->Rod) { };
			};
		}
	}
}
