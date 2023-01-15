#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nucleon : public Dai<Fermion^, Hel^> {
			public:
				Nucleon(Fermion^ Beta) {
					Add(Beta, gcnew Hel());
					Beta->Chi(Mu->L->Mu->I, Mu->L->Mu->L);
				}
			};
		}
	}
}
