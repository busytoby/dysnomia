#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Qiao : public Dai<Woof^, Blong^>
			{
			public:
				static Quark<Chlorine^, Woof^, Meow^>^ Pallene;
				static Dai<Woof^, Blong^>^ Methone;
				static Dai<Blong^, Meow^>^ Epimetheus;
				static Dai<Blong^, Argon^>^ Stephano;
				static Dai<Argon^, Blong^>^ Margaret;

				Nickel^ Chi;

				Qiao(Woof^ Mu, Blong^ Rho) {
					Add(Mu, Rho);
					if (Pallene == nullptr) Pallene = gcnew Quark<Chlorine^, Woof^, Meow^>(Mu->Tau, Mu, Rho->N);
					if (Methone == nullptr) Methone = this;
					if (Epimetheus == nullptr) Epimetheus = gcnew Dai<Blong^, Meow^>();
					Epimetheus->Add(Rho, Rho->N);
					if (Stephano == nullptr) Stephano = gcnew Dai<Blong^, Argon^>();
					Stephano->Add(Rho, Mu->Zeta);
					if (Margaret == nullptr) Margaret = gcnew Dai<Argon^, Blong^>();
					Margaret->Add(Mu->Zeta, Rho);

					Chi = Mu->Beta->Delta();

					for (int i = 0; i < Mu->Pi->Count; i++)
						Rho->R->Beta->Delta(Mu->Pi[i].Value, Chi);
				}
			};
		}
	}
}