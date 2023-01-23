#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Ramus : public Dai<Auctus^, Versor^>
			{
			public:
				static Edge<Sulfur^, Argon^, Tauon^>^ Psamathe;
				static Edge<Sulfur^, Gluon^, Ramus^>^ Io;

				Ramus() {
					Aluminium^ Mu = gcnew Aluminium();
					Parity^ Rho = gcnew Parity(Mu);
					Ether^ Psi = gcnew Ether(Rho);
					Apse^ Nu = gcnew Apse(Psi->Mu->L);
					Synapse^ Eta = gcnew Synapse(Psi, Nu);
					Eun^ Sigma = gcnew Eun(Eta);
					Ascus^ Upsilon = gcnew Ascus(Eta, Sigma);
					Auctus^ Tau = gcnew Auctus(Upsilon);
					Versor^ Theta = gcnew Versor(Tau);

					if (Psamathe == nullptr) Psamathe = gcnew Edge<Sulfur^, Argon^, Tauon^>(Psi[0]->I->N, Psi[0]->I, Rho[0]->I);
				}
			};
		}
	}
}
