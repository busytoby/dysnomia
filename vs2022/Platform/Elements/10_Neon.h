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
				Lithium^ Zeta;
				Fluorine^ Sigma;

				property Complex Procession { Complex get() { return (Complex)Momentum / (Complex)R->Manifold; }}
				property Complex Mass { Complex get() { return ((Complex)(Momentum % R->Manifold) / (Complex)L->Ring) * Procession; }}
				property Complex Weight { Complex get() { return (Complex)R->Foundation / (Complex)N->Rod->Element; }};
				property Color Hue {Color get() { return Color::FromArgb((Int32)(R->Manifold % Int32::MaxValue)); }};
				Complex Shape;

				Neon(Fluorine^ F) : Oxygen(F->Delta, gcnew Hydrogen(), F->Epsilon->Item2) {
					_Momentum = 0;
					Sigma = F;
					Zeta = gcnew Lithium(F->Zeta->Item2, F->Xi->N->Rod, R);
					Shape = (Complex)Zeta->Item1->Barn / F->Shape;
				};
			};
		}
	}
}
