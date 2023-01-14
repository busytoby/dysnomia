#pragma once
#include "18a_Dysnomium.h"
#include "20_Calcium.h"
#include "21_Scandium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Titanium : public Quark<Scandium^, Calcium^, Dysnomium^>
			{
			public:
				static Quark<Dysnomium^, Scandium^, Calcium^>^ Despina;
				BigInteger Ring;

				Titanium(Calcium^ Upsilon, Scandium^ Nu) : Quark(Nu, Upsilon, Upsilon->Mu.Key->N) {
					if (Despina == nullptr) Despina = gcnew Quark<Dysnomium^, Scandium^, Calcium^>(L, N, R);
					Ring = Nu->Ring;
				}
			};
		}
	}
}
