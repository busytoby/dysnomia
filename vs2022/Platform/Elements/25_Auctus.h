#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Auctus : public Dai<Eun^, Ascus^> {
			public:
				static Dai<Auctus^, Eun^>^ Mab;
				static Dai<Eun^, Auctus^>^ Rosalind;
				static Edge<Apse^, Pion^, Eun^>^ Ganymede;
				static Edge<Pion^, Apse^, Eun^>^ Himalia;

				Auctus(Ascus^ Alpha) {
					Add(Alpha[0]->L, Alpha);
					if (Mab == nullptr) Mab = gcnew Dai<Auctus^, Eun^>();
					if (Rosalind == nullptr) Rosalind = gcnew Dai<Eun^, Auctus^>();
					if (Ganymede == nullptr) Ganymede = gcnew Edge<Apse^, Pion^, Eun^>(Alpha[0]->I->N, Alpha[0]->L[0]->I[0]->L, Alpha[0]->L);
					if (Himalia == nullptr) Himalia = gcnew Edge<Pion^, Apse^, Eun^>(Alpha[0]->L[0]->I[0]->L, Alpha[0]->I->N, Alpha[0]->L);
					for (int i = 0; i < Alpha->Count; i++) {
						Mab->Add(this, Alpha[0]->L);
						Rosalind->Add(Alpha[0]->L, this);
					}
				}
			};
		}
	}
}