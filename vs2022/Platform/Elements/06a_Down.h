#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Down : public Metal<Nucleon^> {
			public:
				static Quark<Hel^, Hadron^, Lith^>^ Corona;
				static Quark<Nucleon^, Hadron^, Fermion^>^ Uranus;

				Down() {
					Hadron^ Beta = gcnew Hadron();
					Hel^ Pi = gcnew Hel(Beta);
					Lith^ Xi = gcnew Lith(Pi);
					Fermion^ Omicron = gcnew Fermion(Xi);
					Nucleon^ Delta = gcnew Nucleon(Omicron);
					Add(Omicron, Delta);

					if (Uranus == nullptr) Uranus = gcnew Quark<Nucleon^, Hadron^, Fermion^>(Delta, Xi->Mu->I, Omicron);
				}
			};
		}
	}
}