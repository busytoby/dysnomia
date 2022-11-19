#pragma once
using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	class Perception;

	public ref class Ion
	{
	public:
		Valence V;
		Dynamic^ P;
		Perception* E;

		Ion();
		Ion(Dynamic);
		void Avail(BigInteger);
		BigInteger Hydrate();
		BigInteger Hydrate(BigInteger);
	};
}
