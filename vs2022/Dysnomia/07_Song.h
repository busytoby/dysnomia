#pragma once
#include "06_Eun.h"

using namespace std;

namespace Dysnomia {
	class Song {
	public:
		Eun* Mu;
		Faung* Rho;
		Aluminium* Psi;
		Qiao* Nu;
		Sulphur* Eta;
		Iron* Sigma;
		Eun* Upsilon;
		Iron* Tau;
		Qiao* Theta;
		int Gamma = 1;

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			Alpha.push_back(Rho);
			vector<Faung*> Beta = Psi->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			vector<Faung*> Iota = Nu->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			vector<Faung*> Omicron = Eta->Affinities();
			Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
			vector<Faung*> Lambda = Sigma->Affinities();
			Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
			vector<Faung*> Xi = Upsilon->Affinities();
			Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
			vector<Faung*> Delta = Tau->Affinities();
			Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
			vector<Faung*> Pi = Theta->Affinities();
			Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
			return Alpha;
		}

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

		Song(Eun* Lambda, Faung* Omicron) {
			if (Math::POETRY > 0)
				cout << "Song ";
			Lambda->Gamma++;
			Omicron->Rod->Gamma++;
			Omicron->Cone->Gamma++;
			Upsilon = Lambda;
			Sigma = new Iron(Upsilon->Mu->Sigma, Upsilon->Tau->Sigma->Beta(), Upsilon->Tau->Sigma->Omicron());
			Mu = new Eun(Sigma);
			Rho = Omicron;
			Psi = new Aluminium(Rho);
			Eta = new Sulphur(Rho);
			Tau = new Iron(Eta, Mu->Sigma->Omicron(), Mu->Sigma->Beta());
			Nu = new Qiao(Tau, Mu->Theta); 
			Theta = new Qiao(Mu->Rho, Rho);
		}
		
		Song(Eun* Lambda) {
			if (Math::POETRY > 0)
				cout << "Song ";
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
			if (Math::POETRY > 0)
				cout << "Song ";
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