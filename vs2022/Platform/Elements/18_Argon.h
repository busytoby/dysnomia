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
				Nitrogen^ Xi;
				Beryllium^ Delta;
				Hafnium^ Nu;

				Argon() { 
					Xi = gcnew Nitrogen(); 
					Delta = gcnew Beryllium(gcnew Hydrogen());
					Nu = gcnew Hafnium(Delta);
				}
			};
		}
	}
}