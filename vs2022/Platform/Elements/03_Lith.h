#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lith : public Dai<Hadron^, Hel^> {
			public:
				Lith(Hadron^ Beta) {
					Add(Beta, gcnew Hel());
				}
			};
		}
	}
}
