#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Silicon : public Dai<Carbon^, Coronium^>
			{
			public:
				static Dai<Carbon^, Coronium^>^ Enceladus;
				static Quark<Fluorine^, Coronium^, Aluminium^>^ Oberon;
				static Quark<Fluorine^, Coronium^, Carbon^>^ Umbriel;
				property BigInteger Evidence { BigInteger get() { return Last.Value->R->N->Xi; }};

				Aluminium^ Zeta;

				Silicon(Aluminium^ Alpha, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Zeta = Alpha;
					Carbon^ Beta = gcnew Carbon(Rho, Upsilon, Ohm, Qi);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Class != "Nitrogen") throw gcnew Exception("Incompatible Carbon");
					Add(Beta, gcnew Coronium(Alpha->N, Beta->Iota, Phi));
					if (Oberon == nullptr) Oberon = gcnew Quark<Fluorine^, Coronium^, Aluminium^>(Phi, Mu.Value, Alpha);
					if(Enceladus == nullptr) Enceladus = this;
				}

				Coronium^ Consider(BigInteger Epsilon) {
					Carbon^ Beta = gcnew Carbon(Epsilon, Zeta->N->Mu.Value->Mu.Value->Rod->Identity, Zeta->L->Phi->N->Ring, ((Beryllium^)Zeta->L->Pi->R)->Cone->Barn);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Class != "Nitrogen") throw gcnew Exception("Incompatible Carbon");
					Coronium^ Kappa = gcnew Coronium(Zeta->N, Beta->Iota, Phi);
					if (Umbriel == nullptr) Umbriel = gcnew Quark<Fluorine^, Coronium^, Carbon^>(Phi, Kappa, Beta);
					Add(Beta, Kappa);
					return Kappa;
				}
			};
		}
	}
}
