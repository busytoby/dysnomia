#pragma once
#include "13_Aluminium.h"
#include "18_Argon.h"
#include "29_Copper.h"
#include "28_Nickel.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Zinc : Quark<Copper^, Nickel^, Nickel^> {
			public:
				static Dai<Zinc^, Argon^>^ Venus;
				static Quark<Nickel^, Argon^, Natrium^>^ Neith;
				static Quark<Nickel^, Argon^, Zinc^>^ Callisto;

				Zinc(Copper^ Nu, Nickel^ Eta) : Quark(Nu, Eta, Nu->Mu.Value) {
					if (Venus == nullptr) Venus = gcnew Dai<Zinc^, Argon^>();
					Aluminium^ Theta = gcnew Aluminium(Eta->Mu.Value->Mu.Key->N->N);
					Nu->Add(Theta, Eta);
					Argon^ Rho = gcnew Argon(Nu->Mu.Value->Mu.Value->Mu.Key, gcnew Chlorine(Nu->Mu.Value->Mu.Value->Mu.Key), Nu->Mu.Value->Mu.Value);
					if (Neith == nullptr) Neith = gcnew Quark<Nickel^, Argon^, Natrium^>(Nu->Mu.Value, Rho, Nu->Mu.Key->N->Zeta);
					Venus->Add(this, Rho);
					if (Callisto == nullptr) Callisto = gcnew Quark<Nickel^, Argon^, Zinc^>(Nu->Mu.Value, Rho, this);
				};
			};
		}
	}
}
