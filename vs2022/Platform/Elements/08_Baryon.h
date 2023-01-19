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
					/*
					Hel^ Omicron = gcnew Hel(
						Beta[0]->L[0]->I->I->Base,
						Beta[0]->I->R[0]->I->Secret,
						Beta[0]->I->R[1]->I->Signal,
						Beta[0]->L[0]->L[0]->L->Channel);

					Beta[0]->I->Chi(Omicron[0]->I, Omicron[0]->L);
					Beta[0]->L[0]->L->Add(Omicron[0]->I, Omicron[0]->L);

					Add(Beta[0]->L[0]->L, Beta);

					Hippocamp = gcnew Quark<Nucleon^, Fermion^, Hadron^>(Beta[0]->L, Beta[0]->I, Omicron[0]->I);
					*/
				}
			};
		}
	}
}
