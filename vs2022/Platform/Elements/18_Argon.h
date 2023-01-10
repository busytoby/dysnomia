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
				static Quark<Sulfur^, Aether^, Magnesium^>^ Telesto;
				static Quark<Sulfur^, Magnesium^, Chlorine^>^ Ferdinand;

				Argon(Sulfur^ Psi, Chlorine^ Nu, Aether^ Rho) : Quark<Sulfur^, Chlorine^, Aether^>(Psi, Nu, Rho) {
					if (Telesto == nullptr) Telesto = gcnew Quark<Sulfur^, Aether^, Magnesium^>(Psi, Rho, Psi->N->N);
					if (Ferdinand == nullptr) Ferdinand = gcnew Quark<Sulfur^, Magnesium^, Chlorine^>(Psi, Psi->N->N, Nu);
				}
			};
		}
	}
}