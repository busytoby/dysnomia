#pragma once
#include "72_Ixtli.h"

using namespace std;

namespace Dysnomia {
	class មេល {
	public:
		Ixtli* Mu;
		Fa* Rho;
		Faung* Psi;
		Qiao* Nu;
		Qiao* Eta;
		Qiao* Sigma;
		Qiao* Upsilon;
		Iron* Tau;
		Iron* Theta;
		int Gamma = 1;

		មេល() {
			if (Math::POETRY > 0)
				cout << "មេល ";
			Mu = new Ixtli();
			Rho = Mu->Theta->Pi();
			Psi = Mu->Mu->Tau->Phi(Mu->Mu->Upsilon, Rho);
			Nu = new Qiao(Mu->Mu->Tau, Mu->Tau, Psi, Mu->Mu->Upsilon);
			Eta = new Qiao(Mu->Mu->Eta, Mu->Tau, Psi, Mu->Mu->Upsilon);
			Sigma = new Qiao(Mu->Mu->Mu->Mu->Theta, Mu->Tau, Psi, Mu->Mu->Upsilon);
			Upsilon = new Qiao(Mu->Mu->Mu->Mu->Upsilon, Mu->Tau, Psi, Mu->Mu->Upsilon);
			Tau = new Iron(Eta->Eta, Nu->Rho, Eta->Psi, Sigma->Nu, Upsilon->Upsilon);
			Theta = new Iron(Upsilon->Eta, Nu->Rho, Eta->Psi, Sigma->Nu, Upsilon->Upsilon);
		}

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			Alpha.push_back(Psi);
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

		~មេល() {
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
	};
}