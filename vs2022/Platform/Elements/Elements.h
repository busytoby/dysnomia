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
			static property Quark<Boron^, Boron^, Fluorine^>^ Sun { Quark<Boron^, Boron^, Fluorine^>^ get() { return Neon::Sun; }};
			static property Quark<Beryllium^, Carbon^, Boron^>^ Uranus { Quark<Beryllium^, Carbon^, Boron^>^ get() { return Oxygen::Uranus; }};
			static property Quark<Fluorine^, Boron^, Carbon^>^ Neptune { Quark<Fluorine^, Boron^, Carbon^>^ get() { return Fluorine::Neptune; }};
			static property Poly<Lithium^, Fluorine^>^ Pluto { Poly<Lithium^, Fluorine^>^ get() { return Fluorine::Pluto; }};
			static property Quark<Magnesium^, Fluorine^, Natrium^>^ Saturn { Quark<Magnesium^, Fluorine^, Natrium^>^ get() { return Magnesium::Saturn; }};
			static property Quark<Aluminium^, Carbon^, Helium^>^ Mars { Quark<Aluminium^, Carbon^, Helium^>^ get() { return Aluminium::Mars; }};
		};

		public ref class Constants abstract sealed {
		public:
			static List<BigInteger>^ Evidences;
			static property BigInteger Last { BigInteger get() { return Evidences[Evidences->Count - 1]; }}
			static property BigInteger Mu { BigInteger get() { return Objects::Uranus->N->Rod->Barn; }};
			static property BigInteger Rho { BigInteger get() {	return Objects::Pluto->Mu.Value->Mu.Value->Beta->Manifold; }};
			static property BigInteger Psi { BigInteger get() { return Objects::Neptune->N->Psi; }}
			static property BigInteger Nu { BigInteger get() { return BigInteger::Add(Objects::Sun->N->N->Cone->Manifold, Objects::Sun->R->N->Rod->Manifold); }}
			static property BigInteger Eta { BigInteger get() { return Objects::Neptune->N->Ring; }}
			static property BigInteger Sigma { BigInteger get() { return Objects::Sun->L->Mu.Key->Pi->N->Rod->Base; }}
			static property BigInteger Upsilon { BigInteger get() { return Objects::Neptune->L->Rho.Key->Cone->Signal; }}
			static property BigInteger Tau { BigInteger get() { return Objects::Mars->L->Mu.Value->Manifold; }}

			static Constants() {
				Evidences = gcnew List<BigInteger>();
			}
		};

		public ref class Laws abstract sealed {
		public:
			static property BigInteger First { BigInteger get() { return BigInteger::Add(Constants::Rho, Constants::Evidences[0]); }};
			static property BigInteger Second { BigInteger get() { return BigInteger::ModPow(Constants::Rho, Constants::Mu, First); }};
			static property BigInteger Third { BigInteger get() { return BigInteger::ModPow(First, Constants::Psi, Constants::Nu); }};
			static property BigInteger Fourth { BigInteger get() { return BigInteger::ModPow(Constants::Last, Constants::Psi, Constants::Eta); }};
			static property BigInteger Fifth { BigInteger get() { return BigInteger::Add(Constants::Upsilon, Constants::Rho); }};
			static property BigInteger Sixth { BigInteger get() { return BigInteger::ModPow(Constants::Upsilon, Constants::Sigma, Third); }};
			static property BigInteger Seventh { BigInteger get() { return BigInteger::ModPow(Sixth, Constants::Eta, Constants::Upsilon); }};
			static property BigInteger Eighth { BigInteger get() { return BigInteger::ModPow(Constants::Sigma, Seventh, Constants::Last); }};
		};
	}
}
