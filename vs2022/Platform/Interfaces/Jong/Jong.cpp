#include "pch.h"
#include "Constants.h"
#include "Laws.h"
#include "Jong.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Jong;


namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Jong::Jong() {
				Mu = gcnew Wou();
				Constants::Evidences->Add(Dysnomia::Platform::Wou::Constants::Theta);

				Silicon^ Rho = gcnew Silicon(
					Mu->Upsilon,
					Dysnomia::Platform::Wou::Laws::Sixth,
					Dysnomia::Platform::Wou::Constants::Upsilon,
					Dysnomia::Platform::Wou::Laws::Fourth,
					Dysnomia::Platform::Wou::Constants::Sigma);
				Constants::Evidences->Add(Rho->Evidence);
				Constants::Evidences->Add(Constants::Psi);
				Constants::Evidences->Add(Laws::Fifth);
				Constants::Evidences->Add(Mu->Upsilon->Testify(Constants::Last));

				//Phosphorous^ Psi = gcnew Phosphorous();
			}
		}
	}
}