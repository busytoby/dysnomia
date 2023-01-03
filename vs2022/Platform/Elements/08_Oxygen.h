#pragma once
#include "04_Beryllium.h"

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Beryllium^, Hydrogen^, Hydrogen^> {
			protected:
				BigInteger _Momentum;

			public:

				property BigInteger Momentum { BigInteger get() {
					if (_Momentum.IsZero) {
						_Momentum = N->Rod->Dynamo * N->Cone->Foundation;
					}
					return _Momentum;
				}}
				property Complex Procession { Complex get() { return (Complex)Momentum / (Complex)L->Manifold; }}
				property Complex Mass { Complex get() { return ((Complex)(Momentum % R->Manifold) / (Complex)R->Ring); }}
				property Complex Weight { Complex get() { return (Complex)N->Cone->Foundation / (Complex)L->Element; }};

				Oxygen() : Quark(gcnew Beryllium(), gcnew Hydrogen(), gcnew Hydrogen()) { _Momentum = 0; };
				Oxygen(Beryllium^ N, Hydrogen^ R, Hydrogen^ L) : Quark(N, R, L) { _Momentum = 0; };

				void Spin() {
					_Momentum = Momentum / 2;
				}
			};
		}
	}
}
