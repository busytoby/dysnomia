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
			public ref class Neon : public Oxygen
			{
			public:
				property Color Hue { Color get() { 
					BigInteger Sum = 0;
					int count = 0;
					for (int i = 0; i < ((Fluorine^)N)->Count; i++) {
						for (int j = 0; j < ((Fluorine^)N)[i].Key->Omicron->Count; j++) {
							Sum = BigInteger::Add(Sum, ((Fluorine^)N)[i].Key->Omicron[j].Key->Manifold % Int32::MaxValue);
							count++;
						}
					}

					return Color::FromArgb((Int32) (BigInteger::Divide(Sum, count)));
				}};

				Neon(Fluorine^ F) : Oxygen(F, F[F->Count - 1].Key->Omicron[0].Value, F[F->Count - 1].Key->Omicron[0].Key) {
				};
			};
		}
	}
}
