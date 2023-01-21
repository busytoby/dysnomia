#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Magnesium : public Dai<Carbon^, Fluorine^>
			{
			public:
				static Edge<Magnesium^, Fluorine^, Natrium^>^ VanAllenBelt;
				static Edge<Magnesium^, Fluorine^, Boron^>^ Dione;

				Natrium^ Zeta;

				Magnesium(Natrium^ Alpha, Fluorine^ Chi) {
					Zeta = Alpha;
					this->Epsilon = Math::ModPow(Chi->Mu.Value->Cone->Signal, Alpha->Mu.Key->N->Rod->Channel, Math::Prime);
					Add(Alpha->Mu.Value, Alpha->Pi->N);
					if (VanAllenBelt == nullptr) VanAllenBelt = gcnew Edge<Magnesium^, Fluorine^, Natrium^>(this, Chi, Alpha);
					if (Dione == nullptr) Dione = gcnew Edge<Magnesium^, Fluorine^, Boron^>(this, Chi, Alpha->Mu.Value->Pi);
				}
			};
		}
	}
}
