#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Orbital
	{
	public:
		BigInteger Ligand;
		Dynamic^ N;
		BigInteger Coordinate;
		Ion^ R;
		Ion^ Y;
		Ion^ L;
		//LinkedList<Orbital^>^ D;

		Orbital();
		Orbital(Dynamic);
		void Ring(BigInteger);
		void Ring(BigInteger, BigInteger);
		void Pull();
		void Push();
		void Plumb();
		void DetectCollision();
		void Vent();
	};
}
