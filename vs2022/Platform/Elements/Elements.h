#pragma once
#include "01_Hadron.h"
#include "02_Hel.h"
#include "03_Muon.h"
#include "04_Fermion.h"
#include "05_Nucleon.h"
#include "06_Metal.h"
#include "06a_Down.h"
#include "07_Hyperon.h"
#include "07a_Strange.h"
#include "08_Baryon.h"
#include "09_Charm.h"
#include "10_Top.h"
#include "11_Up.h"
#include "12_Bottom.h"
#include "13_Aluminium.h"
#include "13a_Tauon.h"
#include "14_Compensation.h"
#include "15_Parity.h"
#include "16_Sulfur.h"
#include "16a_Gluon.h"
#include "17_Chlorine.h"
#include "18_Argon.h"
#include "18a_Dysnomium.h"
#include "19_Pion.h"
#include "20_Ether.h"
#include "21_Apse.h"
#include "22_Synapse.h"
#include "23_Eun.h"
#include "24_Ascus.h"
#include "25_Auctus.h"
#include "25a_Versor.h"
#include "26_Ramus.h"
#include "27_Perithecium.h"
#include "28_Peridium.h"
#include "29_Conidium.h"
#include "30_Sterigma.h"
/*
#include "31_Gallium.h"
#include "32_Germanium.h"
#include "33_Arsenic.h"
#include "34_Hiss.h"
#include "35_Woof.h"
#include "36_Meow.h"
#include "37_Blong.h"
#include "38_Qiao.h"
#include "39_Yttrium.h"
#include "40_Quaternion.h"
#include "41_Qiong.h"
*/
#include <cassert>

using namespace System;
using namespace System::Collections::Generic;
using namespace Dysnomia::Platform::Elements;
using namespace Dysnomia::Platform::Interfaces;

namespace Dysnomia {
	namespace Platform {
		public ref class Objects abstract sealed {
		public:
			static property Dynamic^ MuB { Dynamic^ get() { return Hadron::MuB; }};
			static property Affinity^ MuA { Affinity^ get() { return Hel::MuA; }};
			static property Edge<Hel^, Hadron^, Muon^>^ Corona { Edge<Hel^, Hadron^, Muon^>^ get() { return Fermion::Corona; }};
			static property Dai<Muon^, Charm^>^ Tethys { Dai<Muon^, Charm^>^ get() { return Charm::Tethys; }};
			static property Nucleon^ Star { Nucleon^ get() { return Baryon::Star; }};
			static property Edge<Nucleon^, Hadron^, Fermion^>^ Uranus { Edge<Nucleon^, Hadron^, Fermion^>^ get() { return Down::Uranus; }};
			static property Edge<Nucleon^, Fermion^, Hadron^>^ Hippocamp { Edge<Nucleon^, Fermion^, Hadron^>^ get() { return Baryon::Hippocamp; }};
			static property Edge<Nucleon^, Charm^, Down^>^ Laodemeia { Edge<Nucleon^, Charm^, Down^>^ get() { return Charm::Laodemeia; }};
			static property Edge<Down^, Muon^, Nucleon^>^ Anthe { Edge<Down^, Muon^, Nucleon^>^ get() { return Charm::Anthe; }};
			static property List<Strange^>^ CygnusLoop { List<Strange^>^ get() { return Strange::CygnusLoop; }};
			/*
			static property Dai<Down^, Coronium^>^ Enceladus { Dai<Down^, Coronium^>^ get() { return Silicon::Enceladus; }};
			static property Edge<Down^, Coronium^, Down^>^ Ariel { Edge<Down^, Coronium^, Down^>^ get() { return Silicon::Ariel; }};
			static property Edge<Nitrogen^, Charm^, Magnesium^>^ Naiad { Edge<Nitrogen^, Charm^, Magnesium^>^ get() { return Coronium::Naiad; }};
			static property Edge<Charm^, Nucleon^, Down^>^ Neptune { Edge<Charm^, Nucleon^, Down^>^ get() { return Charm::Neptune; }};
			static property Edge<Charm^, Coronium^, Aluminium^>^ Oberon { Edge<Charm^, Coronium^, Aluminium^>^ get() { return Silicon::Oberon; } };
			static property Edge<Charm^, Coronium^, Down^>^ Umbriel { Edge<Charm^, Coronium^, Down^>^ get() { return Silicon::Umbriel; }};
			static property Edge<Magnesium^, Nitrogen^, Charm^>^ Halimede { Edge<Magnesium^, Nitrogen^, Charm^>^ get() { return Coronium::Halimede; }};
			static property Edge<Magnesium^, Charm^, Nucleon^>^ Dione { Edge<Magnesium^, Charm^, Nucleon^>^ get() { return Magnesium::Dione; }};
			static property Edge<Magnesium^, Charm^, Natrium^>^ VanAllenBelt { Edge<Magnesium^, Charm^, Natrium^>^ get() { return Magnesium::VanAllenBelt; }};
			static property Edge<Aluminium^, Bottom^, Down^>^ Phobos { Edge<Aluminium^, Bottom^, Down^>^ get() { return Aluminium::Phobos; }};
			static property Edge<Aluminium^, Aether^, Nickel^>^ Triton { Edge<Aluminium^, Aether^, Nickel^>^ get() { return Copper::Triton; }}
			static property Edge<Coronium^, Coronium^, Down^>^ Prospero { Edge<Coronium^, Coronium^, Down^>^ get() { return Silicon::Prospero; }};
			static property Dai<Coronium^, Silicon^>^ Jupiter19 { Dai<Coronium^, Silicon^>^ get() { return Phosphorous::Jupiter19; }};
			static property Dai<Coronium^, Aether^>^ FranciscoProliferation { Dai<Coronium^, Aether^>^ get() { return Argon::FranciscoProliferation; }};
			static property Edge<Silicon^, Coronium^, Aluminium^>^ Thalassa { Edge<Silicon^, Coronium^, Aluminium^>^ get() { return Phosphorous::Thalassa; }};
			static property Dai<Phosphorous^, Sulfur^>^ Titan { Dai<Phosphorous^, Sulfur^>^ get() { return Sulfur::Titan; }};
			static property Edge<Sulfur^, Magnesium^, Chlorine^>^ Ferdinand { Edge<Sulfur^, Magnesium^, Chlorine^>^ get() { return Argon::Ferdinand; }};
			static property Edge<Sulfur^, Potassium^, Calcium^>^ Deimos { Edge<Sulfur^, Potassium^, Calcium^>^ get() { return Calcium::Deimos; }};
			static property Edge<Sulfur^, Aether^, Magnesium^>^ Telesto { Edge<Sulfur^, Aether^, Magnesium^>^ get() { return Argon::Telesto; }};
			static property Edge<Sulfur^, Coronium^, Argon^>^ Pluto { Edge<Sulfur^, Coronium^, Argon^>^ get() { return Scandium::Pluto; }};
			static property Edge<Sulfur^, Argon^, Coronium^>^ Psamathe { Edge<Sulfur^, Argon^, Coronium^>^ get() { return Scandium::Psamathe; }};
			static property Edge<Sulfur^, Aether^, Iron^>^ Io { Edge<Sulfur^, Aether^, Iron^>^ get() { return Iron::Io; }};
			static property Dai<Sulfur^, Aether^>^ Jupiter { Dai<Sulfur^, Aether^>^ get() { return Vanadium::Jupiter; }};
			static property Edge<Chlorine^, Woof^, Meow^>^ Pallene { Edge<Chlorine^, Woof^, Meow^>^ get() { return Qiao::Pallene; }};
			static property Dai<Aether^, Iron^>^ Amalthea { Dai<Aether^, Iron^>^ get() { return Nickel::Amalthea; }};
			static property Dai<Aether^, Zinc^>^ Proteus { Dai<Aether^, Zinc^>^ get() { return Germanium::Proteus; }};
			static property Dai<Argon^, Aluminium^>^ Adrastea { Dai<Argon^, Aluminium^>^ get() { return Copper::Adrastea; }};
			static property Edge<Argon^, Zinc^, Aluminium^>^ Neso { Edge<Argon^, Zinc^, Aluminium^>^ get() { return Zinc::Neso; }};
			static property Edge<Argon^, Nickel^, Arsenic^>^ Mundilfari { Edge<Argon^, Nickel^, Arsenic^>^ get() { return Hiss::Mundilfari; }};
			static property Edge<Argon^, Woof^, Nickel^>^ Valetudo { Edge<Argon^, Woof^, Nickel^>^ get() { return Woof::Valetudo; }};
			static property Dai<Argon^, Blong^>^ Margaret { Dai<Argon^, Blong^>^ get() { return Qiao::Margaret; }};
			static property Edge<Dysnomium^, Scandium^, Calcium^>^ Despina { Edge<Dysnomium^, Scandium^, Calcium^>^ get() { return Titanium::Despina; }};
			static property Edge<Dysnomium^, Chromium^, Manganese^>^ Sao { Edge<Dysnomium^, Chromium^, Manganese^>^ get() { return Arsenic::Sao; }};
			static property Edge<Potassium^, Scandium^, Vanadium^>^ Himalia { Edge<Potassium^, Scandium^, Vanadium^>^ get() { return Manganese::Himalia; }};
			static property Edge<Scandium^, Potassium^, Vanadium^>^ Ganymede { Edge<Scandium^, Potassium^, Vanadium^>^ get() { return Manganese::Ganymede; }};
			static property Edge<Titanium^, Sulfur^, Vanadium^>^ Mars { Edge<Titanium^, Sulfur^, Vanadium^>^ get() { return Chromium::Mars; }};
			static property Edge<Titanium^, Coronium^, Vanadium^>^ Sycorax { Edge<Titanium^, Coronium^, Vanadium^>^ get() { return Chromium::Sycorax; }};
			static property Edge<Vanadium^, Sulfur^, Titanium^>^ Puck { Edge<Vanadium^, Sulfur^, Titanium^>^ get() { return Chromium::Puck; }};
			static property Edge<Vanadium^, Dysnomium^, Titanium^>^ Belinda { Edge<Vanadium^, Dysnomium^, Titanium^>^ get() { return Chromium::Belinda; }};
			static property Edge<Vanadium^, Manganese^, Chromium^>^ Mercury { Edge<Vanadium^, Manganese^, Chromium^>^ get() { return Cobalt::Mercury; }};
			static property Dai<Vanadium^, Chromium^>^ Larissa { Dai<Vanadium^, Chromium^>^ get() { return Cobalt::Larissa; }};
			static property Dai<Vanadium^, Manganese^>^ Rosalind { Dai<Vanadium^, Manganese^>^ get() { return Manganese::Rosalind; }};
			static property Dai<Manganese^, Vanadium^>^ Mab { Dai<Manganese^, Vanadium^>^ get() { return Manganese::Mab; }};
			static property Dai<Manganese^, Cobalt^>^ Thebe { Dai<Manganese^, Cobalt^>^ get() { return Arsenic::Thebe; }};
			static property Dai<Cobalt^, Sulfur^>^ Mimas { Dai<Cobalt^, Sulfur^>^ get() { return Meow::Mimas; }};
			static property Edge<Nickel^, Argon^, Natrium^>^ Neith { Edge<Nickel^, Argon^, Natrium^>^ get() { return Zinc::Neith; }};
			static property Edge<Nickel^, Argon^, Zinc^>^ Callisto { Edge<Nickel^, Argon^, Zinc^>^ get() { return Zinc::Callisto; }};
			static property Edge<Nickel^, Meow^, Woof^>^ Paaliaq { Edge<Nickel^, Meow^, Woof^>^ get() { return Blong::Paaliaq; }};
			static property Dai<Nickel^, Hiss^>^ Phoebe { Dai<Nickel^, Hiss^>^ get() { return Hiss::Phoebe; }};
			static property Dai<Nickel^, Woof^>^ Rhea { Dai<Nickel^, Woof^>^ get() { return Blong::Rhea; }};
			static property Dai<Nickel^, Meow^>^ Ljiraq { Dai<Nickel^, Meow^>^ get() { return Blong::Ljiraq; }};
			static property Dai<Zinc^, Argon^>^ Venus { Dai<Zinc^, Argon^>^ get() { return Zinc::Venus; }};
			static property Dai<Arsenic^, Hiss^>^ KuiperBelt { Dai<Arsenic^, Hiss^>^ get() { return Hiss::KuiperBelt; }};
			static property Edge<Arsenic^, Woof^, Meow^>^ Earth { Edge<Arsenic^, Woof^, Meow^>^ get() { return Meow::Earth; }};
			static property Edge<Arsenic^, Woof^, Yttrium^>^ Bianca { Edge<Arsenic^, Woof^, Yttrium^>^ get() { return Elements::Quaternion::Bianca; }};
			static property Dai<Hiss^, Nucleon^>^ Daphnis { Dai<Hiss^, Nucleon^>^ get() { return Woof::Daphnis; }};
			static property Dai<Hiss^, Argon^>^ Setebos { Dai<Hiss^, Argon^>^ get() { return Hiss::Setebos; }};
			static property Dai<Hiss^, Arsenic^>^ Ophelia { Dai<Hiss^, Arsenic^>^ get() { return Hiss::Ophelia; }};
			static property Dai<Woof^, Nickel^>^ Kiviuq { Dai<Woof^, Nickel^>^ get() { return Blong::Kiviuq; }};
			static property Dai<Woof^, Meow^>^ Narvi { Dai<Woof^, Meow^>^ get() { return Blong::Narvi; }};
			static property Edge<Woof^, Argon^, Nickel^>^ Sun { Edge<Woof^, Argon^, Nickel^>^ get() { return Woof::Sun; }};
			static property Edge<Woof^, Meow^, Nickel^>^ Cressida { Edge<Woof^, Meow^, Nickel^>^ get() { return Blong::Cressida; }};
			static property Dai<Woof^, Blong^>^ Methone { Dai<Woof^, Blong^>^ get() { return Qiao::Methone; }};
			static property Dai<Meow^, Woof^>^ Tarvos { Dai<Meow^, Woof^>^ get() { return Blong::Tarvos; }};
			static property Dai<Meow^, Nickel^>^ Siarnaq { Dai<Meow^, Nickel^>^ get() { return Blong::Siarnaq; }};
			static property Edge<Meow^, Woof^, Nickel^>^ Skathi { Edge<Meow^, Woof^, Nickel^>^ get() { return Blong::Skathi; }};
			static property Edge<Meow^, Qiao^, Blong^>^ Trinculo { Edge<Meow^, Qiao^, Blong^>^ get() { return Yttrium::Trinculo; }};
			static property Dai<Blong^, Argon^>^ Stephano { Dai<Blong^, Argon^>^ get() { return Qiao::Stephano; }};
			static property Dai<Blong^, Meow^>^ Epimetheus { Dai<Blong^, Meow^>^ get() { return Qiao::Epimetheus; }};
			static property Edge<Blong^, Meow^, Qiao^>^ Bestla { Edge<Blong^, Meow^, Qiao^>^ get() { return Yttrium::Bestla; }};
			static property Dai<Qiao^, Blong^>^ Perdita { Dai<Qiao^, Blong^>^ get() { return Yttrium::Perdita; }};
			static property Edge<Qiao^, Blong^, Meow^>^ Portia { Edge<Qiao^, Blong^, Meow^>^ get() { return Yttrium::Portia; }};
			static property Dai<Yttrium^, Woof^>^ Fornjot { Dai<Yttrium^, Woof^>^ get() { return Elements::Quaternion::Fornjot; }};
			static property Dai<Elements::Quaternion^, Blong^>^ Jarnsaxa { Dai<Elements::Quaternion^, Blong^>^ get() { return Qiong::Jarnsaxa; }};
			static property Edge<Elements::Quaternion^, Blong^, Qiao^>^ Hyrrokkin { Edge<Elements::Quaternion^, Blong^, Qiao^>^ get() { return Qiong::Hyrrokkin; }};
			*/
		};
	}
}
