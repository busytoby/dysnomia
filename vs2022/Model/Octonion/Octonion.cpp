#include "pch.h"

#include "Octonion.h"

namespace Dysnomia {
	Octonion::Octonion(Quark^ Y, Tensor^ T) {
		X = Y;
		L = T;
		Epsilon = X->L->Epsilon;
	}
}