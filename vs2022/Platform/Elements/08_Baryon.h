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
						Beta[0]->I[1]->L[0]->I->Base,
						Beta[0]->I[1]->I->Secret,
						Beta[0]->L[0]->L[0]->I->Signal,
						Beta[0]->L[0]->L[1]->L[0]->I->Channel);

					Add(Delta, Beta);

					if (Hippocamp == nullptr) Hippocamp = gcnew Quark<Nucleon^, Fermion^, Hadron^>(Beta[0]->L, Beta[0]->L[0]->L, Delta[0]->L);
				}
			};
		}
	}
}
