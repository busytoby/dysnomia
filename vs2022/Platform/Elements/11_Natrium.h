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
			public ref class Natrium : Poly<Oxygen^, Carbon^>
			{
			public:
				Neon^ Pi;

				Natrium(Fluorine^ F) {
					Pi = gcnew Neon(F);
					Carbon^ Chi = gcnew Carbon();
					Boron^ Lambda = F->Add(Chi);				
					Beryllium^ Alpha = gcnew Beryllium();
					Chi->Omicron->Zeta(Lambda->N->Cone, Alpha->Cone);
					Chi->Add(Alpha, Chi->Omicron);
					Oxygen^ Kappa = gcnew Oxygen(Pi, Pi->Beta, Alpha->Rod);
					F->Xi->Zeta(Kappa, Pi);
					F->Add(Chi, Alpha);
					F->Xi->Zeta(Pi, Chi);
					F->Xi->Zeta(Alpha, Kappa);
					Affinity^ R = gcnew Affinity(Pi->Beta, Alpha->Beta);
					Boron^ Iota = gcnew Boron(R, Alpha, Alpha->Beta);
					F->Xi->Zeta(Pi, Iota);
					F->Add(F[0].Key);
					Add(Kappa, Chi);
				}

				BigInteger Grow() {
					Add(Last.Key, Last.Value);
					BigInteger T = 0;
					for (int i = 0; i < Count; i++) {
						T = BigInteger::Add(T, Last.Value->Beta->Barn);
					}
					return T;
				}
			};
		}
	}
}
