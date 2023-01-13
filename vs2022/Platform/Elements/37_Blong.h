#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Blong : public Quark<Meow^, Woof^, Nickel^>
			{
			public:
				static Quark<Woof^, Meow^, Nickel^>^ Cressida;

				Blong(Meow^ Mu, Woof^ Rho, Nickel^ Psi) : Quark(Mu, Rho, Psi) {
					if (Cressida == nullptr) Cressida = gcnew Quark<Woof^, Meow^, Nickel^>(Rho, Mu, Psi);
				};
			};
		}
	}
}