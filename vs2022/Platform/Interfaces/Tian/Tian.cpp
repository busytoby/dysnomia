#include "pch.h"

#include "Tian.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Jong;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Tian::Tian() {
				Mu = gcnew Jong();
				Cobalt^ Rho = gcnew Cobalt(Mu->Tau);
				Constants::Evidences->Add(Constants::Mu);
				Nickel^ Psi = gcnew Nickel(Mu->Zheng(), Mu->Theta);
			}
		}
	}
}