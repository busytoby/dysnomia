#include "pch.h"

#include "Wou.h"
#include <assert.h>
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;

				Carbon^ C = gcnew Carbon();
				Fluorine^ F = gcnew Fluorine();

				Beryllium^ Alpha = gcnew Beryllium();
				Affinity^ R = gcnew Affinity(F->Beta, Alpha->Beta);
				Boron^ Pi = gcnew Boron(R, Alpha, Alpha->Beta);

				F->Xi->Zeta(F->Beta, Pi);
				F->Xi->Zeta(Pi, C);
				C->Xi->Zeta(Pi, F);

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