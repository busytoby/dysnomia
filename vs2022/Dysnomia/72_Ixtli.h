#pragma once
#include "71_Fang.h"

using namespace std;

namespace Dysnomia {
	class Ixtli {
	public:
		Fang* Mu;
		Faung* Rho;
		Aluminium* Psi;
		Fa* Nu;
		Faung* Eta;
		Fa* Sigma;
		Faung* Upsilon;
		Faung* Tau;
		Aluminium* Theta;
		int Gamma = 1;

		Ixtli() {
			if (Math::POETRY > 0)
				cout << "Ixtli ";
			Mu = new Fang();
			Rho = Mu->Tau->Omicron();
			Psi = new Aluminium(Rho);
			Nu = Psi->Pi();
			Eta = Mu->Tau->Phi(Mu->Mu->Eta, Nu);
			Sigma = Psi->Pi();
			Upsilon = Mu->Tau->Phi(Mu->Upsilon, Sigma);
			Tau = Mu->Eta->Omega(Mu->Theta, Upsilon);
			Theta = new Aluminium(Tau);
		}

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			Alpha.push_back(Rho);
			vector<Faung*> Beta = Psi->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			Alpha.push_back(Eta);
			Alpha.push_back(Upsilon);
			Alpha.push_back(Tau);
			vector<Faung*> Iota = Theta->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			return Alpha;
		}

		~Ixtli() {
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
			if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
	};
}