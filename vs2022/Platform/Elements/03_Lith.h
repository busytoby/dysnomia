#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lith : public Dai<Hadron^, Hel^> {
			public:
				Lith(Hel^ Beta) {
					if (Beta->Last->I->Barn != 0 || Beta->Last->L->Barn != 0) throw gcnew Exception("Already Paired");
					Affinity^ Pi = gcnew Affinity(Beta->Last->I, Beta->Last->L);
					Add(gcnew Hadron(), Beta);
				}
			};
		}
	}
}
