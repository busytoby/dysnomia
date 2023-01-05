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
				Boron^ Pi;

				Fluorine(Carbon^ that) {
					Xi = gcnew Lithium();
					Beta = gcnew Hydrogen();

					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					Xi->Zeta(Pi, that);
					that->Xi->Zeta(Pi, this);
					Xi->Zeta(Beta, Pi);				
					Add(that, Alpha);
					that->Omicron->Zeta(Alpha->Cone, Alpha->Beta);
				}
			};
		}
	}
}
