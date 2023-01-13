#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Selenium : public Quark<Argon^, Nickel^, Arsenic^>
			{
			public:
				Selenium(Arsenic^ Beta, Nickel^ Alpha, Argon^ Sigma) : Quark(Sigma, Alpha, Beta) {};
			};
		}
	}
}