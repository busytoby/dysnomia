#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

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

	generic <typename T> where T : Epsilon
		public ref class Quark : Epsilon {
	public:
		T R;
		T N;
		T L;

		Quark(T, T, T);
	};
}
