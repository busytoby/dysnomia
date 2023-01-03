#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Helium : public Tuple<Dynamic^, Dynamic^> { 
			public:
				Helium(Dynamic^ A, Dynamic^ B) : Tuple(A, B) {};
				Helium() : Tuple(gcnew Dynamic(), gcnew Dynamic()) {};
			};
		}
	}
}