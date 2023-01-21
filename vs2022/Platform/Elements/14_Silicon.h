#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Silicon : public Dai<Carbon^, Coronium^>
			{
			public:
				static Dai<Carbon^, Coronium^>^ Enceladus;
				static Edge<Fluorine^, Coronium^, Aluminium^>^ Oberon;
				static Edge<Fluorine^, Coronium^, Carbon^>^ Umbriel;
				static Edge<Carbon^, Coronium^, Carbon^>^ Ariel;
				static Edge<Coronium^, Coronium^, Carbon^>^ Prospero;
				property Int64 Evidence { Int64 get() { return Last.Value->R->R->Xi; }};

				Aluminium^ Zeta;

				Silicon(Carbon^ Delta, Coronium^ Eta) {
					Add(Delta, Eta);
				}

				Silicon(Aluminium^ Alpha, Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Qi) {
					Zeta = Alpha;
					Carbon^ Beta = gcnew Carbon(Rho, Upsilon, Ohm, Qi);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Count == 0) throw gcnew Exception("Inactivated Carbon");
					Coronium^ Eta = gcnew Coronium(Alpha->N, Beta->Mu.Value, Phi);
					Add(Beta, Eta);
					if (Oberon == nullptr) Oberon = gcnew Edge<Fluorine^, Coronium^, Aluminium^>(Phi, Mu.Value, Alpha);
					if(Enceladus == nullptr) Enceladus = this;
				}

				Coronium^ Contain(Int64 Epsilon) {
					Carbon^ Beta = gcnew Carbon(Epsilon, Zeta->N->Mu.Value->Mu.Value->Rod->Identity, Zeta->L->Phi->N->Ring, ((Beryllium^)Zeta->L->Pi->R)->Cone->Barn);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Count == 0) throw gcnew Exception("Inactivated Carbon");
					Coronium^ Kappa = gcnew Coronium(Zeta->N, Beta->Mu.Value, Phi);
					if (Umbriel == nullptr) Umbriel = gcnew Edge<Fluorine^, Coronium^, Carbon^>(Phi, Kappa, Beta);
					else if(Ariel == nullptr) Ariel = gcnew Edge<Carbon^, Coronium^, Carbon^>(Beta, Kappa, Rho.Key);
					else if (Prospero == nullptr) Prospero = gcnew Edge<Coronium^, Coronium^, Carbon^>(Kappa, Mu.Value, Beta);
					Add(Beta, Kappa);
					return Kappa;
				}
			};
		}
	}
}
