#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Coronium : public Quark<Magnesium^, Nitrogen^, Fluorine^>
			{
			public:
				static Quark<Magnesium^, Nitrogen^, Fluorine^>^ Halimede;
				Coronium(Magnesium^ Mu, Nitrogen^ Rho, Fluorine^ Psi) : Quark(Mu, Rho, Psi) { 
					if (Halimede == nullptr) Halimede = this;
				}
			};
		}
	}
}