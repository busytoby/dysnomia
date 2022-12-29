#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			static public ref class Fluorine : public Dictionary<String^, BigInteger>
			{
			public:
				Fluorine() : Dictionary<String^, BigInteger>() {};
			};
		}
	}
}
