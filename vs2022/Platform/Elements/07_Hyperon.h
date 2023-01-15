#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hyperon : public Quark<Hadron^, Hel^, Hadron^>
			{
			public:
				BigInteger Pole;

				Nitrogen(Hadron^ X, Hel^ C, Hadron^ Y) : Quark(C->Rod, gcnew Affinity(X, Y), C->Cone) {
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
