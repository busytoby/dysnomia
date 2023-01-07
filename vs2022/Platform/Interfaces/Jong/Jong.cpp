#include "pch.h"
#include "Constants.h"
#include "Jong.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Jong;


namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Jong::Jong() {
				Mu = gcnew Wou();
				Constants::Evidences->Add(Dysnomia::Platform::Wou::Constants::Theta);

				Carbon^ Rho = gcnew Carbon(
					Dysnomia::Platform::Wou::Laws::Sixth,
					Dysnomia::Platform::Wou::Constants::Upsilon,
					Dysnomia::Platform::Wou::Laws::Fourth,
					Dysnomia::Platform::Wou::Constants::Sigma);
				Fluorine^ Psi = gcnew Fluorine(Rho);

				Silicon^ Nu = gcnew Silicon(Mu->Upsilon, Rho, Psi);
				Constants::Evidences->Add(Nu->Evidence);
			}
		}
	}
}