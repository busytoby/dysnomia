#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nucleon : public Dai<Fermion^, Hel^> {
			public:
				Nucleon(Fermion^ Alpha) {
					Add(Alpha, gcnew Hel());
					Alpha->Chi(Mu->L->Mu->I, Mu->L->Mu->L);
				}
			};
		}
	}
}
