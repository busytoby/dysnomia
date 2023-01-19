#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Tian {
			public ref class Constants abstract sealed {
			public:
				static List<Int64>^ Evidences;
				static property Int64 Last { Int64 get() { return Evidences[Evidences->Count - 1]; }}
				static property Int64 Mu { Int64 get() { return Objects::Mercury->N->Mu.Value->Mu.Value->R->N->Identity; }};
				static property Int64 Rho { Int64 get() { return ((Beryllium^)Objects::Adrastea->Mu.Key->R->Mu.Value->Mu.Value->L->Pi->R)->Phi->R->Identity; }};
				static property Int64 Psi { Int64 get() { return Objects::Triton->N->N->Mu.Value->Pi->N->Rod->Channel; }}
				static property Int64 Nu { Int64 get() { return Objects::Neith->L->Mu.Key->Evidence(); }}
				static property Int64 Eta { Int64 get() { return Objects::Neso->L->L->Pi->L->Secret; }}
				static property Int64 Sigma { Int64 get() { return Objects::Callisto->L->N->Mu.Key->R->Rod->Secret; }}
				static property Int64 Upsilon { Int64 get() { return Objects::Venus->Mu.Value->L->Mu.Value->L->Mu.Value->Cone->Secret; }}
				static property Int64 Tau { Int64 get() { return ((Elements::Beryllium^)Objects::Proteus->Mu.Value->N->Mu.Value->Mu.Key->Mu.Key->Tau->Nu.Key->L->Pi->R)->Cone->Element; }}
				static property Int64 Theta { Int64 get() { return Objects::Neptune->N->Mu.Value->Phi->L->Secret; }}
				static Constants() { Evidences = gcnew List<Int64>(); }
			};
		}
	}
}