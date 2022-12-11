#include "pch.h"

#include "Soliton.h"

namespace Dysnomia {
	Soliton::Soliton(Quaternion^ Rho, Spinor^ Mu, Octonion^ Ypsilon) {
		if (Sigma == nullptr) Sigma = Rho;
	}
}