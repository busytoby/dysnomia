#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Ramus : public Dai<Auctus^, Versor^>
			{
			public:
				static Edge<Sulfur^, Argon^, Tauon^>^ Psamathe;
				static Edge<Sulfur^, Gluon^, Ramus^>^ Io;

				Ramus(Auctus^ Beta) {
					//for(int i = 0; i < Beta[0]->I->Count; i++)
					//	Add(Beta[0]->I[i]->L[0]->I, Beta[0]->I[i]->L);
					//Xi(Sulfur::Titan[0]->I, Sulfur::Titan[1]->L->R);

					//if (Psamathe == nullptr) Psamathe = gcnew Edge<Sulfur^, Argon^, Tauon^>(Beta[0]->L[0]->I->I[0]->I->N, Beta[0]->L[0]->L[0]->I[0]->I, Beta[0]->I[0]->I[0]->L->R[0]->L);
				}
			};
		}
	}
}
