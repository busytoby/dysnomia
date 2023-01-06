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
				Beryllium^ Xi;
				Neon^ Pi;

				Natrium(Fluorine^ F) {
					Pi = gcnew Neon(F);
					Carbon^ Chi = gcnew Carbon();
					Boron^ Lambda = F->Add(Chi);				
					Beryllium^ Alpha = gcnew Beryllium();
					Chi->Omicron->Zeta(Lambda->N->Cone, Alpha->Cone);
					Affinity^ R = gcnew Affinity(Pi->Beta, Alpha->Beta);
					Oxygen^ Kappa = gcnew Oxygen(Pi, R);

					Xi = gcnew Beryllium(Pi->Manifold, F->Ring, Kappa->Barn, R->Xi);

					Chi->Add(Alpha, Chi->Omicron);
					F->Xi->Zeta(Kappa, Chi);
					Add(Kappa, Chi);
				}

				BigInteger Grow() {
					Add(Last.Key, Last.Value);
					BigInteger T = 0;
					for (int i = 0; i < Count; i++) {
						T = BigInteger::Add(T, this[i].Value->Beta->Barn);
					}
					return T;
				}
			};
		}
	}
}
