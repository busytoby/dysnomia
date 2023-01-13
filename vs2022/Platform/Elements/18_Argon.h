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
				static Dai<Coronium^, Aether^>^ FranciscoProliferation;

				Argon(Sulfur^ Psi, Chlorine^ Nu, Aether^ Rho) : Quark<Sulfur^, Chlorine^, Aether^>(Psi, Nu, Rho) {
					if (Telesto == nullptr) Telesto = gcnew Quark<Sulfur^, Aether^, Magnesium^>(Psi, Rho, Psi->N->N);
					if (Ferdinand == nullptr) Ferdinand = gcnew Quark<Sulfur^, Magnesium^, Chlorine^>(Psi, Psi->N->N, Nu);
					if (Rho->Count > 1 && FranciscoProliferation == nullptr) FranciscoProliferation = gcnew Dai<Coronium^, Aether^>();
					if (Rho->Count > 1 && FranciscoProliferation != nullptr)
						for (int i = 0; i < Rho->Count; i++)
							FranciscoProliferation->Add(Rho[i].Value, Rho[i].Key);
				}
			};
		}
	}
}