#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class QuaternionException : public Exception {
	public:
		int Code;
		String^ Description;

		QuaternionException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Quaternion
	{
	public:
		BigInteger Epsilon;

		Affinity^ Gamma;
		Affinity^ Nu;
		Affinity^ Phi;
		Affinity^ Rho;
		Affinity^ Sigma;
	};
}
