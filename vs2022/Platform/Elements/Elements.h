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
#include "23_Vanadium.h"
#include "24_Chromium.h"
#include "25_Manganese.h"
#include "26_Iron.h"
#include "27_Cobalt.h"
#include "28_Nickel.h"
#include "29_Copper.h"
#include "30_Zinc.h"
#include "31_Gallium.h"
#include "32_Germanium.h"
#include "33_Arsenic.h"
#include "34_Selenium.h"
#include <cassert>

using namespace System;

namespace Dysnomia {
	namespace Platform {
		public ref class Objects abstract sealed {
		public:
			static property Dai<Lithium^, Fluorine^>^ Tethys { Dai<Lithium^, Fluorine^>^ get() { return Fluorine::Tethys; }};

			static property Quark<Boron^, Boron^, Fluorine^>^ Star { Quark<Boron^, Boron^, Fluorine^>^ get() { return Neon::Star; }};
			static property Quark<Boron^, Hydrogen^, Beryllium^>^ Uranus { Quark<Boron^, Hydrogen^, Beryllium^>^ get() { return Oxygen::Uranus; }};
			static property Quark<Boron^, Beryllium^, Hydrogen^>^ Hippocamp { Quark<Boron^, Beryllium^, Hydrogen^>^ get() { return Oxygen::Hippocamp; }};
			static property Quark<Boron^, Fluorine^, Carbon^>^ Laodemeia { Quark<Boron^, Fluorine^, Carbon^>^ get() { return Fluorine::Laodemeia; } };
			static property Dai<Carbon^, Coronium^>^ Enceladus { Dai<Carbon^, Coronium^>^ get() { return Silicon::Enceladus; }};
			static property Quark<Carbon^, Coronium^, Carbon^>^ Ariel { Quark<Carbon^, Coronium^, Carbon^>^ get() { return Silicon::Ariel; } };
			static property Quark<Nitrogen^, Fluorine^, Magnesium^>^ Naiad { Quark<Nitrogen^, Fluorine^, Magnesium^>^ get() { return Coronium::Naiad; }};
			static property Quark<Fluorine^, Boron^, Carbon^>^ Neptune { Quark<Fluorine^, Boron^, Carbon^>^ get() { return Fluorine::Neptune; }};
			static property Quark<Fluorine^, Coronium^, Aluminium^>^ Oberon { Quark<Fluorine^, Coronium^, Aluminium^>^ get() { return Silicon::Oberon; } };
			static property Quark<Fluorine^, Coronium^, Carbon^>^ Umbriel { Quark<Fluorine^, Coronium^, Carbon^>^ get() { return Silicon::Umbriel; } };
			static property Quark<Magnesium^, Nitrogen^, Fluorine^>^ Halimede { Quark<Magnesium^, Nitrogen^, Fluorine^>^ get() { return Coronium::Halimede; }};
			static property Quark<Magnesium^, Fluorine^, Boron^>^ Dione { Quark<Magnesium^, Fluorine^, Boron^>^ get() { return Magnesium::Dione; }};
			static property Quark<Magnesium^, Fluorine^, Natrium^>^ VanAllenBelt { Quark<Magnesium^, Fluorine^, Natrium^>^ get() { return Magnesium::VanAllenBelt; }};
			static property Quark<Aluminium^, Helium^, Carbon^>^ Phobos { Quark<Aluminium^, Helium^, Carbon^>^ get() { return Aluminium::Phobos; }};
			static property Quark<Aluminium^, Aether^, Nickel^>^ Triton { Quark<Aluminium^, Aether^, Nickel^>^ get() { return Copper::Triton; }}
			static property Quark<Coronium^, Coronium^, Carbon^>^ Prospero { Quark<Coronium^, Coronium^, Carbon^>^ get() { return Silicon::Prospero; } };
			static property Dai<Coronium^, Silicon^>^ Jupiter19 { Dai<Coronium^, Silicon^>^ get() { return Phosphorous::Jupiter19; }};
			static property Quark<Silicon^, Coronium^, Aluminium^>^ Thalassa { Quark<Silicon^, Coronium^, Aluminium^>^ get() { return Phosphorous::Thalassa; }};
			static property Dai<Phosphorous^, Sulfur^>^ Titan { Dai<Phosphorous^, Sulfur^>^ get() { return Sulfur::Titan; }};
			static property Quark<Sulfur^, Magnesium^, Chlorine^>^ Ferdinand { Quark<Sulfur^, Magnesium^, Chlorine^>^ get() { return Argon::Ferdinand; }};
			static property Quark<Sulfur^, Potassium^, Calcium^>^ Deimos { Quark<Sulfur^, Potassium^, Calcium^>^ get() { return Calcium::Deimos; }};
			static property Quark<Sulfur^, Aether^, Magnesium^>^ Telesto { Quark<Sulfur^, Aether^, Magnesium^>^ get() { return Argon::Telesto; }};
			static property Quark<Sulfur^, Coronium^, Argon^>^ Pluto { Quark<Sulfur^, Coronium^, Argon^>^ get() { return Scandium::Pluto; }};
			static property Quark<Sulfur^, Argon^, Coronium^>^ Psamathe { Quark<Sulfur^, Argon^, Coronium^>^ get() { return Scandium::Psamathe; }};
			static property Quark<Sulfur^, Aether^, Iron^>^ Io { Quark<Sulfur^, Aether^, Iron^>^ get() { return Iron::Io; }};		
			static property Dai<Sulfur^, Aether^>^ Jupiter { Dai<Sulfur^, Aether^>^ get() { return Vanadium::Jupiter; }};
			static property Dai<Aether^, Iron^>^ Amalthea { Dai<Aether^, Iron^>^ get() { return Nickel::Amalthea; }};
			static property Dai<Aether^, Zinc^>^ Proteus { Dai<Aether^, Zinc^>^ get() { return Germanium::Proteus; }};
			static property Dai<Argon^, Aluminium^>^ Adrastea { Dai<Argon^, Aluminium^>^ get() { return Copper::Adrastea; }};	
			static property Quark<Argon^, Zinc^, Aluminium^>^ Neso { Quark<Argon^, Zinc^, Aluminium^>^ get() { return Zinc::Neso; }}
			static property Quark<Dysnomium^, Scandium^, Calcium^>^ Despina { Quark<Dysnomium^, Scandium^, Calcium^>^ get() { return Titanium::Despina; }};
			static property Quark<Dysnomium^, Chromium^, Manganese^>^ Sao { Quark<Dysnomium^, Chromium^, Manganese^>^ get() { return Arsenic::Sao; }}
			static property Quark<Potassium^, Scandium^, Vanadium^>^ Himalia { Quark<Potassium^, Scandium^, Vanadium^>^ get() { return Manganese::Himalia; }};
			static property Quark<Scandium^, Potassium^, Vanadium^>^ Ganymede { Quark<Scandium^, Potassium^, Vanadium^>^ get() { return Manganese::Ganymede; }};
			static property Quark<Titanium^, Sulfur^, Vanadium^>^ Mars { Quark<Titanium^, Sulfur^, Vanadium^>^ get() { return Chromium::Mars; }};
			static property Quark<Titanium^, Coronium^, Vanadium^>^ Sycorax { Quark<Titanium^, Coronium^, Vanadium^>^ get() { return Chromium::Sycorax; }};
			static property Quark<Vanadium^, Sulfur^, Titanium^>^ Puck { Quark<Vanadium^, Sulfur^, Titanium^>^ get() { return Chromium::Puck; }};
			static property Quark<Vanadium^, Dysnomium^, Titanium^>^ Belinda { Quark<Vanadium^, Dysnomium^, Titanium^>^ get() { return Chromium::Belinda; }};
			static property Quark<Vanadium^, Manganese^, Chromium^>^ Mercury { Quark<Vanadium^, Manganese^, Chromium^>^ get() { return Cobalt::Mercury; }};
			static property Dai<Vanadium^, Chromium^>^ Larissa { Dai<Vanadium^, Chromium^>^ get() { return Cobalt::Larissa; }}
			static property Dai<Vanadium^, Manganese^>^ Rosalind { Dai<Vanadium^, Manganese^>^ get() { return Manganese::Rosalind; }};
			static property Dai<Manganese^, Vanadium^>^ Mab { Dai<Manganese^, Vanadium^>^ get() { return Manganese::Mab; }};
			static property Dai<Manganese^, Cobalt^>^ Thebe { Dai<Manganese^, Cobalt^>^ get() { return Arsenic::Thebe; }}
			static property Quark<Nickel^, Argon^, Natrium^>^ Neith { Quark<Nickel^, Argon^, Natrium^>^ get() { return Zinc::Neith; }}
			static property Quark<Nickel^, Argon^, Zinc^>^ Callisto { Quark<Nickel^, Argon^, Zinc^>^ get() { return Zinc::Callisto; }}
			static property Dai<Zinc^, Argon^>^ Venus { Dai<Zinc^, Argon^>^ get() { return Zinc::Venus; }}
			static property Dai<Arsenic^, Selenium^>^ KuiperBelt { Dai<Arsenic^, Selenium^>^ get() { return Selenium::KuiperBelt; }}
		};
	}
}
