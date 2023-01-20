#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			generic <typename T>
			where T : Epsilon
			public ref class Metal : public Dai<Fermion^, T> {
			public:
			};
		}
	}
}
