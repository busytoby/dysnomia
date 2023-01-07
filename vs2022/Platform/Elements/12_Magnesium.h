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
					Add(S->Mu.Value, S->Pi->N);
					Add(S->Rho.Value, K);

					Mu.Value->Xi->Zeta(S->Rho.Key, S->Rho.Value);
					Mu.Value->Xi->Zeta(S->Rho.Value->Omicron, S->Rho.Value);
					Mu.Value->Xi->Zeta(S->Rho.Value->Pi, S->Rho.Value);

					if (Saturn == nullptr) Saturn = gcnew Quark<Magnesium^, Fluorine^, Natrium^>(this, K, S);
				}
			};
		}
	}
}
