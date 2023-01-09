#pragma once
#include "18a_Dysnomium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Potassium : Quark<Dysnomium^, Magnesium^, Aluminium^>
			{
			public:
				Potassium(Sulfur^ Upsilon) : Quark<Dysnomium^, Magnesium^, Aluminium^>(gcnew Dysnomium(Upsilon->R), Upsilon->N->N, Upsilon->N) {
				}

				Coronium^ Kappa(Silicon^ Phi) {
					if (Phi->Count < 5) throw gcnew Exception("Incomplete Thought");
					N->Kappa(KeyValuePair<Coronium^, Silicon^>(Phi->Psi.Value, Phi));
					return Phi->Eta.Value;
				}
			};
		}
	}
}
