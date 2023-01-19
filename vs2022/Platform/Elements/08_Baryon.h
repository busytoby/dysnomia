#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Baryon : public Dai<Hel^, Down^> {
			public:
				static Quark<Nucleon^, Fermion^, Hadron^>^ Hippocamp;

				Baryon(Down^ Beta) {
					if (Hippocamp != nullptr) throw gcnew Exception("Baryon Is Singular");

					Hel^ Omicron = gcnew Hel(
						Beta[0]->I[3]->L[0]->I->Base,
						Beta[0]->I[1]->I->Secret,
						Beta[0]->L[0]->I[0]->I->Signal,
						Beta[0]->L[0]->L[6]->L[0]->I->Channel);

					Add(Omicron, Beta);
					Hippocamp = gcnew Quark<Nucleon^, Fermion^, Hadron^>(Beta[0]->L, Beta[0]->L[0]->L, Omicron[0]->L);
				}
			};
		}
	}
}
