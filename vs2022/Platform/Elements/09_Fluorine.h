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
				Lithium^ Xi;

				Fluorine(Carbon^ that) {
					Xi = gcnew Lithium();

					Boron^ Pi = Add(that);
					that->Xi->Zeta(Pi, this);
					Xi->Zeta(Pi, that);
				}

				Boron^ Add(Carbon^ that) {
					Hydrogen^ Beta = gcnew Hydrogen();
					Beryllium^ Alpha = gcnew Beryllium();
					Add(that, Alpha);
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Boron^ Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					that->Omicron->Zeta(Alpha->Beta, Alpha->Cone);
					Xi->Zeta(Beta, Pi);
					return Pi;
				}
			};
		}
	}
}
