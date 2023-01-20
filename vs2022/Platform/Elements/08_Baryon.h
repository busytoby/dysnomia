#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Baryon : public Dai<Hel^, Down^> {
			public:
				static Quark<Nucleon^, Fermion^, Hadron^>^ Hippocamp;

				Baryon(Down^ Beta) {
					Hel^ Delta = gcnew Hel(
						Beta[0]->L[0]->L[6]->L[0]->L[0]->L->Base,
						Beta[0]->L[0]->L[5]->L[0]->L[0]->L->Secret,
						Beta[0]->L[0]->L[2]->L[0]->L[0]->L->Signal,
						Beta[0]->L[0]->L[1]->L[0]->I->Channel);

					Add(Delta, Beta);
					Add(Beta[0]->L[0]->L[6]->L[0]->L, Beta);
					Add(Beta[0]->L[0]->L[5]->L[0]->L, Beta);
					Add(Beta[0]->L[0]->L[2]->L[0]->L, Beta);

					if (Hippocamp == nullptr) Hippocamp = gcnew Quark<Nucleon^, Fermion^, Hadron^>(Beta[0]->L, Beta[0]->L[0]->L, Delta[0]->L);
				}
			};
		}
	}
}
