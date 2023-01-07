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

				Color Hue;

				Natrium(Fluorine^ Phi) {
					Pi = gcnew Neon(Phi);
					Carbon^ Chi = gcnew Carbon();
					Boron^ Lambda = Phi->Add(Chi);
					Beryllium^ Alpha = gcnew Beryllium();
					Chi->Omicron->Zeta(Lambda->N->Cone, Alpha->Cone);
					Affinity^ R = gcnew Affinity(Alpha->Beta, gcnew Hydrogen());
					Oxygen^ Kappa = gcnew Oxygen(Alpha, R);

					if (Oxygen::Uranus->L->L->Barn.IsZero) {
						Phi->Add(Oxygen::Uranus->R);
						int i = 99;
					}

					Xi = gcnew Beryllium(Pi->Manifold, Phi->Ring, Kappa->Barn, R->Xi);

					Chi->Add(Alpha, Chi->Omicron);
					Chi->Add(Xi, Chi->Omicron);
					Phi->Xi->Zeta(Chi, Kappa);
					Add(Kappa, Chi);

					Hue = Pi->Hue;
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
