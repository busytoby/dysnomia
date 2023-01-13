#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Blong : public Quark<Meow^, Woof^, Nickel^>
			{
			public:
				Blong(Meow^ Mu, Woof^ Rho, Nickel^ Psi) : Quark(Mu, Rho, Psi) {};
			};
		}
	}
}