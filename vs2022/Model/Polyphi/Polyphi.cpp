#include "pch.h"

#include "Polyphi.h"

namespace Dysnomia {
	void Polyphi::AddLast(Tensor^ T, Octonion^ O) {
		AddLast(KeyValuePair<Tensor^, Octonion^>(T, O));
	}
}
