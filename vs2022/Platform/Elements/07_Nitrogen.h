#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nitrogen : public Quark<Hydrogen^, Affinity^, Hydrogen^>
			{
			public:
				Nitrogen(Hydrogen^ X, Affinity^ C, Hydrogen^ Y) : Quark(C->Rod, gcnew Affinity(X, Y), C->Cone) { 
				};

				BigInteger Polarize() {
					return Math::ModPow(R->Rod->Base, R->Rod->Secret, Math::Prime);
				}
			};
		}
	}
}
