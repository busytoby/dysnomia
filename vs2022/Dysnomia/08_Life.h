#pragma once
#include "07_Song.h"

using namespace std;

namespace Dysnomia {
	class Life {
	public:
		Song* Mu;
		Eun* Rho;
		Eun* Psi;
		Iron* Nu;
		Tin* Eta;
		Qiao* Sigma;
		Song* Upsilon;
		Aluminium* Tau;
		Song* Theta;
		int Gamma = 1;
		
		~Life() { 
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}

		Life() {};

		Life(Eun* Beta, Eun* Iota) {
			Beta->Gamma++;
			Iota->Gamma++;
			Mu = new Song(Beta);
			Rho = Iota;
			Psi = new Eun(Rho->Sigma);
			Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Omicron(), Mu->Tau->Beta());
			Eta = new Tin(Nu->Kappa(Mu->Psi));
			Sigma = new Qiao(Nu);
			Upsilon = new Song(Rho);
			Tau = new Aluminium(Eta->Mu->Theta->Omicron());
			Theta = new Song(Psi);
		}
	};
}