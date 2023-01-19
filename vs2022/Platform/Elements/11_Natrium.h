#pragma once
#include "08_Oxygen.h"
#include "09_Fluorine.h"
#include "03_Lithium.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace Dysnomia::Platform;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Natrium : public Dai<Oxygen^, Carbon^>
			{
			public:
				Beryllium^ Xi;
				Neon^ Pi;
				Boron^ Lambda;

				Color Hue;

				Natrium(Fluorine^ Phi) {
					Pi = gcnew Neon(Phi);
					Carbon^ Chi = gcnew Carbon();
					Boron^ Lambda = Phi->Add(Chi);
					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ R = gcnew Affinity(Alpha->Phi->N, Chi->Phi->Base, Alpha->Secret, Lambda->Signal, Chi->Channel);
					Oxygen^ Kappa = gcnew Oxygen(Alpha, R);
					Xi = gcnew Beryllium(Kappa->N->Phi->Base, Kappa->N->Secret, Kappa->Lambda->Signal, Chi->Channel);
					Add(Kappa, Chi);
					
					Hue = Pi->Hue;
				}

				Int64 Grow() {
					Add(Last.Key, Last.Value);
					Int64 T = 0;
					for (int i = 0; i < Count; i++) {
						T = T + this[i].Value->Phi->N->Barn;
					}
					return T;
				}
			};
		}
	}
}
