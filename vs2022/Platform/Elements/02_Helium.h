#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Helium : public Poly<Hydrogen^, Hydrogen^> {
			public:
				Helium() : Poly<Hydrogen^, Hydrogen^>() {
				};
				Hydrogen^ Zeta(Hydrogen^ S, Hydrogen^ G) {
					if (!S->Tau.IsZero && !G->Tau.IsZero)
						Add(KeyValuePair<Hydrogen^, Hydrogen^>(S, G));
					else throw gcnew Exception("Helium Rod");
					this->Epsilon = G->Tau;
					return S;
				}

				Hydrogen^ Zeta(KeyValuePair<Hydrogen^, Hydrogen^> M) {
					if (!M.Key->Tau.IsZero && !M.Value->Tau.IsZero)
						Add(M);
					else throw gcnew Exception("Helium Rod");
					this->Epsilon = M.Value->Tau;
					return M.Value;
				}
			};
		}
	}
}