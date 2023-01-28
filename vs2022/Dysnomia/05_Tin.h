#pragma once
#include "04_Qiao.h"

using namespace std;

namespace Dysnomia {
	class Tin {
	public:
		Qiao* Mu;
		Qiao* Rho;
		Affinity* Psi;
		Affinity* Nu;
		Affinity* Eta;
		Sulphur* Sigma;
		Iron* Upsilon;
		Iron* Tau;
		Iron* Theta;
		int Gamma = 1;

		vector<Affinity*> Affinities() {
			vector<Affinity*> Alpha(Mu->Affinities());
			vector<Affinity*> Beta = Rho->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			Alpha.push_back(Psi);
			Alpha.push_back(Nu);
			Alpha.push_back(Eta);
			vector<Affinity*> Iota = Sigma->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			vector<Affinity*> Omicron = Upsilon->Affinities();
			Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
			vector<Affinity*> Lambda = Tau->Affinities();
			Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
			vector<Affinity*> Xi = Theta->Affinities();
			Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
			return Alpha;
		}

		~Tin() {
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		
		Tin(Affinity* Beta) {
			Beta->Rod->Gamma++;
			Beta->Cone->Gamma++;
			Mu = new Qiao();
			Rho = new Qiao();
			Psi = Mu->Sigma->Omicron();
			Nu = Beta;
			Eta = Mu->Sigma->Delta(Psi, Nu);
			Sigma = new Sulphur(Eta);
			Upsilon = new Iron(Sigma, Nu, Psi);
			Tau = new Iron(Upsilon->Upsilon, Psi, Nu);
			Theta = new Iron(Tau->Upsilon, Upsilon->Beta(), Tau->Beta());
		}

		Tin() {
			Mu = new Qiao();
			Rho = new Qiao();
			Psi = Mu->Sigma->Omicron();
			Nu = Rho->Sigma->Omicron();
			Eta = Mu->Sigma->Delta(Psi, Nu);
			Sigma = new Sulphur(Eta);
			Upsilon = new Iron(Sigma, Nu, Psi);
			Tau = new Iron(Upsilon->Upsilon, Psi, Nu);
			Theta = new Iron(Tau->Upsilon, Upsilon->Beta(), Tau->Beta());
		}
	};
}