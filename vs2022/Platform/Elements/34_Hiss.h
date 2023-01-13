#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hiss : public Quark<Argon^, Nickel^, Arsenic^>
			{
			public:
				static Dai<Arsenic^, Hiss^>^ KuiperBelt;
				static Dai<Nickel^, Hiss^>^ Phoebe;
				static Quark<Argon^, Nickel^, Arsenic^>^ Mundilfari;

				Hiss(Arsenic^ Beta, Nickel^ Alpha, Argon^ Sigma) : Quark(Sigma, Alpha, Beta) {
					if (KuiperBelt == nullptr) KuiperBelt = gcnew Dai<Arsenic^, Hiss^>();
					KuiperBelt->Add(Beta, this);
					if (Mundilfari == nullptr) Mundilfari = this;
					if (Phoebe == nullptr) Phoebe = gcnew Dai<Nickel^, Hiss^>();
					Phoebe->Add(Alpha, this);
				};
			};
		}
	}
}