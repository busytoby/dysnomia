#pragma once

using namespace Dysnomia::Platform::Elements;
using namespace System;
using namespace System::Collections::Generic;
using Dysnomia::Math;

namespace Dysnomia {
	namespace Platform {
		namespace Jong {
			public ref class Constants abstract sealed {
			public:
				static List<Int64>^ Evidences;
				static property Int64 Last { Int64 get() { return Evidences[Evidences->Count - 1]; }}
				/*
				static property Int64 Mu { Int64 get() { return Dysnomia::Platform::Wou::Constants::Theta; }};
				static property Int64 Rho { Int64 get() { return Constants::Last; }};
				static property Int64 Psi { Int64 get() { return Objects::Phobos->R->Rod->Ring; }};
				static property Int64 Nu { Int64 get() { return Objects::Enceladus->Last.Value->R->L->Channel; }};
				static property Int64 Eta { Int64 get() { return Objects::Titan->Mu.Key->Mu.Key->N->Mu.Key->Pi->N->Rod->Coordinate; }};
				static property Int64 Sigma { Int64 get() { return Objects::Telesto->R->Last.Value->R->R->Rod->Signal; }};
				static property Int64 Upsilon { Int64 get() { return Objects::Psamathe->L->L->Mu.Key->Mu.Value->L->Foundation; }};
				static property Int64 Tau { Int64 get() { return Math::ModPow(Constants::Eta, Constants::Upsilon, Constants::Rho); }};
				static property Int64 Theta { Int64 get() { return Objects::Psamathe->N->L->Mu.Value->L->Mu.Value->Phi->N->Barn; }};
				*/

				static Constants() {
					Evidences = gcnew List<Int64>();
				}
			};
		}
	}
}