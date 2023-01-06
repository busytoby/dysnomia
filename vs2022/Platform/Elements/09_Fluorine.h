#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fluorine : Poly<Carbon^, Beryllium^>
			{
			private:
				BigInteger _Ring;
			public:
				static Quark<Fluorine^, Boron^, Carbon^>^ Neptune;

				Lithium^ Xi;

				property BigInteger Ring { BigInteger get() { return BigInteger::Divide(_Ring, Count); }};

				Fluorine(Carbon^ that) {
					_Ring = 0;
					Xi = gcnew Lithium();

					Boron^ Pi = Add(that);
					if (Neptune == nullptr) Neptune = gcnew Quark<Fluorine^, Boron^, Carbon^>(this, Pi, that);
					that->Xi->Zeta(this, Pi);
					Xi->Zeta(that, Pi);
				}

				Boron^ Add(Carbon^ that) {
					Hydrogen^ Beta = gcnew Hydrogen();
					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Add(that, Alpha);
					Boron^ Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					that->Omicron->Zeta(Alpha->Cone, Alpha->Beta);
					Xi->Zeta(Beta, Pi);
					_Ring = BigInteger::Add(_Ring, R->Cone->Ring);
					return Pi;
				}
			};
		}
	}
}
