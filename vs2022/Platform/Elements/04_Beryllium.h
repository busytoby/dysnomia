#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Beryllium : public Affinity { 
			public:
				Lithium^ Phi;
				Helium^ Sigma;

				Beryllium() : Affinity() {
					Phi = gcnew Lithium(gcnew Hydrogen(), Cone, Rod);
					Sigma = gcnew Helium(this);
				}
				
				Beryllium(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Xi) : Affinity(Rho, Upsilon, Ohm, Xi) {
					Phi = gcnew Lithium(gcnew Hydrogen(), Cone, Rod);
				}
			};
		}
	}
}
