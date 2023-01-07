#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Magnesium : public Poly<Carbon^, Fluorine^>
			{
			public:
				static Quark<Magnesium^, Fluorine^, Natrium^>^ Saturn;

				Magnesium(Natrium^ S, Fluorine^ K) {
					this->Epsilon = Math::ModPow(K->Last.Value->Cone->Signal, S->Mu.Key->R->Channel, Math::Prime);
					Add(S->Mu.Value, S->Pi->N);
					Add(S->Rho.Value, K);
					if (Saturn == nullptr) Saturn = gcnew Quark<Magnesium^, Fluorine^, Natrium^>(this, K, S);

					Mu.Value->Xi->Zeta(S->Rho.Key, S->Rho.Value);
					Mu.Value->Xi->Zeta(S->Rho.Value->Omicron, S->Rho.Value);
					Mu.Value->Xi->Zeta(S->Rho.Value->Pi, S->Rho.Value);

					Hydrogen^ Beta = gcnew Hydrogen();
					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Rho.Key->Add(Alpha, Rho.Key->Omicron);
				}
			};
		}
	}
}
