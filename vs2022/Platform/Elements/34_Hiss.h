#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hiss : public Edge<Argon^, Nickel^, Arsenic^>
			{
			public:
				static Dai<Arsenic^, Hiss^>^ KuiperBelt;
				static Dai<Hiss^, Arsenic^>^ Ophelia;
				static Dai<Nickel^, Hiss^>^ Phoebe;
				static Dai<Hiss^, Argon^>^ Setebos;
				static Edge<Argon^, Nickel^, Arsenic^>^ Mundilfari;

				Hiss(Arsenic^ Beta, Nickel^ Alpha, Argon^ Sigma) : Edge(Sigma, Alpha, Beta) {
					if (KuiperBelt == nullptr) KuiperBelt = gcnew Dai<Arsenic^, Hiss^>();
					KuiperBelt->Add(Beta, this);
					if (Ophelia == nullptr) Ophelia = gcnew Dai<Hiss^, Arsenic^>();
					Ophelia->Add(this, Beta);
					if (Mundilfari == nullptr) Mundilfari = this;
					if (Phoebe == nullptr) Phoebe = gcnew Dai<Nickel^, Hiss^>();
					Phoebe->Add(Alpha, this);
					if (Setebos == nullptr) Setebos = gcnew Dai<Hiss^, Argon^>();
					Setebos->Add(this, Sigma);
				};
			};
		}
	}
}