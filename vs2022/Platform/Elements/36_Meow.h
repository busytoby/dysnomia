#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Meow : public Dai<Woof^, Sulfur^>
			{
			public:
				Copper^ Beta;
				Cobalt^ Omicron;
				Arsenic^ Alpha;

				Meow(Copper^ Lambda, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Xi) {
					Beta = Lambda;
					Cobalt^ Omicron = gcnew Cobalt(Beta->Mu.Value->Mu.Key->Beta);
					Arsenic^ Alpha = gcnew Arsenic(Omicron, Rho, Upsilon, Ohm, Xi);
					Woof^ Omega = gcnew Woof(Alpha, Beta);
					Add(Omega, Omicron->Phi->N->Mu.Key);
				}
			};
		}
	}
}