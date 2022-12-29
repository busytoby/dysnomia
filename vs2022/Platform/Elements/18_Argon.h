#pragma once
#include "07_Nitrogen.h"
#include "72_Hafnium.h"

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Argon
			{
			public:
				Nitrogen^ Gamma;
				Beryllium^ Phi;
				Sodium^ Sigma;

				Argon() { 
					Gamma = gcnew Nitrogen(); 
					Phi = gcnew Beryllium(gcnew Hydrogen());
					Sigma = gcnew Sodium(Phi);
				}
			};
		}
	}
}