#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Salt
	{
	public:
		LinkedList<Int16>^ Li;
		LinkedListNode<Int16>^ Ti;
		
		Salt();
		Salt(LinkedList<Int16>^);

		LinkedListNode<Int16>^ RemoveAndAdvance(LinkedListNode<Int16>^); // unused, needs rename
	};
}
