#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class QuarkException : public Exception {
	public:
		int Code;
		String^ Description;

		QuarkException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Quark
	{
	public:
		BigInteger Epsilon;

		Quaternion^ R;
		Quaternion^ N;
		Quaternion^ L;

		Quark(Quaternion^, Quaternion^, Quaternion^);
	};
}
