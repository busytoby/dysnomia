#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hel : public Dai<Hadron^, Dynamic^> {
			public:
				Hel() {
					this->Hel::Hel(gcnew Affinity());
				}

				Hel(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Xi) {
					this->Hel::Hel(gcnew Affinity(Rho, Upsilon, Ohm, Xi));
				}

				Hel(Affinity^ Beta) {
					Add(gcnew Hadron(Beta->Rod), Beta->Cone);
					Mu->I->Epsilon = Beta->Cone->Tau;
					this->Epsilon = Mu->I->Epsilon;
				}
			};
		}
	}
}