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
				static Quark<Beryllium^, Carbon^, Boron^>^ Uranus;

				BigInteger Barn;

				Oxygen(Beryllium^ N, Affinity^ R) : Quark(N, R->Cone, R->Rod) {
					if (R->Cone->Barn != R->Rod->Barn) throw gcnew Exception("Sour");
					Barn = R->Rod->Barn;
					Boron^ Lambda = gcnew Boron(R, N, gcnew Hydrogen());
					if (Uranus == nullptr)
						Uranus = gcnew Quark<Beryllium^, Carbon^, Boron^>(N, gcnew Carbon(), Lambda);
					_Credit = N->Rod->Foundation;
					_Charge = R->Rod->Dynamo;
				};

				BigInteger PresentEvidence() {
					return BigInteger::ModPow(_Charge, Barn, _Credit);
				}
			};
		}
	}
}
