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
#include "21_Scandium.h"
#include "22_Titanium.h"
#include <cassert>

using namespace System;

namespace Dysnomia {
	namespace Platform {
		public ref class Objects abstract sealed {
		public:
			static property Quark<Boron^, Boron^, Fluorine^>^ Star { Quark<Boron^, Boron^, Fluorine^>^ get() { return Neon::Star; }};
			static property Quark<Boron^, Beryllium^, Beryllium^>^ Uranus { Quark<Boron^, Beryllium^, Beryllium^>^ get() { return Oxygen::Uranus; }};
			static property Quark<Fluorine^, Boron^, Carbon^>^ Neptune { Quark<Fluorine^, Boron^, Carbon^>^ get() { return Fluorine::Neptune; }};
			static property Dai<Lithium^, Fluorine^>^ Tethys { Dai<Lithium^, Fluorine^>^ get() { return Fluorine::Tethys; }};
			static property Quark<Magnesium^, Fluorine^, Natrium^>^ Dione { Quark<Magnesium^, Fluorine^, Natrium^>^ get() { return Magnesium::Dione; }};
			static property Quark<Aluminium^, Helium^, Carbon^>^ Phobos { Quark<Aluminium^, Helium^, Carbon^>^ get() { return Aluminium::Phobos; }};
			static property Dai<Carbon^, Coronium^>^ Enceladus { Dai<Carbon^, Coronium^>^ get() { return Silicon::Enceladus; }};
			static property Dai<Coronium^, Silicon^>^ Jupiter19 { Dai<Coronium^, Silicon^>^ get() { return Phosphorous::Jupiter19; }};
			static property Quark<Sulfur^, Aether^, Magnesium^>^ Telesto { Quark<Sulfur^, Aether^, Magnesium^>^ get() { return Argon::Telesto; }};
			static property Quark<Sulfur^, Magnesium^, Chlorine^>^ Ferdinand { Quark<Sulfur^, Magnesium^, Chlorine^>^ get() { return Argon::Ferdinand; }};
			static property Dai<Phosphorous^, Sulfur^>^ Titan { Dai<Phosphorous^, Sulfur^>^ get() { return Sulfur::Titan; }};
			static property Quark<Sulfur^, Potassium^, Calcium^>^ Deimos { Quark<Sulfur^, Potassium^, Calcium^>^ get() { return Calcium::Deimos; }};
			static property Quark<Sulfur^, Coronium^, Argon^>^ Pluto { Quark<Sulfur^, Coronium^, Argon^>^ get() { return Scandium::Pluto; }};
			static property Quark<Argon^, Coronium^, Sulfur^>^ Psamathe { Quark<Argon^, Coronium^, Sulfur^>^ get() { return Scandium::Psamathe; }};
			static property Quark<Dysnomium^, Calcium^, Scandium^>^ Despina { Quark<Dysnomium^, Calcium^, Scandium^>^ get() { return Titanium::Despina; }};
			static property Quark<Magnesium^, Nitrogen^, Fluorine^>^ Halimede { Quark<Magnesium^, Nitrogen^, Fluorine^>^ get() { return Coronium::Halimede; }};
			static property Quark<Nitrogen^, Fluorine^, Magnesium^>^ Naiad { Quark<Nitrogen^, Fluorine^, Magnesium^>^ get() { return Coronium::Naiad; }};
			static property Quark<Silicon^, Coronium^, Aluminium^>^ Thalassa { Quark<Silicon^, Coronium^, Aluminium^>^ get() { return Phosphorous::Thalassa; }};
			static property Quark<Boron^, Carbon^, Fluorine^>^ Laomedeia { Quark<Boron^, Carbon^, Fluorine^>^ get() { return Fluorine::Laomedeia; } };
			static property Quark<Fluorine^, Coronium^, Aluminium^>^ Oberon { Quark<Fluorine^, Coronium^, Aluminium^>^ get() { return Silicon::Oberon; } };
			static property Quark<Fluorine^, Coronium^, Carbon^>^ Umbriel { Quark<Fluorine^, Coronium^, Carbon^>^ get() { return Silicon::Umbriel; } };
			static property Quark<Carbon^, Coronium^, Carbon^>^ Ariel { Quark<Carbon^, Coronium^, Carbon^>^ get() { return Silicon::Ariel; } };
			static property Quark<Coronium^, Coronium^, Carbon^>^ Prospero { Quark<Coronium^, Coronium^, Carbon^>^ get() { return Silicon::Prospero; } };
		};
	}
}
