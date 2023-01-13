#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Qiao : public Dai<Woof^, Blong^>
			{
			public:
				Qiao(Woof^ Mu, Blong^ Rho) {
					Add(Mu, Rho);
				}
			};
		}
	}
}