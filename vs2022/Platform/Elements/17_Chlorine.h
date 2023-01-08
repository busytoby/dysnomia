#pragma once
#include "13_Aluminium.h"
#include "16_Sulfur.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Chlorine : public Dai<Coronium^, Coronium^>
			{
			public:
				Chlorine(Sulfur^ Psi) {
					for(int i = 0; i < Psi->R->Count; i++)
					Add(Psi->L[i].Value, Psi->R[i].Key);
				}
			};
		}
	}
}