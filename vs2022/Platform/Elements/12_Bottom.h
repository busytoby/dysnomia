#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Bottom : public Metal<Charm^>
			{
			public:
				static Edge<Bottom^, Charm^, Up^>^ VanAllenBelt;
				static Edge<Bottom^, Charm^, Nucleon^>^ Dione;

				Bottom(Up^ Beta, Charm^ Pi) {
					if (Beta->Count > 1) throw gcnew Exception("Cannot Charm");
					Hadron^ Xi = gcnew Hadron();
					Hel^ Omicron = gcnew Hel(Xi);
					Muon^ Delta = gcnew Muon(Omicron);
					Fermion^ Alpha = gcnew Fermion(Delta);			

					Strange^ Chi = gcnew Strange(Beta[0]->I[2]->I);
					Add(Alpha, Pi);
					if (VanAllenBelt == nullptr) VanAllenBelt = gcnew Edge<Bottom^, Charm^, Up^>(this, Pi, Beta);
					if (Dione == nullptr) Dione = gcnew Edge<Bottom^, Charm^, Nucleon^>(this, Pi, Pi[0]->L[3]->L[0]->L);
				}
			};
		}
	}
}
