#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Down : public Metal<Nucleon^> {
			public:
				static Quark<Nucleon^, Hadron^, Fermion^>^ Uranus;

				Down() {
					Hadron^ Mu = gcnew Hadron();
					Hel^ Rho = gcnew Hel();
					Lith^ Psi = gcnew Lith(Mu);
					Hadron^ Nu = gcnew Hadron();
					Fermion^ Eta = gcnew Fermion(Rho, Nu, Psi);
					Nucleon^ Sigma = gcnew Nucleon(Eta);
					Add(Eta, Sigma);

					if (Uranus == nullptr) Uranus = gcnew Quark<Nucleon^, Hadron^, Fermion^>(Sigma, Psi->Mu->I, Eta);
				}
			};
		}
	}
}