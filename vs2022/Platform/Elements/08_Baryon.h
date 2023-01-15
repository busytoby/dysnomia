#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Baryon : public Quark<Down^, Lith^, Hel^> {
			public:
				Baryon(Down^ Mu, Lith^ Psi, Hel^ Rho) : Quark<Down^, Lith^, Hel^>(Mu, Psi, Rho) { }

				/*
			private:
				BigInteger _Credit;
				BigInteger _Charge;
			public:
				static Quark<Boron^, Beryllium^, Hydrogen^>^ Hippocamp;
				static Quark<Boron^, Hydrogen^, Beryllium^>^ Uranus;
				
				Hydrogen^ Alpha;
				Beryllium^ Phi;
				Boron^ Lambda;

				Oxygen(Beryllium^ N, Affinity^ R) : Quark(N, R->Cone, R->Rod) {
					if (R->Cone->Barn != R->Rod->Barn) throw gcnew Exception("Sour");				
					Phi = gcnew Beryllium();
					Lambda = gcnew Boron(R, N, Phi->Phi->N);
					Affinity^ Q = gcnew Affinity(Phi->Phi->N, Phi->Phi->Base, Phi->Secret, Lambda->Signal, Math::Random());
					Alpha = Q->Cone;
					if (Hippocamp == nullptr) Hippocamp = gcnew Quark<Boron^, Beryllium^, Hydrogen^>(Lambda, Phi, Alpha);
					if (Uranus == nullptr) Uranus = gcnew Quark<Boron^, Hydrogen^, Beryllium^>(Lambda, Phi->Phi->N, N);
					_Credit = N->Rod->Foundation;
					_Charge = L->Dynamo;
				};

				BigInteger Avail(BigInteger Xi)
				{
					return Math::ModPow(Xi, Phi->Secret, Math::Prime);
				}

				BigInteger Evidence() {
					return Math::ModPow(_Charge, Avail(_Charge), _Credit);
				}
				*/
			};
		}
	}
}
