#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Magnesium : public Dai<Carbon^, Fluorine^>
			{
			public:
				static Quark<Magnesium^, Fluorine^, Natrium^>^ VanAllenBelt;

				Magnesium(Natrium^ S, Fluorine^ K) {
					this->Epsilon = Math::ModPow(K->Mu.Value->Cone->Signal, S->Mu.Key->N->Rod->Channel, Math::Prime);
					Add(S->Mu.Value, S->Pi->N);
					if (VanAllenBelt == nullptr) VanAllenBelt = gcnew Quark<Magnesium^, Fluorine^, Natrium^>(this, K, S);
				}
			};
		}
	}
}
