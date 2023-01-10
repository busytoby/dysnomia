#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Helium : public Affinity {
			public:
				static Affinity^ Gamma;

				Helium() {
					this->Rod = Gamma->Rod;
					this->Cone = Gamma->Cone;
					this->Epsilon = Gamma->Epsilon;
				}

				Helium(Affinity^ Sigma) {
					if (Gamma == nullptr) Gamma = Sigma;
					Helium::Helium();
				};
			};
		}
	}
}