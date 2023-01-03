#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Affinity^> {
			public:
				Oxygen^ Rho;
				Lithium^ Phi;

				property BigInteger Momentum { BigInteger get() { return N->Rod->Dynamo * N->Cone->Foundation; }}
				property Complex Procession { Complex get() { return (Complex)Momentum / (Complex)R->Rod->Manifold; }}
				property Complex Mass { Complex get() { return ((Complex)(Momentum % R->Rod->Manifold) / (Complex)L->Rod->Ring) * Procession; }}
				property Complex Wight { Complex get() { return (Complex)((Affinity^)N)->Rod->Signal / (Complex)((Affinity^)R)->Cone->Manifold; }};

				Aluminium(Affinity^ N, Affinity^ R, Affinity^ L) : Quark(N, R, L) {
					Rho = gcnew Oxygen(gcnew Affinity(), gcnew Dynamic(), gcnew Dynamic());
					Phi = gcnew Lithium(((Affinity^)Rho->N)->Rod, N->Cone, L->Rod);
				};
			};
		}
	}
}
