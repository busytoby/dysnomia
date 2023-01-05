#pragma once
#include "08_Oxygen.h"
#include "09_Fluorine.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Neon : public Oxygen
			{
			public:
				property Color Hue {Color get() { return Color::FromArgb((Int32)(R->Manifold % Int32::MaxValue)); }};

				Neon(Fluorine^ F) : Oxygen(F, F[F->Count - 1].Key->Omicron[0].Value, F[F->Count - 1].Key->Omicron[0].Key) {
				};
			};
		}
	}
}
