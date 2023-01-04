#pragma once
#include "10_Neon.h"
#include "11_Sodium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			/*
			public ref class Magnesium : public Quark<Hydrogen^, Hydrogen^, Beryllium^>
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
					Xi = gcnew Helium(N->L, N->R);

					Upsilon = gcnew Nitrogen(gcnew Beryllium(), N->L, gcnew Hydrogen());

					Nu = gcnew Lithium(Upsilon->N->Rod, Upsilon->N->Cone, Upsilon->R);
					Rho = gcnew Oxygen(gcnew Beryllium(gcnew Hydrogen(), N->R), gcnew Hydrogen(), N->L);
				}
			};
			*/
		}
	}
}
