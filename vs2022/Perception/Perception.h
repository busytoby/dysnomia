#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Perception
	{
	private:
		Affinity Norbornylene;
		Ion^ N; // Norcamphene
		Orbital S;

	public:
		Perception();
		Perception(Ion^, BigInteger, BigInteger, BigInteger);
		void Bridge(Ion^, BigInteger);
		void Avail(Ion^, BigInteger, BigInteger);
	};
}
