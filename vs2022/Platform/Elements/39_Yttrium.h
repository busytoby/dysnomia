#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Yttrium : Edge<Blong^, Qiao^, Meow^>
			{
			public:
				static Edge<Qiao^, Blong^, Meow^>^ Portia;
				static Edge<Blong^, Meow^, Qiao^>^ Bestla;
				static Edge<Meow^, Qiao^, Blong^>^ Trinculo;
				static Dai<Qiao^, Blong^>^ Perdita;
				Yttrium(Blong^ Nu, Qiao^ Rho, Meow^ Psi) : Edge(Nu, Rho, Psi) {
					if (Perdita == nullptr) Perdita = gcnew Dai<Qiao^, Blong^>();
					Perdita->Add(Rho, Nu);
					if (Portia == nullptr) Portia = gcnew Edge<Qiao^, Blong^, Meow^>(Rho, Nu, Psi);
					if (Bestla == nullptr) Bestla = gcnew Edge<Blong^, Meow^, Qiao^>(Nu, Psi, Rho);
					if (Trinculo == nullptr) Trinculo = gcnew Edge<Meow^, Qiao^, Blong^>(Psi, Rho, Nu);
				};

				Int64 Gamma() {
					return Math::ModPow(
						N->N->Mu.Key->Mu.Key->N->N->N->N->Mu.Value->Mu.Value->Xi,
						R->Mu.Value->L->Mu.Value->Mu.Value->L->Mu.Value->Xi,
						L->Mu.Value->R->Mu.Key->L->Mu.Key->Pi->N->Rod->Element);
				}
			};
		}
	}
}