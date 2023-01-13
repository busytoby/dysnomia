#include "pch.h"

#include "Xun.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Xun;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Xun::Xun() {
				Mu = gcnew Tian();

				Meow^ Rho = gcnew Meow(
					Mu->Nu, 
					Dysnomia::Platform::Tian::Laws::Third, 
					Dysnomia::Platform::Wou::Laws::Seventh, 
					Dysnomia::Platform::Jong::Laws::Tenth, 
					Dysnomia::Platform::Tian::Laws::Fifth);
				Constants::Evidences->Add(Constants::Mu);
				Constants::Evidences->Add(Laws::Third);
				Constants::Evidences->Add(Constants::Eta);

				Blong^ Psi = gcnew Blong(Rho, Rho->Mu.Key, Rho->Mu.Key->Pi);
				Qiao^ Nu = gcnew Qiao(Rho->Mu.Key, Psi);
				Yttrium^ Eta = gcnew Yttrium(Psi, Nu, Rho);
				Constants::Evidences->Add(Constants::Sigma);
			}
		}
	}
}