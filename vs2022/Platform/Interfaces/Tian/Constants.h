#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Tian {
			public ref class Constants abstract sealed {
			public:
				static List<BigInteger>^ Evidences;
				static property BigInteger Last { BigInteger get() { return Evidences[Evidences->Count - 1]; }}
				static property BigInteger Mu { BigInteger get() { return Objects::Mercury->N->Mu.Value->Mu.Value->R->N->Identity; }};
				static property BigInteger Rho { BigInteger get() { return ((Beryllium^)Objects::Adrastea->Mu.Key->R->Mu.Value->Mu.Value->L->Pi->R)->Phi->R->Identity; }};
				static property BigInteger Psi { BigInteger get() { return Objects::Triton->N->N->Mu.Value->Pi->N->Rod->Channel; }}
				static property BigInteger Nu { BigInteger get() { return Objects::Neith->L->Mu.Key->Barn; }}
				static property BigInteger Eta { BigInteger get() { return Objects::Neso->L->L->Pi->L->Secret; }}
				static property BigInteger Sigma { BigInteger get() { return Objects::Callisto->L->N->Mu.Key->R->Rod->Secret; }}
				static property BigInteger Upsilon { BigInteger get() { return Objects::Venus->Mu.Value->L->Mu.Value->L->Mu.Value->Cone->Secret; }}
				static property BigInteger Tau { BigInteger get() { return ((Elements::Beryllium^)Objects::Proteus->Psi.Value->N->Rho.Value->Last.Key->Last.Key->Tau->Nu.Key->L->Pi->R)->Cone->Element; }}
				static property BigInteger Theta { BigInteger get() { return Objects::Neptune->N->Mu.Value->Phi->L->Secret; }}
				static Constants() { Evidences = gcnew List<BigInteger>(); }
			};
		}
	}
}