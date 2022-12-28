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
		Polynu^ Qi;

		Polyphi^ Tsi;

		Soliton(Quaternion^, Quark^, Quaternion^);
		void Add(Spinor^, Polygamma^);
		void Add(Spinor^, Quark^, Polygamma^);
	};
}
