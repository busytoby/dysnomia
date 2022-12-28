#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Ion : public Affinity
	{
	public:
		BigInteger Nu;

		Ion() : Affinity() {};
		Ion(Affinity^ A) : Affinity(A->Rod, A->Cone) {};
		BigInteger Form();
		void Adduct(BigInteger);
	};
}
