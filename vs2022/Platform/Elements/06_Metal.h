#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			generic <typename T>
			where T : Epsilon
			public ref class Metal : public Dai<Beryl^, T> {
			public:
				/*
				Helium^ Gamma;
				Lithium^ Phi;
				Boron^ Pi;

				BigInteger Channel;

				Carbon(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Qi) {
					Gamma = gcnew Helium();
					Beryllium^ Alpha = gcnew Beryllium(Rho, Upsilon, Ohm, Qi);
					Affinity^ Beta = gcnew Affinity();
					Phi = gcnew Lithium(gcnew Hydrogen(), Beta->Cone, Beta->Rod);
					Nitrogen^ Iota = gcnew Nitrogen(Phi->N, Alpha, Alpha->Phi->N);
					Pi = gcnew Boron(Iota->R, Iota, Alpha->Phi->N);
					Add(Alpha, Iota);
					this->Epsilon = Math::ModPow(Phi->R->Signal, Phi->L->Channel, Phi->N->Foundation);
					Channel = Math::ModPow(Phi->Base, Pi->Signal, Math::Prime);
				}

				Carbon() {
					Beryllium^ Alpha = gcnew Beryllium();
					Gamma = gcnew Helium();
					Affinity^ Beta = gcnew Affinity();
					Phi = gcnew Lithium(gcnew Hydrogen(), Beta->Cone, Beta->Rod);
					Affinity^ R = gcnew Affinity(Alpha->Phi->N, Phi->N);
					Pi = gcnew Boron(R, Alpha, Phi->N);
					this->Epsilon = Math::ModPow(Phi->R->Signal, Phi->L->Channel, Alpha->Phi->N->Foundation);
					Channel = Math::ModPow(Phi->Base, Pi->Signal, Math::Prime);
				}
				*/
			};
		}
	}
}
