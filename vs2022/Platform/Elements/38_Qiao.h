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

				Qiao(Woof^ Mu, Blong^ Rho) {
					Add(Mu, Rho);
					if (Pallene == nullptr) Pallene = gcnew Quark<Chlorine^, Woof^, Meow^>(Mu->Tau, Mu, Rho->N);
					if (Methone == nullptr) Methone = this;
					if (Epimetheus == nullptr) Epimetheus == gcnew Dai<Blong^, Meow^>();
					Epimetheus->Add(Rho, Rho->N);
				}
			};
		}
	}
}