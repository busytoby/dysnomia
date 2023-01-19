#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Xun {
			public ref class Constants abstract sealed {
			public:
				static List<Int64>^ Evidences;
				static property Int64 Last { Int64 get() { return Evidences[Evidences->Count - 1]; }}
				static property Int64 Mu { Int64 get() { return Objects::Sun->N->Mu.Key->N->N->N->N->Mu.Key->Pi->N->Rod->Base; }};
				static property Int64 Rho { Int64 get() { return Objects::Valetudo->N->N->N->N->Mu.Key->Pi->N->Cone->Base; }};
				static property Int64 Psi { Int64 get() { return Objects::Sun->L->Mu.Value->Psi.Value->R->R->Cone->Manifold; }};
				static property Int64 Nu { Int64 get() { return Objects::Sun->R->N->R->Rho.Value->Epsilon; }};
				static property Int64 Eta { Int64 get() { return Objects::Mimas->Mu.Key->Mu.Key->Psi.Value->Mu.Value->N->Zeta->Pi->R->Ring; }};
				static property Int64 Sigma { Int64 get() { return Objects::Perdita->Mu.Key->Mu.Key->Mu.Key->N->N->N->L->Phi->R->Ring; }};
				static property Int64 Upsilon { Int64 get() { return Objects::Jarnsaxa->Mu.Value->N->Beta->Mu.Value->Mu.Key->Mu.Key->Tau->Mu.Value->Evidence; }};

				static Constants() { Evidences = gcnew List<Int64>(); }
			};
		}
	}
}