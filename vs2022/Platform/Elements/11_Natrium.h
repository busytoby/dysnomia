#pragma once
#include "08_Oxygen.h"
#include "09_Fluorine.h"
#include "03_Lithium.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace System::Numerics;
using namespace Dysnomia::Platform;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Natrium : public Dai<Oxygen^, Carbon^>
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
					Affinity^ R = gcnew Affinity(Alpha->Phi->N, gcnew Hydrogen());
					Oxygen^ Kappa = gcnew Oxygen(Alpha, R);
					Xi = gcnew Beryllium(Pi->Manifold, Phi->Ring, Kappa->Barn, R->Xi);
					if (Oxygen::Uranus->N->L->Barn.IsZero) {
						Affinity^ A = gcnew Affinity(Xi->Phi->N, Oxygen::Uranus->N->L);					
						Phi->Add(Chi, Oxygen::Uranus->L);
						Add(Kappa, Chi);
					}
					else
						Add(Kappa, Chi);
					
					Hue = Pi->Hue;
				}

				BigInteger Grow() {
					Add(Last.Key, Last.Value);
					BigInteger T = 0;
					for (int i = 0; i < Count; i++) {
						T = BigInteger::Add(T, this[i].Value->Phi->N->Barn);
					}
					return T;
				}
			};
		}
	}
}
