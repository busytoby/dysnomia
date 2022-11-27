#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Ion
	{
	public:
		BigInteger Ligand;
		Affinity^ M;

		Ion();
		BigInteger Form();
		void Adduct(BigInteger);
	};
}
