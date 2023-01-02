#pragma once
#include "08_Oxygen.h"
#include "09_Fluorine.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Neon : Oxygen
			{
			public:
				Lithium^ Zeta;

				Neon(Fluorine^ F) : Oxygen(F->Delta, gcnew Hydrogen(), F->Epsilon->Item2) {
					Zeta = gcnew Lithium(F->Zeta->Item2, ((Affinity^)F->Sigma->N)->Rod, (Dynamic^)R);
				};			
			};
		}
	}
}
