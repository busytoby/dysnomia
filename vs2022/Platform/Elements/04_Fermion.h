#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fermion : public Dai<Hadron^, Lith^> {
			public:
				static Edge<Hel^, Hadron^, Lith^>^ Corona;

				Fermion(Lith^ Xi) {
					Add(Xi->Last->I, Xi);
					Hel^ Beta = gcnew Hel(Mu->I);
					Lith^ Pi = gcnew Lith(Beta);
					Add(Xi->Last->I, Pi);
					Add(Pi->Last->I, Pi);
					if (Corona == nullptr) Corona = gcnew Edge<Hel^, Hadron^, Lith^>(Xi->Mu->L, Pi->Mu->I, Pi);
				}
			};
		}
	}
}
