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
		Spinor^ Mu;

		LinkedList<KeyValuePair<BigInteger, Spinor^>>^ XL;
		LinkedList<KeyValuePair<BigInteger, Spinor^>>^ YL;

		LinkedList<KeyValuePair<BigInteger, Octonion^>>^ V;

		Soliton(Quaternion^, Quark^, Quaternion^);
		void Add(Spinor^);
		void Add(Spinor^, Quark^);
	};
}
