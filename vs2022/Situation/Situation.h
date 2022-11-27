#pragma once
#define LEFT 0
#define RIGHT 1

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Situation
	{
	private:
		Affinity Norcamphene;
		int GrowthFactor = 0;

	public:
		Orbital S;

		Situation();
		BigInteger Avail(BigInteger);

		BigInteger Foil(BigInteger, BigInteger);

		//void Pull();
		/*
		bool Ln2();
		void Push(LinkedListNode<char>^);
		int EndAdjacencyCount(LinkedList<char>^, int);
		*/
	};
}
