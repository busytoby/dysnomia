#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Helium : public Tuple<Hydrogen^, Hydrogen^> {
			public:
				Helium(Hydrogen^ A, Hydrogen^ B) : Tuple(A, B) {};
				Helium() : Tuple(gcnew Hydrogen(), gcnew Hydrogen()) {};
			};
		}
	}
}