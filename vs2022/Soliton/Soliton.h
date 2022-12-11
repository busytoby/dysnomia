#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Soliton
	{
	public:
		LinkedList<KeyValuePair<BigInteger, Octonion^>>^ T;
	};
}
