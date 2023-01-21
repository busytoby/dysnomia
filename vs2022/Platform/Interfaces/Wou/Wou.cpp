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

				Mu = gcnew Down();
				Rho = gcnew Charm(Mu);
				Psi = gcnew Up(Rho);

				Nu = gcnew Down();
				Eta = gcnew Charm(Nu);

				Sigma = gcnew Bottom(Psi, Eta);
				Upsilon = gcnew Aluminium(Sigma);
			}
		}
	}
}