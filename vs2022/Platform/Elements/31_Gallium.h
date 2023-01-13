#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Gallium : public Dai<Carbon^, Zinc^>
			{
			public:
				Gallium(Zinc^ Alpha) {
					List<Dysnomia::Epsilon^>^ Carbons = gcnew List<Dysnomia::Epsilon^>();
					Alpha->FindKeys(Carbons, "Carbon");
					for each (Dysnomia::Epsilon^ Eta in Carbons)
						Add((Carbon^)Eta, Alpha);

					/* Same List
					Add(Alpha->N->Mu.Key->N->Mu.Key, Alpha);
					Add(Alpha->N->Mu.Key->N->Mu.Value->Mu.Key, Alpha);
					for (int i = 0; i < Alpha->N->Mu.Value->Mu.Key->Count; i++) {
						Add(Alpha->N->Mu.Value->Mu.Key[i].Value->Mu.Key->N->N->N->Mu.Key, Alpha);
						Add(Alpha->N->Mu.Value->Mu.Key[i].Value->Mu.Key->N->N->L, Alpha);
						for (int j = 0; j < Alpha->N->Mu.Value->Mu.Key[i].Value->Mu.Key->N->L->Count; j++)
							Add(Alpha->N->Mu.Value->Mu.Key[i].Value->Mu.Key->N->L[j].Key, Alpha);
					}				
					Add(Alpha->N->Mu.Value->Mu.Value->Mu.Key->N->N->Mu.Key, Alpha);
					Add(Alpha->N->Mu.Value->Mu.Value->Mu.Key->N->L, Alpha);
					for (int i = 0; i < Alpha->N->Mu.Value->Mu.Value->Mu.Key->L->Count; i++)
						Add(Alpha->N->Mu.Value->Mu.Value->Mu.Key->L[i].Key, Alpha);
					*/

					// Option
					//Add(Alpha->R->Mu.Value->Mu.Value->N->Mu.Key, Alpha);
				}
			};
		}
	}
}