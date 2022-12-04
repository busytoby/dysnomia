#pragma once

using namespace System;

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
		Affinity^ Rho;
		Affinity^ Nu;
		Affinity^ Phi;
		Affinity^ Eta;
		Affinity^ Sigma;
	};
}
