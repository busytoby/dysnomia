#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Arsenic : public Dai<Manganese^, Cobalt^>{
			public:
				static Dai<Manganese^, Cobalt^>^ Thebe;
				static Quark<Dysnomium^, Chromium^, Manganese^>^ Sao;

				Arsenic(Cobalt^ Zeta, BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Xi) {
					Phosphorous^ Alpha = gcnew Phosphorous(Zeta->Mu.Key->Mu.Key->N,	Rho, Upsilon, Ohm, Xi);
					Calcium^ Delta = gcnew Calcium(Alpha);
					Scandium^ Phi = gcnew Scandium(Delta->Mu.Value);
					Titanium^ Iota = gcnew Titanium(Delta, Phi);
					Vanadium^ Kappa = gcnew Vanadium(Iota);
					Chromium^ Lambda = gcnew Chromium(Kappa);
					Manganese^ Chi = gcnew Manganese(Lambda);
					Add(Chi, Zeta);
					if (Thebe == nullptr) Thebe = this;
					Copper::Adrastea->Add(Chi->L->Mu.Key, Chi->L->Mu.Key->N->N);
					if (Sao == nullptr) Sao = gcnew Quark<Dysnomium^, Chromium^, Manganese^>(Lambda->Mu.Key->Xi->L, Zeta->Mu.Value, Chi);
				}
			};
		}
	}
}
