#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Polygamma
	{
	private:
		void CapSpinor(Ion^, Ion^, Ion^);

	public:
		LinkedList<KeyValuePair<BigInteger, Quaternion^>>^ T;

		Polygamma(Orbital^, Orbital^);
		Polygamma(Quaternion^);
		void Add(Orbital^);
		void Add(Quaternion^);
	};
}
