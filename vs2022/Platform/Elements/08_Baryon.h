#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Baryon : public Dai<Hel^, Down^> {
			public:
				static Edge<Nucleon^, Fermion^, Hadron^>^ Hippocamp;
				static Nucleon^ Star;

				Baryon(Down^ Beta) {
					if (Star == nullptr) Star = Beta[0]->L;
					else throw gcnew Exception("Not Yet Implemented");

					Hel^ Delta = gcnew Hel(
						Star[0]->L[6]->L[0]->L[0]->L->Base,
						Star[0]->L[5]->L[0]->L[0]->L->Secret,
						Star[0]->L[2]->L[0]->L[0]->L->Signal,
						Star[0]->L[2]->L[0]->I->Channel);

					Add(Delta, Beta);
					Add(Star[0]->L[6]->L[0]->L, Beta);
					Add(Star[0]->L[5]->L[0]->L, Beta);
					Add(Star[0]->L[2]->L[0]->L, Beta);

					if (Hippocamp == nullptr) Hippocamp = gcnew Edge<Nucleon^, Fermion^, Hadron^>(Beta[0]->L, Star[0]->L, Delta[0]->L);
				}
			};
		}
	}
}
