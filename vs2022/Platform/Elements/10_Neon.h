#pragma once
#include "08_Oxygen.h"
#include "09_Fluorine.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Neon : Oxygen
			{
			private:
				BigInteger _Momentum;
				Complex _Position;

			public:
				Lithium^ Zeta;

				property BigInteger Momentum { BigInteger get() {
					if (_Momentum.IsZero) {
						_Momentum = ((Affinity^)N)->Rod->Dynamo * ((Affinity^)N)->Cone->Foundation;
					}
					return _Momentum;
				}}
				property Complex Procession { Complex get() { return (Complex)Momentum / (Complex)((Dynamic^)R)->Manifold; }}
				property Complex Mass { Complex get() { return ((Complex)(Momentum % ((Dynamic^)R)->Manifold) / (Complex)((Dynamic^)L)->Ring) * Procession; }}
				property Complex Weight { Complex get() { return (Complex)((Dynamic^)R)->Foundation / (Complex)((Affinity^)N)->Rod->Element; }};
				property Color Hue {Color get() { return Color::FromArgb((Int32)(((Dynamic^)R)->Manifold % Int32::MaxValue)); }};
				Complex Shape;

				Neon(Fluorine^ F) : Oxygen(F->Delta, gcnew Hydrogen(), F->Epsilon->Item2) {
					Zeta = gcnew Lithium(F->Zeta->Item2, ((Affinity^)F->Xi->N)->Rod, (Dynamic^)R);
					Shape = (Complex)Zeta->Item1->Barn / F->Shape;
				};			
			};
		}
	}
}
