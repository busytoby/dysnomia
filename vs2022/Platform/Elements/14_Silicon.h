#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Silicon : public Dai<Carbon^, Coronium^>
			{
			public:
				static Dai<Carbon^, Coronium^>^ Enceladus;
				property BigInteger Evidence { BigInteger get() { return Last.Value->R->N->Xi; }};

				Aluminium^ Zeta;

				Silicon(Aluminium^ Alpha, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Zeta = Alpha;
					Carbon^ Beta = gcnew Carbon(Rho, Upsilon, Ohm, Qi);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Xi->Rho.Key->GetType()->Name != "Nitrogen") throw gcnew Exception("Incompatible Carbon");
					Add(Beta, gcnew Coronium(Alpha->N, (Nitrogen^)Beta->Xi->Rho.Key, Phi));
					Aluminium::Deimos->R->Zeta(Beta->Omicron->Rho);
					if(Enceladus == nullptr) Enceladus = this;
				}

				Coronium^ Consider(BigInteger Epsilon) {
					Carbon^ Beta = gcnew Carbon(Epsilon, Zeta->N->Mu.Value->Mu.Value->Rod->Identity, Zeta->L->Beta->Ring, ((Beryllium^)Zeta->L->Pi->R)->Cone->Barn);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Xi->Rho.Key->GetType()->Name != "Nitrogen") throw gcnew Exception("Incompatible Carbon");
					Coronium^ Kappa = gcnew Coronium(Zeta->N, (Nitrogen^)Beta->Xi->Rho.Key, Phi);
					Add(Beta, Kappa);
					return Kappa;
				}
			};
		}
	}
}
