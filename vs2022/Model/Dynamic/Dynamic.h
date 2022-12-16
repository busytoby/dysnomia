#pragma once
/*
Ordered Pairs:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn;
*/

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class DynamicException : public Exception {
	public:
		int Code;
		String^ Description;

		DynamicException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Dynamic
	{
	private:
		BigInteger Secret, Ring;

		void Initialize();
		void Seed();

	public:
		BigInteger Base, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Barn, Coordinate;
		BigInteger Tau, Mu, Eta, Nu, Rho, Alpha;
		LinkedList<KeyValuePair<BigInteger, Dynamic^>>^ R;

		Dynamic();
		Dynamic(const Dynamic%);
		void Tune();
		void Fuse(BigInteger, BigInteger, BigInteger);
		BigInteger Avail(BigInteger);
		void Form(BigInteger);
		void Polarize();
		void Conjugate(BigInteger%);
		void Conify();
		BigInteger Saturate(BigInteger, BigInteger);
		void Bond();
		void Adduct(BigInteger);
		void Open();
		bool ManifoldCompare(Dynamic^);
		BigInteger Charge(BigInteger, bool);
		BigInteger Induce(BigInteger, bool);
		BigInteger Torque(BigInteger, bool);
		BigInteger Amplify(BigInteger, bool);
		BigInteger Sustain(BigInteger, bool);
		void React(BigInteger, BigInteger);
	};
}