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
				Neon^ Pi;
				Oxygen^ Kappa;
				Carbon^ Chi;

				Sodium(Fluorine^ F) {
					Pi = gcnew Neon(F);
					Chi = gcnew Carbon();
					Beryllium^ Alpha = gcnew Beryllium();
					Kappa = gcnew Oxygen(Pi, Pi->Beta, Alpha->Rod);
					F->Add(Chi, Alpha);
					F->Xi->Zeta(Alpha, Kappa);
					Affinity^ R = gcnew Affinity(Pi->Beta, Alpha->Beta);
					Boron^ Iota = gcnew Boron(R, Alpha, Alpha->Beta);
					F->Xi->Zeta(Pi, Iota);
				}
			};
		}
	}
}
