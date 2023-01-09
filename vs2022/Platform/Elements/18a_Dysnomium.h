#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Dysnomium : public Epsilon
			{
			private:
				Phosphorous^ Tau;
			public:
				Dysnomium(Phosphorous^ Phi) {
					this->Epsilon = Phi->Epsilon;
					Tau = Phi;
				}

				void Kappa(KeyValuePair<Coronium^, Silicon^> Eta) {
					this->Epsilon = Eta.Key->Epsilon;
					Tau->Remove(Eta);
				}
			};
		}
	}
}