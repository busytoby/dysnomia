#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Magnesium^, Helium^, Carbon^> {
			public:
				Aluminium(Magnesium^ N) : Quark<Magnesium^, Helium^, Carbon^>(N, N->Rho.Key->Omicron, N->Mu.Key) {

				}
			};
		}
	}
}
