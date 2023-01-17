#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Baryon : public Quark<Down^, Lith^, Hel^> {
			public:
				static Quark<Nucleon^, Fermion^, Hadron^>^ Hippocamp;
				static Quark<Down^, Lith^, Nucleon^>^ Anthe;

				Baryon(Down^ Beta, Lith^ Pi, Hel^ Xi) : Quark<Down^, Lith^, Hel^>(Beta, Pi, Xi) {
					if (Hippocamp != nullptr || Anthe != nullptr) throw gcnew Exception("Baryon Is Singular");
					Hel^ Omicron = gcnew Hel(
						Beta[0]->L[0]->I->I->Base,
						Beta[0]->I->R[0]->I->Secret,
						Beta[0]->I->R[1]->I->Signal,
						Beta[0]->L[0]->L[0]->L->Channel);

					Beta[0]->I->Chi(Omicron[0]->I, Omicron[0]->L);
					Beta[0]->L[0]->L->Add(Omicron[0]->I, Omicron[0]->L);

					Hippocamp = gcnew Quark<Nucleon^, Fermion^, Hadron^>(Beta[0]->L, Beta[0]->I, Omicron[0]->I);
					Anthe = gcnew Quark<Down^, Lith^, Nucleon^>(Beta, Pi, Beta[0]->L);
				}
			};
		}
	}
}
