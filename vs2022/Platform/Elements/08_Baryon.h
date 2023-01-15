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
						Beta[0]->L[0]->I->R->R->Base,
						Beta[0]->I->L[0]->I->R->Secret,
						Beta[0]->I->L[1]->I->R->Signal,
						Beta[0]->L[0]->L[0]->L->Channel);
					Hadron^ Delta = gcnew Hadron(Omicron->Rod);
					Delta->L->Epsilon = Omicron->Cone->Tau;
					Beta[0]->I->Chi(Delta, Omicron->Cone);

					Beta[0]->L[0]->L->Add(Delta, Omicron->Cone);

					if (Hippocamp == nullptr) Hippocamp = gcnew Quark<Nucleon^, Fermion^, Hadron^>(Beta[0]->L, Beta[0]->I, Delta);
					if (Anthe == nullptr) Anthe = gcnew Quark<Down^, Lith^, Nucleon^>(Beta, Pi, Beta[0]->L);
				}
			};
		}
	}
}
