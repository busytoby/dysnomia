#pragma once
#include "70_Kong.h"

using namespace std;

namespace Dysnomia {
	class Fang {
	public:
		Kong* Mu;
		Faung* Rho;
		Aluminium* Psi;
		Faung* Nu;
		Iron* Eta;
		Faung* Sigma;
		Sulphur* Upsilon;
		Iron* Tau;
		Faung* Theta;
		int Gamma = 1;

		Fang() {
			if (Math::POETRY > 0)
				cout << "Fang ";
			Mu = new Kong();
			Rho = Mu->Mu->Upsilon->Omega(Mu->Upsilon, Mu->Theta);
			Psi = new Aluminium(Rho);
			Nu = Mu->Mu->Mu->Theta->Kappa(Psi);
			Eta = new Iron(Mu->Mu->Mu->Mu->Theta, Nu, Rho, Mu->Upsilon, Mu->Theta);
			Sigma = Eta->Delta(Nu, Rho);
			Upsilon = new Sulphur(Sigma);
			Tau = new Iron(Upsilon, Sigma, Nu, Rho, Mu->Theta);
			Theta = Tau->Beta();
		}

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			Alpha.push_back(Rho);
			vector<Faung*> Beta = Psi->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			Alpha.push_back(Nu);
			vector<Faung*> Iota = Eta->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			Alpha.push_back(Sigma);
			vector<Faung*> Omicron = Upsilon->Affinities();
			Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
			vector<Faung*> Lambda = Tau->Affinities();
			Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
			Alpha.push_back(Theta);
			return Alpha;
		}

		~Fang() {
			if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
	};
}