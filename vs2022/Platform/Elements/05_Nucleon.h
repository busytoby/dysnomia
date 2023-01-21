#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nucleon : public Dai<Muon^, Fermion^> {
			public:
				Nucleon(Fermion^ Beta) {
					Hel^ Pi = gcnew Hel(Beta->Last->I);
					Muon^ Xi = gcnew Muon(Pi);
					Fermion^ Omicron = gcnew Fermion(Xi);
					Add(Xi, Omicron);

					Beta->Add(Pi->Mu->I, Omicron->Mu->L);
					for (int i = 0; i < Beta->Count; i++) {
						Omicron->Add(Pi->Mu->L, Beta[i]->L);
					}
				}
			};
		}
	}
}
