#pragma once
#include "07_Nitrogen.h"

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Carbon : Dai<Beryllium^, Epsilon^> {
			private:
				Dysnomia::Epsilon^ Kappa;

			public:
				Lithium^ Phi;

				String^ Class;
				property Helium^ Omicron { Helium^ get() { return (Helium^)Kappa; }};
				property Nitrogen^ Iota { Nitrogen^ get() { return (Nitrogen^)Kappa; }};
				
				Boron^ Pi;

				Carbon(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Class = "Nitrogen";
					Beryllium^ Alpha = gcnew Beryllium(Rho, Upsilon, Ohm, Qi);
					Affinity^ Beta = gcnew Affinity();
					Phi = gcnew Lithium(gcnew Hydrogen(), Beta->Cone, Beta->Rod);
					Kappa = gcnew Nitrogen(Alpha, Alpha->Phi->N, Phi->N);
					Pi = gcnew Boron(Iota->N, Iota, Alpha->Phi->N);
					Add(Alpha, Iota);
					this->Epsilon = Math::ModPow(Phi->R->Signal, Phi->L->Channel, Phi->N->Foundation);
				}

				Carbon() {
					Class = "Helium";
					Kappa = gcnew Helium();
					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ Beta = gcnew Affinity();
					Phi = gcnew Lithium(gcnew Hydrogen(), Beta->Cone, Beta->Rod);
					Affinity^ R = gcnew Affinity(Alpha->Phi->N, Phi->N);
					Pi = gcnew Boron(R, Alpha, Phi->N);
					Omicron->Zeta(Alpha->Cone, Phi->N);
					Add(Alpha, Omicron);
					this->Epsilon = Math::ModPow(Phi->R->Signal, Phi->L->Channel, Alpha->Phi->N->Foundation);
				}
			};
		}
	}
}
