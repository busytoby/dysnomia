#pragma once
#include "06_Eun.h"

using namespace std;

namespace Dysnomia {
	class Song {
	public:
		Eun* Mu;
		Affinity* Rho;
		Aluminium* Psi;
		Qiao* Nu;
		Sulphur* Eta;
		Iron* Sigma;
		Eun* Upsilon;
		Iron* Tau;
		Qiao* Theta;
		int Gamma = 1;

		~Song() { 
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		
		Song(Eun* Lambda) {
			Lambda->Gamma++;
			Mu = Lambda;
			Rho = Mu->Sigma->Delta(Mu->Rho->Beta(), Mu->Rho->Omicron());
			Psi = new Aluminium(Rho);
			Nu = new Qiao(Mu->Rho, Rho);
			Eta = new Sulphur(Rho);
			Sigma = new Iron(Eta, Mu->Sigma->Omicron(), Mu->Sigma->Beta());
			Upsilon = new Eun(Sigma);
			Tau = new Iron(Upsilon->Mu->Sigma, Sigma->Beta(), Sigma->Omicron());
			Theta = new Qiao(Tau, Mu->Theta);
		}

		Song() {
			Mu = new Eun();
			Rho = Mu->Sigma->Delta(Mu->Rho->Beta(), Mu->Rho->Omicron());
			Psi = new Aluminium(Rho);
			Nu = new Qiao(Mu->Rho, Rho);
			Eta = new Sulphur(Rho);
			Sigma = new Iron(Eta, Mu->Sigma->Omicron(), Mu->Sigma->Beta());
			Upsilon = new Eun(Sigma);
			Tau = new Iron(Upsilon->Mu->Sigma, Sigma->Beta(), Sigma->Omicron());
			Theta = new Qiao(Tau, Mu->Theta);
		}
	};
}