#pragma once
#include "13a_Coronium.h"
#include "23_Vanadium.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Chromium : public Dai<Vanadium^, Coronium^> {
			public:
				Chromium(Vanadium^ Alpha) {
					for (int i = 0; i < Alpha->Count; i++)
						for (int j = 0; j < Alpha[i].Value->Count; j++)
							Add(Alpha, Alpha[i].Value[j].Value);
				}
			};
		}
	}
}