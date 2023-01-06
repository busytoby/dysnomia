#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Beryllium^, Hydrogen^, Hydrogen^> {
			private:
				BigInteger _Credit;
				BigInteger _Charge;
			public:
				static Quark<Beryllium^, Hydrogen^, Hydrogen^>^ Uranus;

				BigInteger Barn;

				Oxygen(Beryllium^ N, Affinity^ R) : Quark(N, R->Cone, R->Rod) {
					if (R->Cone->Barn != R->Rod->Barn) throw gcnew Exception("Sour");
					Barn = R->Rod->Barn;
					_Credit = N->Rod->Foundation;
					_Charge = R->Rod->Dynamo;
					if (Uranus == nullptr) Uranus = this;
				};

				BigInteger PresentEvidence() {
					return BigInteger::ModPow(_Credit, _Charge, Barn);
				}
			};
		}
	}
}
