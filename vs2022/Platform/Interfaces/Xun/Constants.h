#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Xun {
			public ref class Constants abstract sealed {
			public:
				static List<BigInteger>^ Evidences;
				static property BigInteger Last { BigInteger get() { return Evidences[Evidences->Count - 1]; }}
				static property BigInteger Mu { BigInteger get() { return Objects::Sun->N->Mu.Key->N->N->N->N->Mu.Key->Pi->N->Rod->Base; }};
				static property BigInteger Rho { BigInteger get() { return Objects::Valetudo->N->N->N->N->Mu.Key->Pi->N->Cone->Base; }};
				static property BigInteger Psi { BigInteger get() { return Objects::Sun->L->Mu.Value->Psi.Value->R->R->Cone->Manifold; }};
				static property BigInteger Nu { BigInteger get() { return Objects::Sun->R->N->R->Rho.Value->Epsilon; }};
				static property BigInteger Eta { BigInteger get() { return Objects::Mimas->Mu.Key->Mu.Key->Psi.Value->Mu.Value->N->Zeta->Pi->R->Ring; }};
				static property BigInteger Sigma { BigInteger get() { return Objects::Perdita->Mu.Key->Mu.Key->Mu.Key->N->N->N->L->Phi->R->Ring; }};

				static Constants() { Evidences = gcnew List<BigInteger>(); }
			};
		}
	}
}