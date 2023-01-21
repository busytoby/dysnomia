#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Down : public Metal<Nucleon^> {
			public:
				static Edge<Hel^, Hadron^, Muon^>^ Corona;
				static Edge<Nucleon^, Hadron^, Fermion^>^ Uranus;

				Down() {
					Hadron^ Beta = gcnew Hadron();
					Hel^ Pi = gcnew Hel(Beta);
					this->Down::Down(Pi);
				}

				Down(Hel^ Beta) {
					Muon^ Pi = gcnew Muon(Beta);
					Fermion^ Xi = gcnew Fermion(Pi);
					Nucleon^ Omicron = gcnew Nucleon(Xi);
					Add(Xi, Omicron);

					if (Uranus == nullptr) Uranus = gcnew Edge<Nucleon^, Hadron^, Fermion^>(Omicron, Xi->Mu->I, Xi);
				}
			};
		}
	}
}