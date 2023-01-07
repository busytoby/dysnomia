#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Silicon : public Dai<Aluminium^, Quark<Magnesium^, Nitrogen^, Fluorine^>^>
			{
			public:
				Silicon(Aluminium^ Alpha, Carbon^ Gamma, Fluorine^ Phi) {
					if (Gamma->Xi->Rho.Key->GetType()->Name != "Nitrogen") throw gcnew Exception("Incompatible Carbon");
					Add(Alpha, gcnew Quark<Magnesium^, Nitrogen^, Fluorine^>(Alpha->N, (Nitrogen^)Gamma->Xi->Rho.Key, Phi));
				}
			};
		}
	}
}
