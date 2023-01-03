#pragma once
#include "05_Boron.h"
#include "04_Beryllium.h"
#include "01_Hydrogen.h"
#include <cassert>
#include "03_Lithium.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Carbon {
			public:
				Hydrogen^ Alpha;
				Beryllium^ Xi;
				Boron^ Pi;
				Lithium^ Zeta;

				Complex Hardness;
				Complex Shape;

				Carbon() {
					Alpha = gcnew Hydrogen();
					Xi = gcnew Beryllium();

					BigInteger ProofOfTemperature = Xi->RunXi();
					assert(!ProofOfTemperature.IsZero);
					assert(ProofOfTemperature.Equals(Xi->Epsilon));

					Pi = gcnew Boron(Alpha, Xi->Cone, Xi->Rod);

					Zeta = gcnew Lithium(Alpha, Xi->Rod, Xi->Cone);
				}
			};
		}
	}
}
