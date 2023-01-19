#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Down : public Metal<Nucleon^> {
			public:
				static Quark<Nucleon^, Hadron^, Fermion^>^ Uranus;

				Down() {
					Hadron^ Beta = gcnew Hadron();
					Hel^ Pi = gcnew Hel();
					Lith^ Xi = gcnew Lith(Beta);
					Hadron^ Omicron = gcnew Hadron();
					Fermion^ Delta = gcnew Fermion(Pi, Omicron, Xi);
					Nucleon^ Alpha = gcnew Nucleon(Delta);
					Add(Delta, Alpha);

					if (Uranus == nullptr) Uranus = gcnew Quark<Nucleon^, Hadron^, Fermion^>(Alpha, Xi->Mu->I, Delta);
				}
			};
		}
	}
}