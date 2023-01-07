#pragma once
#include "01_Hydrogen.h"
#include "02_Helium.h"
#include "03_Lithium.h"
#include "04_Beryllium.h"
#include "05_Boron.h"
#include "06_Carbon.h"
#include "07_Nitrogen.h"
#include "08_Oxygen.h"
#include "09_Fluorine.h"
#include "10_Neon.h"
#include "11_Natrium.h"
#include "12_Magnesium.h"
#include "13_Aluminium.h"
#include "15_Phosphorous.h"
#include <cassert>

using namespace System;

namespace Dysnomia {
	namespace Platform {
		public ref class Objects abstract sealed {
		public:
			static property Quark<Boron^, Boron^, Fluorine^>^ Star { Quark<Boron^, Boron^, Fluorine^>^ get() { return Neon::Star; }};
			static property Quark<Beryllium^, Carbon^, Boron^>^ Uranus { Quark<Beryllium^, Carbon^, Boron^>^ get() { return Oxygen::Uranus; }};
			static property Quark<Fluorine^, Boron^, Carbon^>^ Neptune { Quark<Fluorine^, Boron^, Carbon^>^ get() { return Fluorine::Neptune; }};
			static property Dai<Lithium^, Fluorine^>^ Telesto { Dai<Lithium^, Fluorine^>^ get() { return Fluorine::Telesto; }};
			static property Quark<Magnesium^, Fluorine^, Natrium^>^ Hyperion { Quark<Magnesium^, Fluorine^, Natrium^>^ get() { return Magnesium::Hyperion; }};
			static property Quark<Aluminium^, Carbon^, Helium^>^ Deimos { Quark<Aluminium^, Carbon^, Helium^>^ get() { return Aluminium::Deimos; }};
		};
	}
}
