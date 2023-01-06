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
				static Quark<Boron^, Boron^, Fluorine^>^ Sun;

				BigInteger Manifold;

				property Color Hue { Color get() { 
					BigInteger Sum = 0;
					int count = 0;
					for (int i = 0; i < N->Count; i++) {
						for (int j = 0; j < N[i].Key->Omicron->Count; j++) {
							Sum = BigInteger::Add(Sum, 
								BigInteger::Multiply(N[i].Key->Pi->N->Rod->Dynamo,
									BigInteger::Subtract(R->Foundation, L->Foundation) % Int32::MaxValue));
							count++;
						}
					}

					return Color::FromArgb((Int32) (BigInteger::Divide(Sum, count) % Int32::MaxValue));
				}};

				Neon(Fluorine^ Phi) : Quark(Phi, Phi->Last.Key->Omicron->Last.Value, Phi->Last.Key->Omicron->Last.Key) {
					if (Sun == nullptr) Sun = gcnew Quark<Boron^, Boron^, Fluorine^>((Boron^)N->Xi[0].Value, (Boron^)N->Xi[1].Value, Phi);
					Manifold = BigInteger::Add(((Boron^)N->Xi->Mu.Value)->N->Cone->Manifold, ((Boron^)N->Xi->Rho.Value)->N->Rod->Manifold);
				};
			};
		}
	}
}
