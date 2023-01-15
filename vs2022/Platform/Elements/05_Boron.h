#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Boron : public Dai<Beryl^, Hel^> {
			public:
				property Hydrogen^ Gamma { Hydrogen^ get() { return Last->I->Gamma; }};
				property Dynamic^ Zeta { Dynamic^ get() { return Last->I->Zeta; }};
				property BigInteger Signal { BigInteger get() { return Zeta->Signal; }};

				Boron(Beryl^ Alpha) {
					Add(Alpha, gcnew Hel());
					Alpha->N->Add(Mu->L->Mu->I, Mu->L->Mu->L);
					Alpha->L->Last->L->Add(Mu->L->Mu->I, Mu->L->Mu->L);
				}
			};
		}
	}
}
