#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Zirconium : public Dai<Woof^, Yttrium^>
			{
			public:

				Zirconium(Yttrium^ Nu) {
					Add(Nu->N->R, Nu);
					for (int i = 0; i < Nu->L->Count; i++)
						Add(Nu->L[i].Key, Nu);
					for (int i = 0; i < Nu->R->Count; i++) {
						Add(Nu->R[i].Key, Nu);
						Add(Nu->R[i].Value->R, Nu);
					}
				}
			};
		}
	}
}