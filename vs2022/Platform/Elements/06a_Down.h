#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Down : public Metal<Nucleon^> {
			public:
				static Edge<Hel^, Hadron^, Lith^>^ Corona;
				static Edge<Nucleon^, Hadron^, Fermion^>^ Uranus;

				Down() {
					Hadron^ Beta = gcnew Hadron();
					Hel^ Pi = gcnew Hel(Beta);
					Lith^ Xi = gcnew Lith(Pi);
					Fermion^ Omicron = gcnew Fermion(Xi);
					Nucleon^ Delta = gcnew Nucleon(Omicron);
					Add(Omicron, Delta);

					if (Uranus == nullptr) Uranus = gcnew Edge<Nucleon^, Hadron^, Fermion^>(Delta, Xi->Mu->I, Omicron);
				}
			};
		}
	}
}