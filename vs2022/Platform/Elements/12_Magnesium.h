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
				Oxygen^ Rho;

				Magnesium(Neon^ N, Sodium^ S) : Quark(S->Beta->Rod, N->R, N->N) {
					assert(N->Weight != S->Rho->Weight);

					Mu = S;
					Xi = gcnew Helium((Dynamic^)N->L, (Dynamic^)N->R);

					Upsilon = gcnew Nitrogen(gcnew Beryllium(), (Dynamic^)N->L, gcnew Hydrogen());

					Nu = gcnew Lithium(((Affinity^)Upsilon->N)->Rod, ((Affinity^)Upsilon->N)->Cone, (Dynamic^)Upsilon->R);
					Rho = gcnew Oxygen(gcnew Affinity(gcnew Dynamic(), (Dynamic^)N->R), gcnew Dynamic(), gcnew Dynamic());
				}
			};
		}
	}
}
