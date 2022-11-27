#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Orbital
	{
	public:
		BigInteger Ligand;
		Dynamic^ N;
		Ion^ R;
		Ion^ Y;
		Ion^ L;

		Orbital();
		void Bridge(BigInteger Carbenium);
		BigInteger Conjugate(BigInteger%);
		void Saturate(BigInteger, BigInteger);
	};
}
