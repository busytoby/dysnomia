#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fermion : public Quark<Hel^, Hadron^, Lith^> {
			public:
				static Quark<Hel^, Hadron^, Lith^>^ Corona;

				Fermion(Hel^ Beta, Hadron^ Pi, Lith^ Xi) : Quark(Beta, Pi, Xi) {
					if (Corona != nullptr) throw gcnew Exception("Fermion Is Singular");
					R->Last->I->Phi(I);
					R->Add(I, N);
					Chi(I, R->Last->I);
					Corona = this;
				}

				void Chi(Hadron^ Beta, Dynamic^ Pi) {
					N->Add(Beta, Pi);
				}
			};
		}
	}
}
