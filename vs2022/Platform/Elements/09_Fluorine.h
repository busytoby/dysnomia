#pragma once
#include "06_Carbon.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fluorine : Dai<Carbon^, Beryllium^>
			{
			private:
				BigInteger _Ring;
			public:
				static Quark<Fluorine^, Boron^, Carbon^>^ Neptune;
				static Dai<Lithium^, Fluorine^>^ Tethys;

				Lithium^ Xi;

				property BigInteger Psi { BigInteger get() { return _Ring; }};
				property BigInteger Ring { BigInteger get() { return BigInteger::Divide(_Ring, Count); }};

				Fluorine(Carbon^ that) {
					_Ring = 0;
					this->Epsilon = Math::Random();
					Xi = gcnew Lithium();
					Xi->Zeta(this, that);
					if(Tethys == nullptr) Tethys = gcnew Dai<Lithium^, Fluorine^>();

					Boron^ Pi = Add(that);
					if (Neptune == nullptr) Neptune = gcnew Quark<Fluorine^, Boron^, Carbon^>(this, Pi, that);
					Xi->Zeta(that, Pi);
					that->Xi->Zeta(this, Pi);
				}

				Boron^ Add(Carbon^ that) {
					Beryllium^ Alpha = gcnew Beryllium();
					return Add(that, Alpha);
				}

				Boron^ Add(Carbon^ that, Beryllium^ Alpha) {
					Hydrogen^ Beta = gcnew Hydrogen();
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Dai<Carbon^, Beryllium^>::Add(that, Alpha);
					Boron^ Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					Tethys->Add(Xi, this);
					Xi->Zeta(Beta, Pi);
					_Ring = BigInteger::Add(_Ring, R->Cone->Ring);
					return Pi;
				}
			};
		}
	}
}
