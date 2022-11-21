#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Valence
	{
	private:

	public:
		BigInteger Foundation; // Foundation
		BigInteger Element; // Element
		BigInteger Dynamo; // Dynamo
		BigInteger Manifold; // Manifold
		BigInteger Ring; // Ring
		BigInteger Barn; // Barn
		BigInteger Coordinate;
		BigInteger Prime; // Gravital Prime

		LinkedList<char>^ R; // Azimuth
		LinkedList<char>^ H;
		LinkedListNode<LinkedList<char>^>^ I; // Focus

		Valence();
		LinkedList<char>^ Push();
		LinkedList<char>^ Pull(BigInteger);
	};
}
