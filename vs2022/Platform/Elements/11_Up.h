#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Up : public Metal<Top^>
			{
			public:
				Up(Charm^ Beta) {
					Hadron^ Pi = gcnew Hadron();
					Hel^ Xi = gcnew Hel(Pi);
					Muon^ Omicron = gcnew Muon(Xi);
					Fermion^ Delta = gcnew Fermion(Omicron);
					Top^ Alpha = gcnew Top(Beta);
					Add(Delta, Alpha);
				}
			};
		}
	}
}
