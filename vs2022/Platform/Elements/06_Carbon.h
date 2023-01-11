#pragma once
#include "07_Nitrogen.h"

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Carbon : public Dai<Beryllium^, Nitrogen^> {
			public:
				Helium^ Gamma;
				Lithium^ Phi;
				Boron^ Pi;

				Carbon(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Gamma = gcnew Helium();
					Beryllium^ Alpha = gcnew Beryllium(Rho, Upsilon, Ohm, Qi);
					Affinity^ Beta = gcnew Affinity();
					Phi = gcnew Lithium(gcnew Hydrogen(), Beta->Cone, Beta->Rod);
					Nitrogen^ Iota = gcnew Nitrogen(Phi->N, Alpha, Alpha->Phi->N);
					Pi = gcnew Boron(Iota->R, Iota, Alpha->Phi->N);
					Add(Alpha, Iota);
					this->Epsilon = Math::ModPow(Phi->R->Signal, Phi->L->Channel, Phi->N->Foundation);
				}

				Carbon() {
					Beryllium^ Alpha = gcnew Beryllium();
					Gamma = gcnew Helium();
					Affinity^ Beta = gcnew Affinity();
					Phi = gcnew Lithium(gcnew Hydrogen(), Beta->Cone, Beta->Rod);
					Affinity^ R = gcnew Affinity(Alpha->Phi->N, Phi->N);
					Pi = gcnew Boron(R, Alpha, Phi->N);
					this->Epsilon = Math::ModPow(Phi->R->Signal, Phi->L->Channel, Alpha->Phi->N->Foundation);
				}
			};
		}
	}
}
