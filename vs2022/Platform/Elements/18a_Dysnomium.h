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

				void Kappa(Phosphorous^ Tau) {
					this->Epsilon = Tau->Last.Key->Epsilon;
					Tau->Remove(Tau->Last);
				}
			};
		}
	}
}