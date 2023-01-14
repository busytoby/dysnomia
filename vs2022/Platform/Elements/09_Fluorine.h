#pragma once
#include "06_Carbon.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;
using Dysnomia::Math;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Fluorine : public Dai<Carbon^, Beryllium^>
			{
			public:
				static Quark<Fluorine^, Boron^, Carbon^>^ Neptune;
				static Dai<Lithium^, Fluorine^>^ Tethys;
				static Quark<Boron^, Fluorine^, Carbon^>^ Laodemeia;

				Boron^ Pi;

				BigInteger Base;
				BigInteger Xi;
				property BigInteger Psi { BigInteger get() { return Math::ModPow(Base, Pi->Signal, Math::Prime); }};

				Fluorine(Carbon^ that) {
					this->Epsilon = Math::Random();
					if(Tethys == nullptr) Tethys = gcnew Dai<Lithium^, Fluorine^>();

					Pi = Add(that);
					if (Neptune == nullptr) Neptune = gcnew Quark<Fluorine^, Boron^, Carbon^>(this, Pi, that);
					if (Laodemeia == nullptr) Laodemeia = gcnew Quark<Boron^, Fluorine^, Carbon^>(Pi, this, that);
				}

				Boron^ Add(Carbon^ that) {
					Beryllium^ Alpha = gcnew Beryllium();
					Boron^ Pi = Add(that, Alpha);
					return Pi;
				}

				Boron^ Add(Carbon^ that, Beryllium^ Alpha) {
					Hydrogen^ Beta = gcnew Hydrogen();
					Affinity^ R = gcnew Affinity(Alpha->Phi->N, Beta);
					Dai<Carbon^, Beryllium^>::Add(that, Alpha);
					Boron^ Pi = gcnew Boron(R, Alpha, Beta);
					Tethys->Add(that->Phi, this);
					Xi = Math::ModPow(Beta->Signal, that->Channel, Math::Prime);
					Beta->Tau = Beta->Avail(Xi);
					Base = Math::ModPow(Beta->Tau, Alpha->Secret, Math::Prime);
					return Pi;
				}
			};
		}
	}
}
