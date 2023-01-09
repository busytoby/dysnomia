#pragma once
#include "16_Sulfur.h"
#include "17a_Aether.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Argon : public Quark<Sulfur^, Chlorine^, Aether^>
			{
			public:
				static Quark<Magnesium^, Aether^, Sulfur^>^ Telesto;

				Argon(Sulfur^ Psi, Chlorine^ Nu, Aether^ Rho) : Quark<Sulfur^, Chlorine^, Aether^>(Psi, Nu, Rho) {
					if (Telesto == nullptr) Telesto = gcnew Quark<Magnesium^, Aether^, Sulfur^>(Psi->N->N, Rho, Psi);
				}
			};
		}
	}
}