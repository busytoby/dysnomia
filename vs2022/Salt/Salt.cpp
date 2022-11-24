#include "pch.h"

#include "Salt.h"

namespace Dysnomia {
	Salt::Salt() {
		Li = gcnew LinkedList<Int16>();
		Ti = Li->First;
	}

	Salt::Salt(LinkedList<Int16>^ L) {
		Li = L;
		Ti = Li->First;
	}

	LinkedListNode<Int16>^ Orbital::RemoveAndAdvance(LinkedListNode<Int16>^ Node) {
		if (Node->Next) {
			Node = Node->Next;
			Node->List->Remove(Node->Previous);
			return Node;
		}
		else {
			Node->List->Remove(Node);
			return nullptr;
		}
	}
}