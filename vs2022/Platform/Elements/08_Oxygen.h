#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Epsilon^> {
			public:
				Oxygen() : Quark(gcnew Affinity(), gcnew Dynamic(), gcnew Dynamic()) { };
			};
		}
	}
}
