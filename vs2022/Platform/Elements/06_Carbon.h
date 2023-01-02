#pragma once
#include "05_Boron.h"
#include "04_Beryllium.h"
#include "01_Hydrogen.h"
#include <cassert>

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

				Carbon() {
					Alpha = gcnew Hydrogen();
					Xi = gcnew Beryllium();

					BigInteger ProofOfTemperature = Xi->RunXi();
					assert(!ProofOfTemperature.IsZero);
					assert(ProofOfTemperature.Equals(Xi->Epsilon));

					Pi = gcnew Boron(Alpha, Xi->Cone, Xi->Rod);
				}
			};
		}
	}
}
