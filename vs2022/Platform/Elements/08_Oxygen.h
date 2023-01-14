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
				static Quark<Boron^, Beryllium^, Hydrogen^>^ Hippocamp;
				static Quark<Boron^, Hydrogen^, Beryllium^>^ Uranus;
				
				Hydrogen^ Beta;
				Beryllium^ Phi;
				Boron^ Lambda;

				BigInteger Barn;

				Oxygen(Beryllium^ N, Affinity^ R) : Quark(N, R->Cone, R->Rod) {
					while (R->Cone->Manifold > Math::Prime / 3 || R->Rod->Barn * 3 < Math::Prime * 2)
						R = gcnew Affinity();
					if (R->Cone->Barn != R->Rod->Barn) throw gcnew Exception("Sour");				
					Barn = R->Rod->Barn;
					Beta = gcnew Hydrogen();
					do {
						Phi = gcnew Beryllium();
					} while (Phi->Cone->Barn > Barn / 5 || Phi->Cone->Manifold < R->Cone->Manifold);
					Affinity^ Q = gcnew Affinity(Phi->Phi->N, Beta);
					Lambda = gcnew Boron(R, N, Phi->Phi->N);
					if (Hippocamp == nullptr) Hippocamp = gcnew Quark<Boron^, Beryllium^, Hydrogen^>(Lambda, Phi, Beta);
					if (Uranus == nullptr) Uranus = gcnew Quark<Boron^, Hydrogen^, Beryllium^>(Lambda, Phi->Phi->N, N);
					_Credit = N->Rod->Foundation;
					_Charge = L->Dynamo;
				};

				BigInteger Evidence() {
					return BigInteger::ModPow(_Charge, Barn, _Credit);
				}
			};
		}
	}
}
