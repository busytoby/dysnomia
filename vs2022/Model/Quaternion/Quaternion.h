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

	public ref class Quaternion : public Spin<Affinity^>
	{
	public:
		BigInteger Epsilon;
	};
}
