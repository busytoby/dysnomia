#include "pch.h"

#include "Wou.h"

#include <assert.h>
using namespace System::Drawing;
using namespace Dysnomia::Platform::Wou;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;

				Mu = gcnew Ramus();
				Perithecium^ Rho = gcnew Perithecium(Mu);
				Peridium^ Psi = gcnew Peridium(Mu[0]->L, Rho);
			}
		}
	}
}