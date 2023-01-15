#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hel : public Dai<Hydrogen^, Dynamic^> {
			public:
				Hel() {
					Affinity^ Alpha = gcnew Affinity();
					Add(gcnew Hydrogen(Alpha->Rod), Alpha->Cone);
					Mu->I->L->Epsilon = Alpha->Cone->Tau;
					this->Epsilon = Mu->I->Epsilon;
				}
			};
		}
	}
}