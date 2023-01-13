#include "pch.h"

#include "Xun.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Xun;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Xun::Xun() {
				Mu = gcnew Tian();

				Krypton^ Rho = gcnew Krypton(
					Mu->Nu, 
					Dysnomia::Platform::Tian::Laws::First, 
					Dysnomia::Platform::Jong::Laws::First, 
					Dysnomia::Platform::Wou::Laws::First, 
					Dysnomia::Platform::Tian::Constants::Last);
				Constants::Evidences->Add(Constants::Mu);
				Constants::Evidences->Add(Laws::Third);
			}
		}
	}
}