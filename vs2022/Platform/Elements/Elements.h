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

using namespace System;

namespace Dysnomia {
	namespace Platform {
		public ref class Constants abstract sealed {
		public:
			static List<BigInteger>^ Evidences;
			static property BigInteger Mu { BigInteger get() { return Elements::Oxygen::Uranus->L->Rod->Barn; }};
			static property BigInteger Rho { BigInteger get() {	return ((Hydrogen^)Fluorine::Pluto[0].Key[0].Key)->Manifold; }};

			static Constants() {
				Evidences = gcnew List<BigInteger>();
			}
		};

		public ref class Laws abstract sealed {
			static property BigInteger First { BigInteger get() { return BigInteger::Add(Constants::Rho, Constants::Evidences[0]); }};
			static property BigInteger Second { BigInteger get() { return BigInteger::ModPow(Constants::Rho, Constants::Mu, First); }};
		};

		public ref class Objects abstract sealed {
		public:
			static property Quark<Boron^, Boron^, Fluorine^>^ Sun { Quark<Boron^, Boron^, Fluorine^>^ get() { return Elements::Neon::Sun; }};
			static property Quark<Hydrogen^, Hydrogen^, Beryllium^>^ Uranus { Quark<Hydrogen^, Hydrogen^, Beryllium^>^ get() { return Elements::Oxygen::Uranus; }};
			static property Quark<Fluorine^, Boron^, Carbon^>^ Neptune { Quark<Fluorine^, Boron^, Carbon^>^ get() { return Elements::Fluorine::Neptune; }};
			static property Poly<Lithium^, Fluorine^>^ Pluto { Poly<Lithium^, Fluorine^>^ get() { return Elements::Fluorine::Pluto; }};
		};
	}
}
