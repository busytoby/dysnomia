#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Peridium : public Dai<Versor^, Perithecium^> {
			public:
				Peridium(Versor^ Eta, Perithecium^ Lambda) {
					Add(Eta, Lambda);
				}
			};
		}
	}
}
