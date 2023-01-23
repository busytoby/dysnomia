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

				Mu = gcnew Aluminium();
				Rho = gcnew Parity(Mu);
				Psi = gcnew Ether(Rho);
				Nu = gcnew Apse(Psi->Mu->L);
				Eta = gcnew Synapse(Psi, Nu);
				Sigma = gcnew Eun(Eta);
				Ascus^ Upsilon = gcnew Ascus(Eta, Sigma);
			}
		}
	}
}