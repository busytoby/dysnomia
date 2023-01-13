#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Yttrium : Quark<Blong^, Qiao^, Meow^>
			{
			public:
				static Quark<Qiao^, Blong^, Meow^>^ Portia;
				static Quark<Blong^, Meow^, Qiao^>^ Bestla;
				static Quark<Meow^, Qiao^, Blong^>^ Trinculo;
				static Dai<Qiao^, Blong^>^ Perdita;
				Yttrium(Blong^ Nu, Qiao^ Rho, Meow^ Psi) : Quark(Nu, Rho, Psi) {
					if (Perdita == nullptr) Perdita = gcnew Dai<Qiao^, Blong^>();
					Perdita->Add(Rho, Nu);
					if (Portia == nullptr) Portia = gcnew Quark<Qiao^, Blong^, Meow^>(Rho, Nu, Psi);
					if (Bestla == nullptr) Bestla = gcnew Quark<Blong^, Meow^, Qiao^>(Rho, Psi, Nu);
					if (Trinculo == nullptr) Trinculo = gcnew Quark<Meow^, Qiao^, Blong^>(Psi, Rho, Nu);
				};
			};
		}
	}
}