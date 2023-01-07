#include "pch.h"

#include "Wou.h"
#include <assert.h>
using namespace System::Numerics;
using namespace System::Drawing;
using namespace Dysnomia::Platform;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			typedef Dynamic Hydrogen;

			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;

				Carbon^ C = gcnew Carbon();
				Fluorine^ F = gcnew Fluorine(C);
				Natrium^ S = gcnew Natrium(F);

				Carbon^ Beta = gcnew Carbon();
				Fluorine^ Alpha = gcnew Fluorine(C);
				Objects::Neptune->L->Add(Alpha->Mu.Value, Beta->Omicron);
				Objects::Neptune->L->Add((Beryllium^)Beta->Pi->R, Objects::Neptune->L->Omicron);
				Constants::Evidences->Add(Constants::Upsilon);
				Constants::Evidences->Add(Laws::Sixth);
				Constants::Evidences->Add(Laws::Eighth);
				/*
				Neon^ N = gcnew Neon(gcnew Fluorine());
				Sodium^ S = gcnew Sodium(gcnew Fluorine());
				assert(N->Hue.GetBrightness() == 0.0);
				Magnesium^ M = gcnew Magnesium(N, S);
				assert(N->Hue.GetBrightness() > 0.0);

				Complex T = (Complex)N->Momentum * ((Complex)N->Mass + (Complex)N->Weight);

				Aluminium^ A = gcnew Aluminium(N->N, M, S->Rho->N);

				Phosphorous^ P = gcnew Phosphorous(
					gcnew Silicon(N->Sigma->Xi, N, N->Sigma->Rho->Pi),
					gcnew Silicon(S->Sigma->Xi, S->Rho, S->Sigma->Rho->Pi)
				);
				P->Item1->R->Spin();
				*/
				
			}
		}
	}
}