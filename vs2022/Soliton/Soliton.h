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
		Octonion^ X;
		Octonion^ Y;
		LinkedList<KeyValuePair<BigInteger, Spinor^>>^ XL;
		LinkedList<KeyValuePair<BigInteger, Spinor^>>^ YL;

		Soliton(Quaternion^, Quark^, Quaternion^);
	};

	generic <typename T>
	public ref class Shift : public List<T> {
	public:
		Shift(LinkedList<KeyValuePair<BigInteger, T>>^ In) {
			LinkedListNode<KeyValuePair<BigInteger, T>>^ INode = In->First;
			for (int j = 0; j < In->Count; j++)
			{
				this->Add(INode->Value.Value);
				INode = INode->Next;
			}
		}
	};
}
