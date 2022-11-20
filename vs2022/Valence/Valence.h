#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Valence
	{
	public:
		BigInteger R; // Foundation
		BigInteger T; // Element
		BigInteger P; // Dynamo
		BigInteger Y; // Manifold
		BigInteger O; // Ring
		BigInteger E; // Barn

		BigInteger X; // Gravital Prime

/*
Ordered Pairs:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn;
*/

		Valence();
	};
}
