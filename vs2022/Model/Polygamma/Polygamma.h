#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Polygamma : LinkedList<KeyValuePair<BigInteger, Quaternion^>>
	{
	private:
		void CapSpinor(Ion^, Ion^, Ion^);

	public:
		Polygamma(Orbital^, Orbital^);
		Polygamma(Quaternion^);
		void Add(Orbital^);
		void Add(Quaternion^);
	};
}
