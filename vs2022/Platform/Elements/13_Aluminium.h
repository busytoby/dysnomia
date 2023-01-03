#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Quark<Beryllium^, Beryllium^, Beryllium^> {
			private:
				Complex _Temperature;
			public:
				Nitrogen^ Rho;
				Lithium^ Phi;

				property Complex Temperature { Complex get() {
					if (_Temperature == 0)
						_Temperature = (Complex)Rho->L->Dynamo * (Complex)Rho->R->Dynamo;
					return _Temperature;
				}}
				property Complex Wight { Complex get() { return (Complex)N->Rod->Signal / (Complex)R->Cone->Manifold; }};

				Aluminium(Beryllium^ N, Magnesium^ M, Beryllium^ L) : Quark(N, M->Upsilon->N, L) {
					_Temperature = 0;
					Rho = gcnew Nitrogen(M->Rho->N, gcnew Hydrogen(), M->Rho->R);
					Phi = gcnew Lithium(M->Rho->N->Rod, N->Cone, L->Rod);
				};
			};
		}
	}
}
