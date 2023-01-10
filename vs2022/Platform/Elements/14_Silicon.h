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
				static Quark<Carbon^, Coronium^, Carbon^>^ Ariel;
				static Quark<Coronium^, Coronium^, Carbon^>^ Prospero;
				property BigInteger Evidence { BigInteger get() { return Last.Value->R->R->Xi; }};

				Aluminium^ Zeta;

				Silicon(Aluminium^ Alpha, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Zeta = Alpha;
					Carbon^ Beta = gcnew Carbon(Rho, Upsilon, Ohm, Qi);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Count == 0) throw gcnew Exception("Inactivated Carbon");
					Add(Beta, gcnew Coronium(Alpha->N, Beta->Mu.Value, Phi));
					if (Oberon == nullptr) Oberon = gcnew Quark<Fluorine^, Coronium^, Aluminium^>(Phi, Mu.Value, Alpha);
					if(Enceladus == nullptr) Enceladus = this;
				}

				Coronium^ Consider(BigInteger Epsilon) {
					Carbon^ Beta = gcnew Carbon(Epsilon, Zeta->N->Mu.Value->Mu.Value->Rod->Identity, Zeta->L->Phi->N->Ring, ((Beryllium^)Zeta->L->Pi->R)->Cone->Barn);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Count == 0) throw gcnew Exception("Inactivated Carbon");
					Coronium^ Kappa = gcnew Coronium(Zeta->N, Beta->Mu.Value, Phi);
					if (Umbriel == nullptr) Umbriel = gcnew Quark<Fluorine^, Coronium^, Carbon^>(Phi, Kappa, Beta);
					else if(Ariel == nullptr) Ariel = gcnew Quark<Carbon^, Coronium^, Carbon^>(Beta, Kappa, Rho.Key);
					else if (Prospero == nullptr) Prospero = gcnew Quark<Coronium^, Coronium^, Carbon^>(Kappa, Mu.Value, Beta);
					Add(Beta, Kappa);
					return Kappa;
				}
			};
		}
	}
}
