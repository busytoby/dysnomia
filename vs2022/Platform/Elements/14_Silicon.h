#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Silicon : public Dai<Aluminium^, Quark<Magnesium^, Nitrogen^, Fluorine^>^>
			{
			public:
				property BigInteger Evidence { BigInteger get() { return Last.Value->R->N->Xi; }};

				Carbon^ Beta;

				Silicon(Aluminium^ Alpha, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Beta = gcnew Carbon(Rho, Upsilon, Ohm, Qi);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Xi->Rho.Key->GetType()->Name != "Nitrogen") throw gcnew Exception("Incompatible Carbon");
					Add(Alpha, gcnew Quark<Magnesium^, Nitrogen^, Fluorine^>(Alpha->N, (Nitrogen^)Beta->Xi->Rho.Key, Phi));
					Aluminium::Deimos->R->Zeta(Beta->Omicron->Rho);
				}
			};
		}
	}
}
