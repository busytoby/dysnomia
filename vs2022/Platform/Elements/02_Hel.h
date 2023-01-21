#pragma once

using namespace System;
using namespace Dysnomia::Platform::Interfaces;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hel : public Dai<Hadron^, Hadron^> {
			public:
				static Affinity^ MuA;
				Hel() {
					Add(gcnew Hadron(), gcnew Hadron());
					this->Epsilon = Mu->I->Epsilon;
				}

				Hel(Hadron^ Beta) {
					Add(Beta, gcnew Hadron());
					this->Epsilon = Mu->I->Epsilon;
				}

				Hel(Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
					this->Hel::Hel(gcnew Affinity(Rho, Upsilon, Ohm, Xi));
				}

				Hel(Affinity^ Beta) {
					Add(gcnew Hadron(Beta->Rod), gcnew Hadron(Beta->Cone));
					Mu->I->Epsilon = Beta->Cone->Tau;
					this->Epsilon = Mu->I->Epsilon;
					if (MuA == nullptr) MuA = Beta;
				}
			};
		}
	}
}