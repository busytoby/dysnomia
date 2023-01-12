#include "pch.h"

#include "Tian.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Tian;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Tian::Tian() {
				Mu = gcnew Jong();
				Cobalt^ Rho = gcnew Cobalt(Mu->Tau);
				Constants::Evidences->Add(Constants::Mu);
				Nickel^ Psi = gcnew Nickel(Mu->Zheng(), Mu->Theta);
				Copper^ Nu = gcnew Copper(Psi);
				Constants::Evidences->Add(Laws::Second);

				Nickel^ Eta = Nu->Delta();
				Constants::Evidences->Add(Constants::Psi);
				Zinc^ Sigma = gcnew Zinc(Nu, Eta);
				Constants::Evidences->Add(Constants::Nu);
				Constants::Evidences->Add(Constants::Upsilon);
				Constants::Evidences->Add(Laws::Fifth);

				Gallium^ Upsilon = gcnew Gallium(Sigma);
				Germanium^ Tau = gcnew Germanium(Sigma);
			}
		}
	}
}