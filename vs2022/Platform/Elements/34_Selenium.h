#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Selenium : public Quark<Argon^, Nickel^, Arsenic^>
			{
			public:
				static Dai<Arsenic^, Selenium^>^ KuiperBelt

				Selenium(Arsenic^ Beta, Nickel^ Alpha, Argon^ Sigma) : Quark(Sigma, Alpha, Beta) {
					if (KuiperBelt == nullptr) KuiperBelt = gcnew Dai(Beta, this);
				};
			};
		}
	}
}