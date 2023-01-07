#include "pch.h"
#include "Constants.h"
#include "Jong.h"

using namespace Dysnomia::Platform::Jong;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Jong::Jong() {
				Mu = gcnew Wou();
				Constants::Evidences->Add(Dysnomia::Platform::Wou::Constants::Theta);
			}
		}
	}
}