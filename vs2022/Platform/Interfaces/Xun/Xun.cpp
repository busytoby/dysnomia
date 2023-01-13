#include "pch.h"

#include "Xun.h"

using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Xun;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Xun::Xun() {
				Mu = gcnew Tian();

				Nickel^ Rho = Mu->Nu->Delta();
				Sulfur^ Theta = Mu->Theta->Mu.Key->N->Mu.Key;
				Chlorine^ Tau = gcnew Chlorine(Theta, Rho->Mu.Value);
				Argon^ Sigma = gcnew Argon(Theta, Tau, Rho->Mu.Value);
				Selenium^ Psi = gcnew Selenium(Mu->Theta, Rho, Sigma);
			}
		}
	}
}