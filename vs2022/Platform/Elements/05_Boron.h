#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Boron : public Dai<Beryl^, Hel^> {
			public:
				property BigInteger Signal { BigInteger get() { return Mu->I->N->Mu->L->Signal; }};

				Boron(Beryl^ Alpha) {
					Add(Alpha, gcnew Hel());
				}
			};
		}
	}
}
