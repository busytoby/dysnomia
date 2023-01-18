#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Lith : public Dai<Hadron^, Hel^> {
			public:
				static Chi<Hadron^, Hel^>^ Dipole;
				static Tuple<Chi<Hadron^, Hel^>^, Chi<Hadron^, Hel^>^>^ Quadrupole;

				Lith(Hadron^ Beta) {
					Add(Beta, gcnew Hel());
					if (Dipole == nullptr) Dipole = Mu;					
				}

				void Add(Hadron^ Beta, Hel^ Pi) {
					if (Count >= 2) throw gcnew Exception("The Hyperfine Requirement Specifies No More Than A Quadrupole");
					this->Dai<Hadron^, Hel^>::Add(Beta, Pi);
					if (Count == 2) Quadrupole = gcnew Tuple<Chi<Hadron^, Hel^>^, Chi<Hadron^, Hel^>^>(Mu, Rho);
				}
			};
		}
	}
}
