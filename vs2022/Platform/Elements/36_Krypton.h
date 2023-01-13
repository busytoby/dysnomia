#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Krypton : public Dai<Bromine^, Sulfur^>
			{
			public:
				Copper^ Beta;
				Cobalt^ Omicron;
				Arsenic^ Alpha;

				Krypton(Copper^ Lambda, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Xi) {
					Beta = Lambda;
					Cobalt^ Omicron = gcnew Cobalt(Beta->Mu.Value->Mu.Key->Beta);
					Arsenic^ Alpha = gcnew Arsenic(Omicron, Rho, Upsilon, Ohm, Xi);
					Bromine^ Omega = gcnew Bromine(Alpha, Beta);
					Add(Omega, Omicron->Phi->N->Mu.Key);
				}
			};
		}
	}
}