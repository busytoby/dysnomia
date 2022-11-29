#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Orbital
	{
	public:
		BigInteger Rho, Nu, Eta;
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
}
