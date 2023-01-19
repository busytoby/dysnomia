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
				static Quark<Dynamic^, Dynamic^, Dynamic^>^ ZeroPerspectiveTraction;
				static Affinity^ MuA;
				Hel() {
					this->Hel::Hel(gcnew Affinity());
					if (ZeroPerspectiveHelium == nullptr) ZeroPerspectiveHelium = gcnew Quark<Dynamic^, Dynamic^, Dynamic^>(this[0]->I, this[0]->L, nullptr);
				}

				Hel(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Xi) {
					this->Hel::Hel(gcnew Affinity(Rho, Upsilon, Ohm, Xi));
				}

				Hel(Affinity^ Beta) {
					Add(gcnew Hadron(Beta->Rod), Beta->Cone);
					Mu->I->Epsilon = Beta->Cone->Tau;
					this->Epsilon = Mu->I->Epsilon;
					if (MuA == nullptr) MuA = Beta;
				}
			};
		}
	}
}