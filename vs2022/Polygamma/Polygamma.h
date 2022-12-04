#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Polygamma
	{
	public:
		LinkedList<KeyValuePair<BigInteger, Quaternion^>>^ M;

		Polygamma(Orbital^, Orbital^);
		void Add(Orbital^);
	};
}
