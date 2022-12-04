#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Polygamma
	{
	public:
		LinkedList<KeyValuePair<BigInteger, Dynamic^>>^ P;
		LinkedList<KeyValuePair<BigInteger, Quaternion^>>^ M;

		Polygamma();
	};
}
