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
		BigInteger Base, Secret, Signal, Identity, Ring;

		void Initialize();
		void Seed();
		void Tune();

	public:
		BigInteger Channel, Pole, Foundation, Element, Dynamo, Manifold, Barn;

		Dynamic();
		Dynamic(const Dynamic% Copier);
		BigInteger Avail(BigInteger);
		void Form(BigInteger);
		void Polarize();
		BigInteger GetCarrier(BigInteger);
		void Conify();
		void EstablishElement(BigInteger, BigInteger);
		void SyncDynamo();
		void Manifest(BigInteger);
		void Open(BigInteger);
		bool ManifoldCompare(Dynamic);
		BigInteger Charge(BigInteger, bool);
		BigInteger Induce(BigInteger Ampere, bool);
		BigInteger Torque(BigInteger Henry, bool);
		BigInteger Amplify(BigInteger Newton, bool);
		BigInteger Sustain(BigInteger Maxwell, bool);
		array<BigInteger>^ React(BigInteger Fermat, BigInteger peerChannel);
	};
}
