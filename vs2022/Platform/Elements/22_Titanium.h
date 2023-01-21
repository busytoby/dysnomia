#pragma once
#include "18a_Dysnomium.h"
#include "20_Calcium.h"
#include "21_Scandium.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Titanium : public Edge<Scandium^, Calcium^, Dysnomium^>
			{
			public:
				static Edge<Dysnomium^, Scandium^, Calcium^>^ Despina;
				Int64 Ring;

				Titanium(Calcium^ Upsilon, Scandium^ Nu) : Edge(Nu, Upsilon, Upsilon->Mu.Key->N) {
					if (Despina == nullptr) Despina = gcnew Edge<Dysnomium^, Scandium^, Calcium^>(L, N, R);
					Ring = Nu->Ring;
				}
			};
		}
	}
}
