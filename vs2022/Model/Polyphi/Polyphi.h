#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Polyphi : public LinkedList<KeyValuePair<Tensor^, Octonion^>>
	{
	public:
		property Tensor^ TailTensor {Tensor^ get() { return First->Value.Key; }};
		property Tensor^ HeadTensor {Tensor^ get() { return Last->Value.Key; }};
		property Octonion^ Tail {Octonion^ get() { return First->Value.Value; }};
		property Octonion^ Head {Octonion^ get() { return Last->Value.Value; }};

		void AddLast(Tensor^, Octonion^);
	};
}
