#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Germanium : Dai<Aether^, Zinc^> {
			public:
				Germanium(Zinc^ Beta) {
					for (int i = 0; i < Beta->N->Mu.Value->Count; i++)
						Add(Beta->N->Mu.Value[i].Value, Beta);
					for (int i = 0; i < Beta->L->Count; i++)
						Add(Beta->L[i].Value, Beta);
					for (int i = 0; i < Beta->R->Count; i++)
						Add(Beta->R[i].Value, Beta);
				}
			};
		}
	}
}
