#pragma once
#include "69_Ton.h"

using namespace std;

namespace Dysnomia {
	class Kong {
	public:
		Ton* Mu;
		Faung* Rho;
		Faung* Psi;
		Faung* Nu;
		Sulphur* Eta;
		Fa* Sigma;
		Faung* Upsilon;
		Aluminium* Tau;
		Faung* Theta;
		int Gamma = 1;

		Kong() {
			if (Math::POETRY > 0)
				cout << "Kong ";
			Mu = new Ton();
			Rho = Mu->Theta->Omega(Mu->Psi, Mu->Eta);
			Psi = Mu->Theta->Omega(Mu->Eta, Mu->Psi);
			Nu = Mu->Upsilon->Delta(Rho, Psi);
			Eta = new Sulphur(Nu);
			Sigma = Eta->Mu->Pi();
			Upsilon = Mu->Theta->Phi(Eta, Sigma);
			Tau = new Aluminium(Upsilon);
			Theta = Mu->Upsilon->Kappa(Tau);
		}

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			Alpha.push_back(Rho);
			Alpha.push_back(Psi);
			Alpha.push_back(Nu);
			vector<Faung*> Beta = Eta->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			Alpha.push_back(Upsilon);
			vector<Faung*> Iota = Tau->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			Alpha.push_back(Theta);
			return Alpha;
		}

		~Kong() {
			if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
	};
}