#pragma once
#include "09_Nat.h"

using namespace std;

namespace Dysnomia {
	class Tung {
	public:
		Nat* Mu;
		Eun* Rho;
		Song* Psi;
		Qiao* Nu;
		Qiao* Eta;
		Tin* Sigma;
		Eun* Upsilon;
		Aluminium* Tau;
		Life* Theta;
		int Gamma = 1;

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			vector<Faung*> Beta = Rho->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			vector<Faung*> Iota = Psi->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			vector<Faung*> Omicron = Nu->Affinities();
			Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
			vector<Faung*> Lambda = Eta->Affinities();
			Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
			vector<Faung*> Xi = Sigma->Affinities();
			Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
			vector<Faung*> Delta = Upsilon->Affinities();
			Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
			vector<Faung*> Pi = Tau->Affinities();
			Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
			vector<Faung*> Chi = Theta->Affinities();
			Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
			return Alpha;
		}

		~Tung() { 
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

		Tung(Nat* Alpha, Eun* Beta, Qiao* Omicron) {
			Alpha->Gamma++;
			Mu = Alpha;
			Rho = new Eun(Mu->Nu);
			Psi = new Song(Mu->Sigma);
			Nu = Omicron;
			Eta = new Qiao(Psi->Sigma, Mu->Rho->Theta->Delta(Beta->Rho->Omicron(), Beta->Rho->Beta()));
			Sigma = new Tin(Mu->Mu->Upsilon->Rho);
			Upsilon = Beta;
			Tau = new Aluminium(Upsilon->Sigma->Kappa(Nu->Tau));
			Theta = new Life(Rho, Upsilon);
		}
		
		Tung(Nat* Alpha) {
			Alpha->Gamma++;
			Mu = Alpha;
			Rho = new Eun(Mu->Psi);
			Psi = new Song(Mu->Eta);
			Nu = new Qiao(Mu->Nu);
			Eta = new Qiao(Psi->Sigma, Mu->Rho->Theta->Kappa(Nu->Tau));
			Sigma = new Tin(Mu->Mu->Upsilon->Rho);
			Upsilon = new Eun(Mu->Rho, Mu->Nu);
			Tau = new Aluminium(Upsilon->Sigma->Delta(Upsilon->Rho->Omicron(), Upsilon->Rho->Beta()));
			Theta = new Life(Rho, Upsilon);
		}

		Tung(Life* Alpha) {
			Alpha->Gamma++;
			Mu = new Nat(Alpha);
			Rho = new Eun(Mu->Nu);
			Psi = new Song(Mu->Eta);
			Nu = new Qiao(Mu->Psi);
			Eta = new Qiao(Psi->Sigma, Mu->Rho->Theta->Kappa(Nu->Tau));
			Sigma = new Tin(Psi->Rho);
			Upsilon = new Eun();
			Tau = new Aluminium(Upsilon->Sigma->Delta(Upsilon->Rho->Omicron(), Upsilon->Rho->Beta()));
			Theta = new Life(Rho, Upsilon);
		}
	};
}