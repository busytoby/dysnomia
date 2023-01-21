#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hadron : public Dynamic {
			private:
			public:
				static Hadron^ MuB;
				virtual property Double Mass { Double get() override { if (Barn == 0) return .5; else return 1; }};

				Hadron() : Dynamic() {
					if (MuB == nullptr) MuB = this;
				};
				Hadron(Dynamic^ Beta) : Dynamic((Dynamic%)Beta) {};
			};
		}
	}
}