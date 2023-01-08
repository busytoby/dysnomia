#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Dysnomium : public Epsilon
			{
			public:
				Dysnomium() {
					this->Epsilon = Math::Random();
				}

				void Kappa(Dai<Dysnomia::Epsilon^, Dysnomia::Epsilon^>^ Tau) {
					Tau->Remove(Tau->Last);
				}
			};
		}
	}
}