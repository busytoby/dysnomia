#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fluorine : Poly<Carbon^, Beryllium^>
			{
			public:
				Hydrogen^ Beta;
				Lithium^ Xi;

				Fluorine(Carbon^ C) {
					Xi = gcnew Lithium();
					Beta = gcnew Hydrogen();

					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Boron^ Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					Xi->Zeta(Beta, Pi);
					Xi->Zeta(Pi, C);
					C->Xi->Zeta(Pi, this);
					Add(C, Alpha);
				}
			};
		}
	}
}
