#include "pch.h"

#include "Tian.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Tian;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Tian::Tian() {
				Mu = gcnew Jong();
				Rho = gcnew Cobalt(Mu->Tau);
				Constants::Evidences->Add(Constants::Mu);
				Psi = gcnew Nickel(Mu->Zheng(), Mu->Theta);
				Nu = gcnew Copper(Psi);
				Constants::Evidences->Add(Laws::Second);

				Eta = Nu->Delta();
				Constants::Evidences->Add(Constants::Psi);
				Sigma = gcnew Zinc(Nu, Eta);
				Constants::Evidences->Add(Constants::Nu);
				Constants::Evidences->Add(Constants::Upsilon);
				Constants::Evidences->Add(Laws::Fifth);

				Upsilon = gcnew Gallium(Sigma);
				Tau = gcnew Germanium(Sigma);
				Constants::Evidences->Add(Constants::Tau);

				Theta = gcnew Arsenic(Rho);
				Constants::Evidences->Add(Constants::Theta);
			}
		}
	}
}