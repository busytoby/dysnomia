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

				Hydrogen^ HelloCone = gcnew Hydrogen();
				Nitrogen^ N = gcnew Nitrogen(C->Xi, C->Pi->N, HelloCone);
			}
		}
	}
}