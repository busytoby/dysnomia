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
				BigInteger Gamma;

				Dysnomium(Phosphorous^ Phi) {
					this->Epsilon = Phi->Epsilon;
					Gamma = this->Epsilon;
					Tau = Phi;
				}

				void Kappa(KeyValuePair<Coronium^, Silicon^> Eta) {
					this->Epsilon = Eta.Key->Epsilon;
					Gamma = BigInteger::Add(Gamma, Eta.Key->Epsilon);
					Tau->Remove(Eta);
				}
			};
		}
	}
}