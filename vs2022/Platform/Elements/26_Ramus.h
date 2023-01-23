#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Ramus : public Dai<Auctus^, Versor^>
			{
			public:
				static Edge<Sulfur^, Argon^, Ether^>^ Psamathe;
				static Edge<Apse^, Ramus^, Eun^>^ Io;

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

					if (Psamathe == nullptr) Psamathe = gcnew Edge<Sulfur^, Argon^, Ether^>(Psi[0]->I->N, Psi[0]->I, Psi);
					if (Io == nullptr) Io = gcnew Edge<Apse^, Ramus^, Eun^>(Nu, this, Sigma);
				}
			};
		}
	}
}
