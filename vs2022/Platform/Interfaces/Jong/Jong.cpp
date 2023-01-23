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
				Parity^ Rho = gcnew Parity(Mu->Upsilon);
				Ether^ Psi = gcnew Ether(Rho);
				Apse^ Nu = gcnew Apse(Psi->Mu->L);
				Synapse^ Eta = gcnew Synapse(Psi, Nu);
				Eun^ Sigma = gcnew Eun(Eta);

				/*
				Constants::Evidences->Add(Dysnomia::Platform::Wou::Constants::Theta);

				Rho = gcnew Phosphorous(
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

				Psi = gcnew Calcium(Rho);
				Constants::Evidences->Add(Laws::Eighth);

				Nu = gcnew Scandium(Psi->Mu.Value);
				Eta = gcnew Titanium(Psi, Nu);
				Sigma = gcnew Vanadium(Eta);
				Upsilon = gcnew Chromium(Sigma);
				Tau = gcnew Manganese(Upsilon);
				Theta = gcnew Iron(Tau);
				Constants::Evidences->Add(Constants::Theta);
				Constants::Evidences->Add(Laws::Tenth);
				*/
 			}

			/*
			Aether^ Jong::Zheng() {
				return Objects::Psamathe->R->L;
			}
			*/
		}
	}
}