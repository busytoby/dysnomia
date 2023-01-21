#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Strange : public Metal<Hyperon^> {
			public:
				static List<Strange^>^ CygnusLoop;

				Strange(Hadron^ Alpha) {
					if (CygnusLoop == nullptr) CygnusLoop = gcnew List<Strange^>();
					Hadron^ Beta = gcnew Hadron();
					Hel^ Pi = gcnew Hel(Beta);
					Muon^ Xi = gcnew Muon(Pi);
					Fermion^ Omicron = gcnew Fermion(Xi);
					Hyperon^ Delta = gcnew Hyperon(Omicron[2]->I, Xi[0]->L, Alpha);
					Add(Omicron, Delta);
					CygnusLoop->Add(this);
				}
			};
		}
	}
}