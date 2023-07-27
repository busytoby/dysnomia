#pragma once
#include "73_មេល.h"

using namespace std;

namespace Dysnomia {
	class ށ {
	public:
		មេល* Mu;
		Faung* Rho;
		Faung* Psi;
		Iron* Nu;
		Faung* Eta;
		Faung* Sigma;
		Iron* Upsilon;
		Qiao* Tau;
		Qiao* Theta;
		int Gamma = 1;

		ށ() {
			if (Math::POETRY > 0)
				cout << "ށ ";
			Mu = new មេល();
			Rho = Mu->Tau->Beta();
			Psi = Mu->Tau->Omicron();
			Nu = new Iron(Mu->Nu->Eta, Rho, Psi);
			Eta = Mu->Theta->Beta();
			Sigma = Mu->Theta->Omicron();
			Upsilon = new Iron(Mu->Sigma->Eta, Eta, Sigma);
			Tau = new Qiao(Nu, Mu->Nu->Rho, Mu->Eta->Psi, Mu->Tau->Upsilon);
			Theta = new Qiao(Upsilon, Mu->Sigma->Rho, Mu->Upsilon->Psi, Mu->Theta->Upsilon);
		}

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			Alpha.push_back(Rho);
			Alpha.push_back(Psi);
			vector<Faung*> Iota = Nu->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			Alpha.push_back(Eta);
			Alpha.push_back(Sigma);
			vector<Faung*> Xi = Upsilon->Affinities();
			Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
			vector<Faung*> Delta = Tau->Affinities();
			Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
			vector<Faung*> Pi = Theta->Affinities();
			Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
			return Alpha;
		}

		~ށ() {
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
	};
}