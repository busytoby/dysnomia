#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Affinity^> {
			public:
				Oxygen^ Rho;
				Lithium^ Eta;

				property Complex Wight { Complex get() { return (Complex)((Affinity^)N)->Rod->Signal / (Complex)((Affinity^)R)->Cone->Manifold; }};

				Aluminium(Affinity^ N, Affinity^ R, Affinity^ L) : Quark(N, R, L) {
					Rho = gcnew Oxygen(gcnew Affinity(), gcnew Dynamic(), gcnew Dynamic());
					Eta = gcnew Lithium(((Affinity^)Rho->N)->Rod, N->Cone, L->Rod);
				};
			};
		}
	}
}
