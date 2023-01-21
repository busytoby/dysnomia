#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Chlorine : public Dai<Tauon^, Gluon^>
			{
			public:
				Chlorine(Sulfur^ Beta) {
					Gluon^ Alpha = gcnew Gluon();
					this->Chlorine::Chlorine(Beta, Alpha);
				}

				Chlorine(Sulfur^ Beta, Gluon^ Rho) {
					for (int i = 0; i < Beta->R->Count; i++)
						Rho->Add(Beta, Beta->R[i]->L);
					Add(Beta->I[0]->I, Rho);
				}
			};
		}
	}
}