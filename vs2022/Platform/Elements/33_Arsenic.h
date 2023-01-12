#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Arsenic : public Dai<Manganese^, Cobalt^>{
			public:
				Arsenic(Cobalt^ Rho) {
					Chromium^ Eta = gcnew Chromium(Rho->Mu.Key);
					Manganese^ Sigma = gcnew Manganese(Eta);
					Add(Sigma, Rho);
				}
			};
		}
	}
}
