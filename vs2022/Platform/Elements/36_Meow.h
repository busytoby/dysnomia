#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Meow : public Dai<Woof^, Sulfur^>
			{
			public:
				static Edge<Arsenic^, Woof^, Meow^>^ Earth;
				static Dai<Cobalt^, Sulfur^>^ Mimas;
				Copper^ Beta;
				Cobalt^ Omicron;
				Arsenic^ Alpha;

				Meow(Copper^ Lambda, Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
					Beta = Lambda;
					Cobalt^ Omicron = gcnew Cobalt(Beta->Mu.Value->Mu.Key->Beta);
					Arsenic^ Alpha = gcnew Arsenic(Omicron, Rho, Upsilon, Ohm, Xi);
					Woof^ Omega = gcnew Woof(Alpha, Beta);
					Add(Omega, Omicron->Phi->N->Mu.Key);
					if (Mimas == nullptr) Mimas = gcnew Dai<Cobalt^, Sulfur^>();
					if (Earth == nullptr) Earth = gcnew Edge<Arsenic^, Woof^, Meow^>(Alpha, Omega, this);
					Mimas->Add(Omicron, Omicron->Phi->N->Mu.Key);
				}
			};
		}
	}
}