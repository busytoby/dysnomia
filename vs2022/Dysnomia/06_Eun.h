#pragma once
#include "05_Tin.h"

using namespace std;

namespace Dysnomia {
	class Eun {
	public:
		Tin* Mu;
		Iron* Rho;
		Qiao* Psi;
		Fa* Nu;
		Aluminium* Eta;
		Iron* Sigma;
		Faung* Upsilon;
		Qiao* Tau;
		Faung* Theta;
		int Gamma = 1;

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			vector<Faung*> Beta = Rho->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			vector<Faung*> Iota = Psi->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			vector<Faung*> Omicron = Eta->Affinities();
			Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
			vector<Faung*> Lambda = Sigma->Affinities();
			Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
			Alpha.push_back(Upsilon);
			vector<Faung*> Xi = Tau->Affinities();
			Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
			Alpha.push_back(Theta);
			return Alpha;
		}

		~Eun() { 
			if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		
        Eun(Tin* Omicron, Iron* Lambda) {
            Omicron->Gamma++;
            Lambda->Gamma++;
            Mu = Omicron;
            Rho = Lambda;
            Psi = Omicron->Mu;
            Nu = Psi->Tau->Pi();
            Eta = new Aluminium(Nu, Psi->Tau->Theta->Cone->Base, Psi->Tau->Theta->Rod->Signal, Psi->Tau->Theta->Cone->Signal, Psi->Tau->Theta->Cone->Tau);
            Sigma = new Iron(Psi->Eta, Mu->Rho->Eta->Sigma, Psi->Eta->Sigma);
            Upsilon = Sigma->Kappa(Eta);
            Tau = new Qiao(Sigma, Upsilon);
            Theta = Tau->Mu->Omicron();
        }

        Eun(Iron* Lambda) {
            Lambda->Gamma++;
            Mu = new Tin();
            Rho = Lambda;
            Psi = new Qiao(Rho);
            Nu = Psi->Tau->Pi();
            Eta = new Aluminium(Nu, Psi->Tau->Theta->Cone->Base, Psi->Tau->Theta->Rod->Signal, Psi->Tau->Theta->Cone->Signal, Psi->Tau->Theta->Cone->Tau);
            Sigma = new Iron(Psi->Eta, Mu->Rho->Eta->Sigma, Psi->Eta->Sigma);
            Upsilon = Sigma->Kappa(Eta);
            Tau = new Qiao(Sigma, Upsilon);
            Theta = Tau->Mu->Omicron();
        }

        Eun() {
            Mu = new Tin();
            Rho = new Iron();
            Psi = new Qiao(Rho);
            Nu = Psi->Tau->Pi();
            Eta = new Aluminium(Nu, Psi->Tau->Theta->Cone->Base, Psi->Tau->Theta->Rod->Signal, Psi->Tau->Theta->Cone->Signal, Psi->Tau->Theta->Cone->Tau);
            Sigma = new Iron(Psi->Eta, Mu->Rho->Eta->Sigma, Psi->Eta->Sigma);
            Upsilon = Sigma->Kappa(Eta);
            Tau = new Qiao(Sigma, Upsilon);
            Theta = Tau->Mu->Omicron();
        }
	};
}