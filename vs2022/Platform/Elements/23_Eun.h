#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Eun : public Dai<Ether^, Apse^> {
			public:
				static Eun^ Jupiter;

				Eun(Synapse^ Beta) {
					Add(Beta->I, Beta->N);
					if (Jupiter == nullptr) Jupiter = this;				

					Aluminium^ Rho = gcnew Aluminium();
					Parity^ Psi = gcnew Parity(Rho);
					Ether^ Nu = gcnew Ether(Psi);
					Apse^ Eta = gcnew Apse(Nu->Mu->L);

					Add(Nu, Eta);
				}
			};
		}
	}
}