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
				Hafnium^ Nu;

				Argon() { 
					Xi = gcnew Nitrogen(); 
					Hydrogen^ Fu = gcnew Hydrogen();
					Nu = gcnew Hafnium(Fu);
				}
			};
		}
	}
}