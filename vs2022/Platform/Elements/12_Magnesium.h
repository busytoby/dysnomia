#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Magnesium : public Poly<Carbon^, Fluorine^>
			{
			public:
				Magnesium(Natrium^ S, Fluorine^ K) {
					Add(S->Mu.Value, S->Pi->N);
					Add(S->Rho.Value, K);

					Mu.Value->Xi->Zeta(S->Rho.Key, S->Rho.Value);
					Mu.Value->Xi->Zeta(S->Rho.Value->Omicron, S->Rho.Value);
					Mu.Value->Xi->Zeta(S->Rho.Value->Pi, S->Rho.Value);
				}
			};
		}
	}
}
