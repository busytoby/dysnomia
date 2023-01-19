#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	generic <typename T1, typename T2>
	public ref class RightShift : public List<T2> {
	public:
		RightShift(LinkedList<KeyValuePair<T1, T2>>^ In) {
			LinkedListNode<KeyValuePair<T1, T2>>^ INode = In->First;
			for (int j = 0; j < In->Count; j++)
			{
				Add(INode->Value.Value);
				INode = INode->Next;
			}
		}
	};

	generic <typename T1, typename T2>
	public ref class LeftShift : public List<T1> {
	public:
		LeftShift(LinkedList<KeyValuePair<T1, T2>>^ In) {
			LinkedListNode<KeyValuePair<T1, T2>>^ INode = In->First;
			for (int j = 0; j < In->Count; j++)
			{
				Add(INode->Value.Key);
				INode = INode->Next;
			}
		}
	};

	generic <typename T>
	public ref class Shift : public List<T> {
	public:
		Shift(LinkedList<KeyValuePair<Int64, T>>^ In) {
			for each(T V in RightShift<Int64, T>(In)) {
				Add(V);
			}
		}
	};
}
