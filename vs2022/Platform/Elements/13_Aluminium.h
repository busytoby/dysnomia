#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Affinity^> {
			public:
				Nitrogen^ Rho;
				Lithium^ Phi;

				property BigInteger Momentum { BigInteger get() { return N->Rod->Dynamo * N->Cone->Foundation; }}
				property Complex Procession { Complex get() { return (Complex)Momentum / (Complex)R->Rod->Manifold; }}
				property Complex Mass { Complex get() { return ((Complex)(Momentum % R->Rod->Manifold) / (Complex)L->Rod->Ring); }}
				property Complex Wight { Complex get() { return (Complex)((Affinity^)N)->Rod->Signal / (Complex)((Affinity^)R)->Cone->Manifold; }};

				Aluminium(Affinity^ N, Magnesium^ M, Affinity^ L) : Quark(N, (Affinity^)M->Upsilon->N, L) {
					Rho = gcnew Nitrogen(((Affinity^)M->Rho->N), gcnew Dynamic(), (Dynamic^)M->Rho->R);
					Phi = gcnew Lithium(((Affinity^)M->Rho->N)->Rod, N->Cone, L->Rod);
				};
			};
		}
	}
}
