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
					Affinity^ Omicron = gcnew Affinity(
						Beta[0]->L[0]->I->I->I->Base,
						Beta[0]->I->R[0]->I->I->Secret,
						Beta[0]->I->R[1]->I->I->Signal,
						Beta[0]->L[0]->L[0]->L->Channel);
					Hadron^ Delta = gcnew Hadron(Omicron->Rod);
					Delta->R->Epsilon = Omicron->Cone->Tau;
					Beta[0]->I->Chi(Delta, Omicron->Cone);

					Beta[0]->L[0]->L->Add(Delta, Omicron->Cone);

					if (Hippocamp == nullptr) Hippocamp = gcnew Quark<Nucleon^, Fermion^, Hadron^>(Beta[0]->L, Beta[0]->I, Delta);
					if (Anthe == nullptr) Anthe = gcnew Quark<Down^, Lith^, Nucleon^>(Beta, Pi, Beta[0]->L);
				}
			};
		}
	}
}
