#pragma once
#include "17a_Aether.h"
#include "26_Iron.h"
#include "27_Cobalt.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nickel : public Dai<Iron^, Aether^> {
			public:
				Nickel(Aether^ Mu, Iron^ Lambda) {
					Add(Lambda, Mu);
				}
			};
		}
	}
}
