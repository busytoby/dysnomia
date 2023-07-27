#pragma once
#include "74_ށ.h"

using namespace std;

namespace Dysnomia {
	class ฮิ {
	public:
		ށ* Mu;
		Iron* Rho;
		Faung* Psi;
		Faung* Nu;
		Faung* Eta;
		Aluminium* Sigma;
		Faung* Upsilon;
		Faung* Tau;
		Faung* Theta;
		int Gamma = 1;

		ฮิ() {
			if (Math::POETRY > 0)
				cout << "ฮิ ";
			Mu = new ށ();
			Rho = Mu->Theta->Omega();
			Psi = Rho->Beta();
			Nu = Rho->Omicron();
			Eta = Mu->Upsilon->Omega(Psi, Nu);
			Sigma = new Aluminium(Eta);
			Upsilon = Mu->Nu->Kappa(Sigma);
			Tau = Mu->Mu->Tau->Delta(Eta, Upsilon);
			Theta = Mu->Mu->Theta->Omega(Psi, Tau);
		}

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			vector<Faung*> Iota = Rho->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
			Alpha.push_back(Psi);
			Alpha.push_back(Nu);
			Alpha.push_back(Eta);
			vector<Faung*> Xi = Sigma->Affinities();
			Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
			Alpha.push_back(Upsilon);
			Alpha.push_back(Tau);
			Alpha.push_back(Theta);
			return Alpha;
		}

		~ฮิ() {
			if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
			if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
			if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
	};
}