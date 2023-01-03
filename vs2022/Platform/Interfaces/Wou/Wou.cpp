#include "pch.h"

#include "Wou.h"
#include <assert.h>
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;

				Neon^ N = gcnew Neon(gcnew Fluorine());
				Sodium^ S = gcnew Sodium(gcnew Fluorine());
				assert(N->Hue.GetBrightness() == 0.0);
				Magnesium^ M = gcnew Magnesium(N, S);
				assert(N->Hue.GetBrightness() > 0.0);
				Aluminium^ A = gcnew Aluminium((Affinity^)N->N, (Affinity^)M->Rho->N, (Affinity^)S->Rho->N);
				int i = 0;
			}
		}
	}
}