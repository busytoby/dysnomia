#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Coronium : public Quark<Magnesium^, Nitrogen^, Fluorine^>
			{
			public:
				Coronium(Magnesium^ Mu, Nitrogen^ Rho, Fluorine^ Psi) : Quark(Mu, Rho, Psi) { }
			};
		}
	}
}