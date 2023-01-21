#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Chlorine : public Dai<Tauon^, Gluon^>
			{
			public:
				Chlorine(Sulfur^ Psi) {
					Gluon^ Alpha = gcnew Gluon();
					this->Chlorine::Chlorine(Psi, Alpha);
				}

				Chlorine(Sulfur^ Psi, Gluon^ Alpha) {
					for (int i = 0; i < Psi->R->Count; i++)
						Alpha->Add(Psi, Psi->R[i]->L);
					Add(Psi->I[0]->I, Alpha);
				}
			};
		}
	}
}