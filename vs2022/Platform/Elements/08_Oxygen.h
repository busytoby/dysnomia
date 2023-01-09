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
				static Quark<Beryllium^, Beryllium^, Boron^>^ Uranus;

				BigInteger Barn;

				Oxygen(Beryllium^ N, Affinity^ R) : Quark(N, R->Cone, R->Rod) {
					if (R->Cone->Barn != R->Rod->Barn) throw gcnew Exception("Sour");
					Barn = R->Rod->Barn;
					Hydrogen^ Beta = gcnew Hydrogen();
					Beryllium^ Phi = gcnew Beryllium();
					Affinity^ Q = gcnew Affinity(Phi->Phi->N, Beta);
					Boron^ Lambda = gcnew Boron(R, N, Phi->Phi->N);
					if (Uranus == nullptr)
						Uranus = gcnew Quark<Beryllium^, Beryllium^, Boron^>(Phi, N, Lambda);
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
