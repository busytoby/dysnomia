#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Yttrium : Quark<Blong^, Qiao^, Meow^>
			{
			public:
				static Dai<Qiao^, Blong^>^ Perdita;
				Yttrium(Blong^ Nu, Qiao^ Rho, Meow^ Psi) : Quark(Nu, Rho, Psi) {
					if (Perdita == nullptr) Perdita = gcnew Dai<Qiao^, Blong^>();
					Perdita->Add(Rho, Nu);
				};
			};
		}
	}
}