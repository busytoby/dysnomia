#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hyperon : public Quark<Hadron^, Hel^, Hadron^>
			{
			public:
				Int64 Pole;

				Nitrogen(Hadron^ X, Hel^ C, Hadron^ Y) : Quark(C->Rod, gcnew Affinity(X, Y), C->Cone) {
				};

				Int64 Polarize() {
					if (!Pole.IsZero) throw gcnew Exception("Already Polarized");
					Pole = Math::ModPow(R->Rod->Base, R->Rod->Secret, Math::Prime);
				}

				Int64 Depolarize() {
					if (Pole.IsZero) throw gcnew Exception("Already Depolarized");
					Pole = 0;
				}
			};
		}
	}
}
