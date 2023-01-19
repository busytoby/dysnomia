#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nucleon : public Dai<Lith^, Fermion^> {
			public:
				Nucleon(Fermion^ Beta) {
					Hel^ Pi = gcnew Hel(Beta->Last->I);
					Lith^ Xi = gcnew Lith(Pi);
					Fermion^ Omicron = gcnew Fermion(Xi);
					Add(Xi, Omicron);
				}
			};
		}
	}
}
