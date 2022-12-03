#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class OrbitalException : public Exception {
	public:
		int Code;
		String^ Description;

		OrbitalException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Orbital
	{
	public:
		BigInteger Rho, Nu, Eta, Sigma;
		Dynamic^ N;
		Ion^ R;
		Ion^ Y;
		Ion^ L;

		Orbital();
		Orbital(Affinity^);
		void Bridge(BigInteger);
		BigInteger Conjugate(BigInteger%);
		void Saturate(BigInteger, BigInteger);
	};

	public ref class Joule : Orbital {
	public:
		Joule(Dynamic^, LinkedList<KeyValuePair<BigInteger, Dynamic^>>^);
	};
}
