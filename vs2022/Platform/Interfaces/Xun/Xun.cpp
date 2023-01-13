#include "pch.h"

#include "Xun.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Xun;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Xun::Xun() {
				Mu = gcnew Tian();

				Bromine^ Rho = gcnew Bromine(Mu->Theta, Mu->Nu);
				Constants::Evidences->Add(Constants::Mu);
				
				
			}
		}
	}
}