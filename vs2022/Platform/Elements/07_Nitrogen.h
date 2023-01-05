#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nitrogen : public Quark<Affinity^, Hydrogen^, Hydrogen^>
			{
			public:
				Carbon^ C;
				Nitrogen(Affinity^ C, Hydrogen^ Y, Hydrogen^ X) : Quark(gcnew Affinity(X, Y), C->Cone, C->Rod) { };
			};
		}
	}
}
