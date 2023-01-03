#pragma once
#include "08_Oxygen.h"
#include "09_Fluorine.h"
#include "03_Lithium.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Sodium
			{
			public:
				Beryllium^ Beta;
				Lithium^ Gamma;
				Oxygen^ Rho;

				Color Hue;
				Complex Hardness;

				Sodium(Fluorine^ F) {
					Gamma = gcnew Lithium(F->Delta->Rod, F->Epsilon->Item2, F->Delta->Cone);
					Rho = gcnew Oxygen(F->Delta, gcnew Hydrogen(), Gamma->Item2);
					Beta = gcnew Beryllium((Dynamic^)Rho->L, (Dynamic^)Rho->R);

					Hue = Color::FromArgb((Int32)(((Dynamic^)Rho->L)->Manifold % Int32::MaxValue));
					Hardness = (Complex)Gamma->Item1->Coordinate / (Complex)Gamma->Item1->Foundation;
				}
			};
		}
	}
}
