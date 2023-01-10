#pragma once
#include "16_Sulfur.h"
#include "17a_Aether.h"
#include "21_Scandium.h"
#include "22_Titanium.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Vanadium : public Dai<Sulfur^, Aether^> {
			public:
				static Vanadium^ Jupiter;
				Titanium^ Xi;

				Vanadium(Titanium^ Phi) {
					Xi = Phi;
					if (Jupiter == nullptr) Jupiter = this;
					
					Aluminium^ Psi = gcnew Aluminium(Phi->R->Mu.Key->R);
					Phosphorous^ Nu = gcnew Phosphorous(
						Psi,
						Phi->N->Mu.Key->N->L->Nu.Key->Mu.Value->R->Cone->Manifold,
						Phi->N->Mu.Key->N->L->Nu.Key->Mu.Value->N->Ring,
						Phi->N->Mu.Key->N->L->Nu.Key->Mu.Value->N->Identity,
						Phi->N->Mu.Key->N->L->Nu.Key->Mu.Value->R->Rod->Manifold);
					Sulfur^ Eta = gcnew Sulfur(Nu->Rho.Value->Zeta, Nu, Nu->Mu.Value);

					Add(Phi->R->Mu.Value->N, Phi->R->Mu.Value->L);
					Add(Eta, Phi->R->Mu.Value->L);
				}
			};
		}
	}
}