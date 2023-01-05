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
				Neon^ Beta;
				Oxygen^ Kappa;
				Carbon^ Chi;

				Sodium(Fluorine^ F) {
					Beta = gcnew Neon(F);
					Chi = gcnew Carbon();
					Beryllium^ Alpha = gcnew Beryllium();
					Kappa = gcnew Oxygen(Alpha, Alpha->Rod, Beta->Beta);
					F->Add(Chi, Alpha);
					Affinity^ R = gcnew Affinity(Beta->Beta, Alpha->Beta);
					Boron^ Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					F->Xi->Zeta(Beta, Pi);
				}
			};
		}
	}
}
