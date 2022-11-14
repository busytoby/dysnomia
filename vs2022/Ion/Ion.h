#pragma once
using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Ion
	{
	public:
		Valence V;
		Dynamic^ P;

		Ion();
		Ion(Dynamic);
		void Avail(BigInteger);
		BigInteger Hydrate();
		BigInteger Hydrate(BigInteger);
	};
}
