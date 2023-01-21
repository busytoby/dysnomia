#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Muon : public Dai<Hadron^, Hel^> {
			public:
				Muon(Hel^ Beta) {
					if (Beta->Last->I->Barn != 0 || Beta->Last->L->Barn != 0) throw gcnew Exception("Already Paired");
					Affinity^ Pi = gcnew Affinity(Beta->Last->I, Beta->Last->L);
					Add(gcnew Hadron(), Beta);
				}
			};
		}
	}
}
