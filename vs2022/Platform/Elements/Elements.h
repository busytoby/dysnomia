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
#include "13a_Coronium.h"
#include "14_Silicon.h"
#include "15_Phosphorous.h"
#include "16_Sulfur.h"
#include "17_Chlorine.h"
#include "18_Argon.h"
#include "18a_Dysnomium.h"
#include "19_Potassium.h"
#include "20_Calcium.h"
#include <cassert>

using namespace System;

namespace Dysnomia {
	namespace Platform {
		public ref class Objects abstract sealed {
		public:
			static property Quark<Boron^, Boron^, Fluorine^>^ Star { Quark<Boron^, Boron^, Fluorine^>^ get() { return Neon::Star; }};
			static property Quark<Beryllium^, Carbon^, Boron^>^ Uranus { Quark<Beryllium^, Carbon^, Boron^>^ get() { return Oxygen::Uranus; }};
			static property Quark<Fluorine^, Boron^, Carbon^>^ Neptune { Quark<Fluorine^, Boron^, Carbon^>^ get() { return Fluorine::Neptune; }};
			static property Dai<Lithium^, Fluorine^>^ Tethys { Dai<Lithium^, Fluorine^>^ get() { return Fluorine::Tethys; }};
			static property Quark<Magnesium^, Fluorine^, Natrium^>^ Dione { Quark<Magnesium^, Fluorine^, Natrium^>^ get() { return Magnesium::Dione; }};
			static property Quark<Aluminium^, Helium^, Carbon^>^ Phobos { Quark<Aluminium^, Helium^, Carbon^>^ get() { return Aluminium::Phobos; }};
			static property Dai<Carbon^, Coronium^>^ Enceladus { Dai<Carbon^, Coronium^>^ get() { return Silicon::Enceladus; }};
			static property Dai<Coronium^, Silicon^>^ Jupiter19 { Dai<Coronium^, Silicon^>^ get() { return Phosphorous::Jupiter19; }};
			static property Quark<Magnesium^, Aether^, Sulfur^>^ Telesto { Quark<Magnesium^, Aether^, Sulfur^>^ get() { return Argon::Telesto; }};
			static property Dai<Phosphorous^, Sulfur^>^ Titan { Dai<Phosphorous^, Sulfur^>^ get() { return Sulfur::Titan; }};
		};
	}
}
