#include "pch.h"

#include "Octonion.h"

namespace Dysnomia {
	Octonion::Octonion(Affinity^ L, Affinity^ R) {
		if (Phi != nullptr) throw gcnew OctonionException(1, "Phi Already");
		Phi = gcnew Orbital(R, L);
	}

	void Octonion::Xi(Quark^ Qi) {
		if (Psi != nullptr) throw gcnew OctonionException(1, "Psi Already");
		Psi = Qi;
	}
}