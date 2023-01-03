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

	generic <typename T1, typename T2, typename T3> 
	where T1 : Epsilon 
	where T2 : Epsilon 
	where T3 : Epsilon
		public ref class Quark : Epsilon {
	public:
		T1 N;
		T2 R;
		T3 L;

		Quark(T1, T2, T3);
	};
}
