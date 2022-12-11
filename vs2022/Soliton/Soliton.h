#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Soliton
	{
	private:
		static Quaternion^ Sigma;

	public:
		Quark^ Q;
		LinkedList<KeyValuePair<BigInteger, Octonion^>>^ T;

		Soliton(Quaternion^, Spinor^, Octonion^);
	};
}
