#pragma once
#include "13_Aluminium.h"
#include "28_Nickel.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Copper : Dai<Aluminium^, Nickel^> {
			public:
				Copper(Nickel^ Eta) {
					Add(Eta->Mu.Key->Beta->R->L, Eta);
				}
			};
		}
	}
}
