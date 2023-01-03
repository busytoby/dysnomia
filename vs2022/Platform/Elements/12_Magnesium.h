#pragma once
#include "10_Neon.h"
#include "11_Sodium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Magnesium : public Quark<Epsilon^>
			{
			public:
				Sodium^ Mu;
				Helium^ Xi;
				Nitrogen^ Upsilon;
				Lithium^ Nu;

				Magnesium(Neon^ N, Sodium^ S) : Quark(S->Beta->Rod, N->R, N->N) {
					assert(N->Weight != S->Rho->Weight);

					Mu = S;
					Xi = gcnew Helium((Dynamic^)N->L, (Dynamic^)N->R);

					Upsilon = gcnew Nitrogen(gcnew Beryllium(), (Dynamic^)N->L, gcnew Hydrogen());
					Nu = gcnew Lithium(((Affinity^)Upsilon->N)->Rod, (Dynamic^)Upsilon->L, ((Affinity^)Upsilon->N)->Cone);
				}
			};
		}
	}
}
