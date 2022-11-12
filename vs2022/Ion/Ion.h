#pragma once
using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Ion
	{
	public:
		Metal V;
		array<Metal^>^ M;
		Dynamic^ P;

		Ion();
		Ion(Dynamic);
		void Avail(BigInteger);
		BigInteger Hydrate();
		BigInteger Hydrate(BigInteger);
	};
}
