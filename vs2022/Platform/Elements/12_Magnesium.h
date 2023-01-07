#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Magnesium : public Poly<Carbon^, Fluorine^>
			{
			public:
				static Quark<Magnesium^, Fluorine^, Natrium^>^ Saturn;

				Magnesium(Natrium^ S, Fluorine^ K) {
					this->Epsilon = Math::ModPow(K->Mu.Value->Cone->Signal, S->Mu.Key->N->Rod->Channel, Math::Prime);
					Add(S->Mu.Value, S->Pi->N);
					Add(S->Rho.Value, K);
					if (Saturn == nullptr) Saturn = gcnew Quark<Magnesium^, Fluorine^, Natrium^>(this, K, S);

					Mu.Value->Xi->Zeta(S->Rho.Key, S->Rho.Value);
					Mu.Value->Xi->Zeta(S->Rho.Value->Omicron, S->Rho.Value);
					Mu.Value->Xi->Zeta(S->Rho.Value->Pi, S->Rho.Value);

					BigInteger Rho = S->Mu.Key->N->Rod->Barn;
					BigInteger Upsilon = K->Mu.Value->Cone->Manifold;
					BigInteger Ohm = S->Rho.Key->Barn;
					BigInteger Xi = ((Boron^)K->Xi->Rho.Value)->N->Mu;
					Beryllium^ Phi = gcnew Beryllium(Rho, Upsilon, Ohm, Xi);
					K->Add(S->Mu.Value, Phi);

					Rho = S->Mu.Key->N->Rod->Manifold;
					Upsilon = K->Mu.Value->Cone->Barn;
					Ohm = S->Rho.Key->Barn;
					Xi = ((Boron^)K->Xi->Rho.Value)->N->Xi;
					Phi = gcnew Beryllium(Rho, Upsilon, Ohm, Xi);
					K->Add(S->Rho.Value, Phi);
				}
			};
		}
	}
}
