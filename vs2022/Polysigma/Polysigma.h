#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Polysigma
	{
	private:

	public:
		LinkedList<KeyValuePair<BigInteger, Quark^>>^ T;

	};
}
