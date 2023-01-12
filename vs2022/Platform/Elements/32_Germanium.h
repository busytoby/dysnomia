#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Germanium : public Dai<Aether^, Zinc^> {
			public:
				static Dai<Aether^, Zinc^>^ Proteus;

				Germanium(Zinc^ Beta) {
					for (int i = 0; i < Beta->L->Count; i++)
						Add(Beta->L[i].Value, Beta);
					for (int i = 0; i < Beta->R->Count; i++)
						Add(Beta->R[i].Value, Beta);
					if (Proteus == nullptr) Proteus = this;

					Beta->N->Mu.Value->Mu.Key->Mu.Key->Omega(Beta->N->Mu.Value->Mu.Value->Mu.Value, Beta->N->Mu.Value->Mu.Value->Mu.Key->L);
				}
			};
		}
	}
}
