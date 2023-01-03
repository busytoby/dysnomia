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
				Magnesium^ M = gcnew Magnesium(N, S);

				Aluminium^ A = gcnew Aluminium((Affinity^)N->N, (Affinity^)M->Rho->N, (Affinity^)S->Rho->N);
			}
		}
	}
}