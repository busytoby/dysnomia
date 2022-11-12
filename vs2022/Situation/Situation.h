#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Situation
	{
	private:
		Affinity Norcamphene;

	public:
		Orbital S;
		Ion^ I;

		Situation();
		Situation::Situation(const Situation%);

		BigInteger Avail(BigInteger);
		BigInteger Form(BigInteger);
		BigInteger Conjugate(BigInteger);
		void Saturate(BigInteger, BigInteger);
		void Manifest(BigInteger);
		BigInteger Foil(BigInteger, BigInteger);
	};
}
