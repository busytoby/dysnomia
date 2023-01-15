#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Baryon : public Quark<Down^, Lith^, Hel^> {
			public:
				static Quark<Nucleon^, Fermion^, Hadron^>^ Hippocamp;
				static Quark<Nucleon^, Hadron^, Fermion^>^ Uranus;
				static Quark<Down^, Lith^, Nucleon^>^ Anthe;

				Baryon(Down^ Mu, Lith^ Psi, Hel^ Rho) : Quark<Down^, Lith^, Hel^>(Mu, Psi, Rho) {
					Affinity^ Beta = gcnew Affinity(
						Mu[0]->L[0]->I->R->R->Base,
						Mu[0]->I->L[0]->I->R->Secret,
						Mu[0]->I->L[1]->I->R->Signal,
						Mu[0]->L[0]->L[0]->L->Channel);
					Hadron^ Phi = gcnew Hadron(Beta->Rod);
					Phi->L->Epsilon = Beta->Cone->Tau;
					Mu[0]->I->Chi(Phi, Beta->Cone);

					Mu[0]->L[0]->L->Add(Phi, Beta->Cone);

					if (Hippocamp == nullptr) Hippocamp = gcnew Quark<Nucleon^, Fermion^, Hadron^>(Mu[0]->L, Mu[0]->I, Phi);
					if (Uranus == nullptr) Uranus = gcnew Quark<Nucleon^, Hadron^, Fermion^>(Mu[0]->L, Psi->Mu->I, Mu[0]->I);
					if (Anthe == nullptr) Anthe = gcnew Quark<Down^, Lith^, Nucleon^>(Mu, Psi, Mu[0]->L);
				}
			};
		}
	}
}
