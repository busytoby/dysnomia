#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
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
