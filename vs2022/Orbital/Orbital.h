#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Orbital
	{
	public:
		BigInteger Ligand;
		Dynamic Boson;
		BigInteger Coordinate;
		Ion^ R;
		Ion^ L;
		Ion^ N;
		LinkedList<Salt^>^ M;
		LinkedListNode<LinkedList<Int16>^>^ As; // Focus

		void Ring(BigInteger);
		void Ring(BigInteger, BigInteger);
		void Pull();
		void DetectCollision();
		void Vent();
		void Fly(LinkedList<Int16>^, LinkedList<Int16>^);
	};
}
