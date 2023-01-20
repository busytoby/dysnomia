#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Strange : public Metal<Hyperon^> {
			public:
				Strange(Hadron^ Alpha) {
					Hadron^ Beta = gcnew Hadron();
					Hel^ Pi = gcnew Hel(Beta);
					Lith^ Xi = gcnew Lith(Pi);
					Fermion^ Omicron = gcnew Fermion(Xi);
					Hyperon^ Delta = gcnew Hyperon(Omicron[2]->I, Xi[0]->L, Alpha);
					Add(Omicron, Delta);
				}
			};
		}
	}
}