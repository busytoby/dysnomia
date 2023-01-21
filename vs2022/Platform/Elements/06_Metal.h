#pragma once

using namespace System;

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
