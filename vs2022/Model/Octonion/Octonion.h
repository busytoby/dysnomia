#pragma once

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

	public ref class Prion : public Spin<BigInteger> {
	};

	public ref class Octonion {
	public:
		Ion^ L;
		Ion^ R;
		Prion^ Omega;
		Quark^ Psi;

		Octonion(Affinity^);
		Octonion(Affinity^, Affinity^);
		void Omicron();
		void Xi(Quark^);
	};
}