#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Silicon : public Quark<Nitrogen^, Oxygen^, Boron^>
			{
			public:
				Silicon(Nitrogen^ Z, Oxygen^ Y, Boron^ X) : Quark(Z, Y, X) { };
			};
		}
	}
}
