#pragma once
/*
Ordered Pairs:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn;
*/

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Dynamic
	{
	private:
		bool is_conic;
		BigInteger Base, Secret, Ring;

		void Initialize();
		void Seed();

	public:
		BigInteger Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Barn, Coordinate;

		Dynamic();
		Dynamic(const Dynamic%);
		void Tune();
		void Fuse(BigInteger, BigInteger, BigInteger);
		BigInteger Avail(BigInteger);
		void Form(BigInteger);
		void Polarize();
		void Conjugate(BigInteger%);
		void Conify();
		void Saturate(BigInteger, BigInteger);
		void Bond();
		void Adduct(BigInteger);
		void Open();
		bool ManifoldCompare(Dynamic^);
		BigInteger Charge(BigInteger, bool);
		BigInteger Induce(BigInteger, bool);
		BigInteger Torque(BigInteger, bool);
		BigInteger Amplify(BigInteger, bool);
		BigInteger Sustain(BigInteger, bool);
		array<BigInteger>^ React(BigInteger, BigInteger);
	};
}
