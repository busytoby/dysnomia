#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Orbital
	{
	public:
		Orbital^ Parent;
		BigInteger Ligand;
		Dynamic^ Boson;
		BigInteger Coordinate;
		Ion^ R;
		Ion^ L;
		Ion^ N;
		LinkedList<Orbital^>^ D;

		Orbital();
		Orbital(Dynamic);
		void Ring(BigInteger);
		void Ring(BigInteger, BigInteger);
		void Pull();
		void Push();
		void Plumb();
		LinkedList<Int16>^ Blast();
		void Swim(LinkedList<Orbital^>^);
		void DetectCollision();
		void Vent();
		void Fly(LinkedList<Int16>^%, LinkedList<Int16>^%);
	};
}
