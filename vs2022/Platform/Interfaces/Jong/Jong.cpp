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

				Phosphorous^ Rho = gcnew Phosphorous(
					Mu->Upsilon,
					Dysnomia::Platform::Wou::Laws::Sixth,
					Dysnomia::Platform::Wou::Constants::Upsilon,
					Dysnomia::Platform::Wou::Laws::Fourth,
					Dysnomia::Platform::Wou::Constants::Sigma);
				Constants::Evidences->Add(Rho->Mu.Value->Evidence);
				Constants::Evidences->Add(Constants::Psi);
				Constants::Evidences->Add(Laws::Fifth);
				Constants::Evidences->Add(Mu->Upsilon->Testify(Constants::Last));
				Constants::Evidences->Add(Rho->Rho.Key->R->L->Secret);
				Constants::Evidences->Add(Mu->Upsilon->Testify(Rho->Rho.Key->R->L->Secret));
				Constants::Evidences->Add(Laws::Seventh);

				Calcium^ Psi = gcnew Calcium(Rho);
				Constants::Evidences->Add(Laws::Eighth);
				Constants::Evidences->Add(Laws::Tenth);

				Scandium^ Nu = gcnew Scandium(Psi->Mu.Value);
				Titanium^ Eta = gcnew Titanium(Psi, Nu);
 			}

			Aether^ Jong::Zheng() {
				return gcnew Aether();
			}
		}
	}
}