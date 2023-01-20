#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hyperon : public Quark<Hadron^, Hel^, Hadron^>
			{
			public:
				Int64 Pole;

				Hyperon(Hel^ C) : Quark(C->Last->I, gcnew Hel(), C->Last->L) {
				};

				Hyperon(Hadron^ X, Hel^ C, Hadron^ Y) : Quark(C->Last->I, gcnew Hel(gcnew Affinity(X, Y)), C->Last->L) {
				};

				Int64 Polarize() {
					if (Pole != 0) throw gcnew Exception("Already Polarized");
					Pole = Math::ModPow(R->Base, R->Secret, Math::Prime);
				}

				Int64 Depolarize() {
					if (Pole == 0) throw gcnew Exception("Already Depolarized");
					Pole = 0;
				}
			};
		}
	}
}
