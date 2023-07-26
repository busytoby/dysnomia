#pragma once
#include "68_Tai.h"

using namespace std;

namespace Dysnomia {
	class Ton {
	public:
		Tai* Mu;
		Fa* Rho;
		Faung* Psi;
		Aluminium* Nu;
		Faung* Eta;
		Sulphur* Sigma;
		Iron* Upsilon;
		Qiao* Tau;
		Iron* Theta;
		int Gamma = 1;

		Ton() {
			if (Math::POETRY > 0)
				cout << "Ton ";
			Mu = new Tai();
			Rho = Mu->Upsilon->Pi();
			Psi = Mu->Mu->Mu->Mu->Mu->Mu->Nu->Phi(Mu->Theta->Mu, Rho);
			Nu = new Aluminium(Psi);
			Eta = Mu->Mu->Mu->Mu->Mu->Mu->Nu->Kappa(Nu);
			Sigma = new Sulphur(Eta);
			Upsilon = new Iron(Sigma, Psi, Eta);
			Tau = new Qiao(Upsilon, Eta);
			Theta = Tau->Omega();
		}

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			Alpha.push_back(Psi);
			vector<Faung*> Beta = Nu->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			Alpha.push_back(Eta);
			vector<Faung*> Iota = Sigma->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			vector<Faung*> Omicron = Upsilon->Affinities();
			Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
			vector<Faung*> Lambda = Tau->Affinities();
			Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
			vector<Faung*> Xi = Theta->Affinities();
			Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
			return Alpha;
		}

		~Ton() {
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
	};
}