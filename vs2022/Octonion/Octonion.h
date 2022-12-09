#pragma once
#include "Tensor.h"

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class OctonionException : public Exception {
	public:
		int Code;
		String^ Description;

		OctonionException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Octonion {
	public:
		BigInteger Epsilon;

		Quark^ X;
		Tensor^ L;

		Octonion(Quark^, Tensor^);
	};
}