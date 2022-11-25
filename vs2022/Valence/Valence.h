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

		LinkedList<Int16>^ R; // Azimuth
		LinkedList<Int16>^ H;
		LinkedListNode<Int16>^ L;

		Valence();
		Valence(const Valence%);
		void Push();
		void Pull(Valence%);
		void Pull(BigInteger);
		void Denature();
	};
}
