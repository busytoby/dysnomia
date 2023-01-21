#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Parity : public Dai<Tauon^, Compensation^>
			{
			public:
				static Parity^ Jupiter19;
				static Edge<Compensation^, Tauon^, Aluminium^>^ Thalassa;

				Parity(Aluminium^ Beta) {			
					Compensation^ Rho = gcnew Compensation(Beta);
					for (int i = 0; i < Rho->Count; i++)
						Add(Rho[i]->L, Rho);

					if (Jupiter19 == nullptr) Jupiter19 = this;
					if (Thalassa == nullptr) Thalassa = gcnew Edge<Compensation^, Tauon^, Aluminium^>(Rho, Rho[0]->L, Beta);
				}
			};
		}
	}
}
