#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lithium : public Tuple<Dynamic^, Dynamic^, Dynamic^> { 
			public:
				Lithium(Dynamic^ A, Dynamic^ B, Dynamic^ C) : Tuple(A, B, C) {};
			};
		}
	}
}
