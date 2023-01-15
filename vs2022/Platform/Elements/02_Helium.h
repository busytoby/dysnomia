#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Helium : public Dai<Hydrogen^, Hydrogen^> {
			public:
				Helium() {
					Affinity^ Alpha = gcnew Affinity();
					Add(gcnew Hydrogen(Alpha->Rod), gcnew Hydrogen(Alpha->Cone));
					this->Epsilon = Mu->I->Epsilon;
				}
			};
		}
	}
}