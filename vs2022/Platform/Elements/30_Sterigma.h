#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Sterigma : public Dai<Peridium^, Conidium^> {
			public:
				static Dai<Ramus^, Sterigma^>^ Venus;
				static Edge<Ramus^, Sterigma^, Conidium^>^ Neith;
				static Edge<Ramus^, Sterigma^, Perithecium^>^ Callisto;
				static Dai<Conidium^, Sterigma^>^ Neso;

				Sterigma(Peridium^ Eta, Conidium^ Nu) {
/*
					if (Venus == nullptr) Venus = gcnew Dai<Sterigma^, Argon^>();
					Aluminium^ Theta = gcnew Aluminium(Eta->Mu.Value->Mu.Key->N->N);
					Nu->Add(Theta, Eta);
					Argon^ Rho = gcnew Argon(Nu->Mu.Value->Mu.Value->Mu.Key, gcnew Chlorine(Nu->Mu.Value->Mu.Value->Mu.Key), Nu->Mu.Value->Mu.Value);
					if (Neith == nullptr) Neith = gcnew Edge<Nickel^, Argon^, Natrium^>(Nu->Mu.Value, Rho, Nu->Mu.Key->N->Zeta);
					Venus->Add(this, Rho);
					if (Callisto == nullptr) Callisto = gcnew Edge<Nickel^, Argon^, Sterigma^>(Nu->Mu.Value, Rho, this);
					if (Neso == nullptr) Neso = gcnew Edge<Argon^, Sterigma^, Aluminium^>(Rho, this, Theta);
					*/
				};
			};
		}
	}
}
