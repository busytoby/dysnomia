#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Compensation : public Dai<Aluminium^, Tauon^>
			{
			public:
				static Edge<Compensation^, Tauon^, Top^>^ Prospero;

				Compensation(Aluminium^ Beta) {
					Tauon^ Rho = gcnew Tauon(Beta);
					Add(Beta, Rho);
					if (Prospero == nullptr) Prospero = gcnew Edge<Compensation^, Tauon^, Top^>(this, Rho, Bottom::VanAllenBelt->R[0]->L);
				}

				/*
				Coronium^ Determine(Int64 Epsilon) {
					Carbon^ Beta = gcnew Carbon(Epsilon, Zeta->N->Mu.Value->Mu.Value->Rod->Identity, Zeta->L->Phi->N->Ring, ((Beryllium^)Zeta->L->Pi->R)->Cone->Barn);
					Fluorine^ Phi = gcnew Fluorine(Beta);
					if (Beta->Count == 0) throw gcnew Exception("Inactivated Carbon");
					Coronium^ Kappa = gcnew Coronium(Zeta->N, Beta->Mu.Value, Phi);
					Add(Beta, Kappa);
					return Kappa;
				}
				*/
			};
		}
	}
}
