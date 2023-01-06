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
			public ref class Neon : public Quark<Fluorine^, Hydrogen^, Hydrogen^>
			{
			public:
				BigInteger Manifold;
				Hydrogen^ Beta;

				property Color Hue { Color get() { 
					BigInteger Sum = 0;
					int count = 0;
					for (int i = 0; i < N->Count; i++) {
						for (int j = 0; j < N[i].Key->Omicron->Count; j++) {
							Sum = BigInteger::Add(Sum, L->Foundation % Int32::MaxValue);
							count++;
						}
					}

					return Color::FromArgb((Int32) (BigInteger::Divide(Sum, count)));
				}};

				Neon(Fluorine^ Phi) : Quark(Phi, Phi->Last.Key->Omicron->Last.Value, Phi->Last.Key->Omicron->Last.Key) {
					Beta = gcnew Hydrogen();
					Manifold = ((Boron^)N->Xi->Mu.Value)->N->Rod->Manifold;
				};
			};
		}
	}
}
