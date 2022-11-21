#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Orbital
	{
	public:
		BigInteger Ligand;
		Dynamic Boson;
		BigInteger Coordinate;
		Ion^ R;
		Ion^ L;
		Ion^ N;

		Valence^ Ring(BigInteger, BigInteger);
	};
}
