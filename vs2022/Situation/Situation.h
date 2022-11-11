#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Situation
	{
	private:
		Affinity Norcamphene;
		Bond B;

	public:
		Orbital S;

		Situation();
		Situation::Situation(const Situation%);

		BigInteger Avail(BigInteger);
		BigInteger Form(BigInteger);
		BigInteger LockPole(BigInteger);
		void EstablishElement(BigInteger, BigInteger);
		void Manifest(BigInteger);

	};
}
