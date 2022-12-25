#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Polygamma : public LinkedList<KeyValuePair<BigInteger, Quaternion^>>
	{
	private:
		void Kappa(Ion^, Ion^, Ion^);

	public:
		property Quaternion^ Tail {Quaternion^ get() { return First->Value.Value; }};
		property Quaternion^ Head {Quaternion^ get() { return Last->Value.Value; }};

		Polygamma(Orbital^, Orbital^);
		Polygamma(Quaternion^);
		void Add(Orbital^);
		void Add(Quaternion^);
	};
}
