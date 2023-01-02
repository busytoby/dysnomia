#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Boron : public Quark<Dynamic^>	{ 
			public:
				Boron(Dynamic^ N, Dynamic^ R, Dynamic^ L) : Quark<Dynamic^>(N, R, L) {};
			};
		}
	}
}
