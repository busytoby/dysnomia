#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nucleon : public Dai<Fermion^, Hel^> {
			public:
				property Hadron^ Gamma { Hadron^ get() { return Last->I->Gamma; }};
				property Dynamic^ Zeta { Dynamic^ get() { return Last->I->Zeta; }};
				property BigInteger Signal { BigInteger get() { return Zeta->Signal; }};

				Nucleon(Fermion^ Alpha) {
					Add(Alpha, gcnew Hel());
					Alpha->Chi(Mu->L->Mu->I, Mu->L->Mu->L);
				}
			};
		}
	}
}
