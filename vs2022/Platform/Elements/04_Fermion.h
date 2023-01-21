#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fermion : public Dai<Hadron^, Muon^> {
			public:
				static Edge<Hel^, Hadron^, Muon^>^ Corona;

				Fermion(Muon^ Xi) {
					Add(Xi->Last->I, Xi);
					Hel^ Beta = gcnew Hel(Mu->I);
					Muon^ Pi = gcnew Muon(Beta);
					Add(Xi->Last->I, Pi);
					Add(Pi->Last->I, Pi);
					if (Corona == nullptr) Corona = gcnew Edge<Hel^, Hadron^, Muon^>(Xi->Mu->L, Pi->Mu->I, Pi);
				}
			};
		}
	}
}
