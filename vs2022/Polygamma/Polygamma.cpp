#include "pch.h"

#include "Polygamma.h"

using namespace System::Globalization;

namespace Dysnomia {
	Polygamma::Polygamma() {
		P = gcnew LinkedList<KeyValuePair<BigInteger, Dynamic^>>();
		M = gcnew LinkedList<KeyValuePair<BigInteger, Quaternion^>>();
	}
}