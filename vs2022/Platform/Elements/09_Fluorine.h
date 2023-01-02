#pragma once
#include "02_Helium.h"
#include "04_Beryllium.h"
#include "06_Carbon.h"
#include "07_Nitrogen.h"
#include "08_Oxygen.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fluorine
			{
			public:
				Carbon^ Rho;
				Nitrogen^ Xi;
				Oxygen^ Sigma;

				Helium^ Epsilon;
				Beryllium^ Delta;

				Lithium^ Zeta;

				Fluorine() {
					Epsilon = gcnew Helium();

					Rho = gcnew Carbon(); // Contains First Pion

					Sigma = gcnew Oxygen();
					Xi = gcnew Nitrogen(Rho->Xi, Rho->Alpha, (Dynamic^)Sigma->L); // First Muon

					Zeta = gcnew Lithium((Dynamic^)Xi->R, Epsilon->Item2, Rho->Zeta->Item3);

					Delta = gcnew Beryllium((Dynamic^)Sigma->R, Epsilon->Item1);
				} 
			};
		}
	}
}
