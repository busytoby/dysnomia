#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hyperon : public Quark<Hydrogen^, Hel^, Hydrogen^>
			{
			public:
				BigInteger Pole;

				Nitrogen(Hydrogen^ X, Hel^ C, Hydrogen^ Y) : Quark(C->Rod, gcnew Affinity(X, Y), C->Cone) {
				};

				BigInteger Polarize() {
					if (!Pole.IsZero) throw gcnew Exception("Already Polarized");
					Pole = Math::ModPow(R->Rod->Base, R->Rod->Secret, Math::Prime);
				}

				BigInteger Depolarize() {
					if (Pole.IsZero) throw gcnew Exception("Already Depolarized");
					Pole = 0;
				}
			};
		}
	}
}
