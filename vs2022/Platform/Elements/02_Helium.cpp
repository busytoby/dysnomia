#include "pch.h"

#include "02_Helium.h"
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			Helium::Helium() {
				Neon = gcnew Dysnomia::Platform::Elements::Neon();
				Neon->Add(0, this);

				Actinium = gcnew Dysnomia::Platform::Elements::Actinium();
			}
		}
	}
}