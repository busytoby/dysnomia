#pragma once
#include "13_Aluminium.h"
#include "18_Argon.h"
#include "29_Copper.h"
#include "28_Nickel.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Zinc : public Edge<Copper^, Nickel^, Nickel^> {
			public:
				static Dai<Zinc^, Argon^>^ Venus;
				static Edge<Nickel^, Argon^, Natrium^>^ Neith;
				static Edge<Nickel^, Argon^, Zinc^>^ Callisto;
				static Edge<Argon^, Zinc^, Aluminium^>^ Neso;

				Zinc(Copper^ Nu, Nickel^ Eta) : Edge(Nu, Eta, Nu->Mu.Value) {
					if (Venus == nullptr) Venus = gcnew Dai<Zinc^, Argon^>();
					Aluminium^ Theta = gcnew Aluminium(Eta->Mu.Value->Mu.Key->N->N);
					Nu->Add(Theta, Eta);
					Argon^ Rho = gcnew Argon(Nu->Mu.Value->Mu.Value->Mu.Key, gcnew Chlorine(Nu->Mu.Value->Mu.Value->Mu.Key), Nu->Mu.Value->Mu.Value);
					if (Neith == nullptr) Neith = gcnew Edge<Nickel^, Argon^, Natrium^>(Nu->Mu.Value, Rho, Nu->Mu.Key->N->Zeta);
					Venus->Add(this, Rho);
					if (Callisto == nullptr) Callisto = gcnew Edge<Nickel^, Argon^, Zinc^>(Nu->Mu.Value, Rho, this);
					if (Neso == nullptr) Neso = gcnew Edge<Argon^, Zinc^, Aluminium^>(Rho, this, Theta);
				};
			};
		}
	}
}
