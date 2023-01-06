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
			public ref class Natrium
			{
			public:
				Neon^ Pi;
				Oxygen^ Kappa;
				Carbon^ Chi;

				Natrium(Fluorine^ F) {
					Pi = gcnew Neon(F);
					Chi = gcnew Carbon();
					Boron^ Lambda = F->Add(Chi);				
					Beryllium^ Alpha = gcnew Beryllium();
					Chi->Omicron->Zeta(Lambda->N->Cone, Alpha->Cone);
					Chi->Add(Alpha, Chi->Omicron);
					Kappa = gcnew Oxygen(Pi, Pi->Beta, Alpha->Rod);
					F->Xi->Zeta(Kappa, Pi);
					F->Add(Chi, Alpha);
					F->Xi->Zeta(Pi, Chi);
					F->Xi->Zeta(Alpha, Kappa);
					Affinity^ R = gcnew Affinity(Pi->Beta, Alpha->Beta);
					Boron^ Iota = gcnew Boron(R, Alpha, Alpha->Beta);
					F->Xi->Zeta(Pi, Iota);
					F->Add(F[0].Key);
				}
			};
		}
	}
}
