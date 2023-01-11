#include "pch.h"

#include "Tian.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Jong;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Tian::Tian() {
				Mu = gcnew Jong();
				Cobolt^ Rho = gcnew Cobolt(Mu->Tau);
			}
		}
	}
}