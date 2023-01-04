#pragma once
#include "05_Boron.h"
#include "04_Beryllium.h"
#include "01_Hydrogen.h"
#include <cassert>
#include "03_Lithium.h"

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Carbon : Poly<Beryllium^, Helium^> {
			public:
				Hydrogen^ Beta;
				Lithium^ Xi;
				Helium^ Omicron;
				Boron^ Pi;

				Complex Hardness;
				Complex Shape;

				Carbon() {
					Xi = gcnew Lithium();
					Omicron = gcnew Helium();

					Grow();
				}

				void Grow() {
					Beta = gcnew Hydrogen();
					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					Xi->Zeta(Beta, Pi);

					Omicron->Zeta(Alpha->Cone, Alpha->Beta);
					Add(Alpha, Omicron);
				}
			};
		}
	}
}
