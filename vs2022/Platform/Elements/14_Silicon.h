#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Silicon : public Dai<Aluminium^, Quark<Magnesium^, Nitrogen^, Fluorine^>^>
			{
			public:
				property BigInteger Evidence { BigInteger get() { return Last.Value->R->N->Xi; }};

				Silicon(Aluminium^ Alpha, Carbon^ Kappa, Fluorine^ Phi) {
					if (Kappa->Xi->Rho.Key->GetType()->Name != "Nitrogen") throw gcnew Exception("Incompatible Carbon");
					Add(Alpha, gcnew Quark<Magnesium^, Nitrogen^, Fluorine^>(Alpha->N, (Nitrogen^)Kappa->Xi->Rho.Key, Phi));
				}
			};
		}
	}
}
