#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Perception
	{
	private:
		Affinity Norbornylene;
		Situation^ N; // Norcamphene
		Orbital S;

	public:
		Perception();
		Perception(Situation^, BigInteger, BigInteger, BigInteger);
		Situation^ Bridge(Situation^, BigInteger);
		void Avail(Situation^, BigInteger, BigInteger);
	};
}
