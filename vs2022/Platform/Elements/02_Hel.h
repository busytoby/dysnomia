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
					Affinity^ Beta = gcnew Affinity();
					Add(gcnew Hadron(Beta->Rod), Beta->Cone);
					Mu->I->R->Epsilon = Beta->Cone->Tau;
					this->Epsilon = Mu->I->Epsilon;
				}

				Hel(Affinity^ Beta) {
					Add(gcnew Hadron(Beta->Rod), Beta->Cone);
					Mu->I->R->Epsilon = Beta->Cone->Tau;
					this->Epsilon = Mu->I->Epsilon;
				}
			};
		}
	}
}