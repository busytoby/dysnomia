#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Neon : public Quark<Fluorine^, Hydrogen^, Hydrogen^>
			{
			public:
				static Quark<Boron^, Boron^, Fluorine^>^ Star;

				BigInteger Manifold;

				property Color Hue { Color get() { 
					BigInteger Sum = 0;
					int count = 0;
					for (int i = 0; i < N->Count; i++) {
						Sum = BigInteger::Add(Sum,
							BigInteger::Multiply(N[i].Key->Pi->N->Rod->Dynamo,
								BigInteger::Subtract(R->Foundation, L->Foundation) % Int32::MaxValue));
						count++;
					}

					return Color::FromArgb((Int32) (BigInteger::Divide(Sum, count) % Int32::MaxValue));
				}};

				Neon(Fluorine^ Phi) : Quark(Phi, Helium::Gamma->Cone, Helium::Gamma->Rod) {
					if (Star == nullptr) Star = gcnew Quark<Boron^, Boron^, Fluorine^>(N->Pi, N->Mu.Key->Pi, Phi);
					Manifold = BigInteger::Add(N->Pi->N->Cone->Manifold, N->Mu.Key->Pi->N->Rod->Manifold);
				};
			};
		}
	}
}
