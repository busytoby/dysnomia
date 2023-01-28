#pragma once
#include "03_Iron.h"

using namespace std;

namespace Dysnomia {
	class Qiao {
	public:
		Iron* Mu;
		Affinity* Rho;
		Affinity* Psi;
		Affinity* Nu;
		Sulphur* Eta;
		Iron* Sigma;
		Affinity* Upsilon;
		Aluminium* Tau;
		Iron* Theta;
		int Gamma = 1;

		~Qiao() {
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
			if (Sigma->Gamma == 1)delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		
        Qiao(Iron* Beta, Affinity* Iota, Affinity* Omicron, Sulphur* Lambda) {
            Beta->Gamma++;
            Iota->Rod->Gamma++;
            Iota->Cone->Gamma++;
            Omicron->Rod->Gamma++;
            Omicron->Cone->Gamma++;
            Mu = Beta;
            Rho = Omicron;
            Psi = Iota;
            Nu = Mu->Delta(Rho, Psi);
            Eta = Lambda;
            Sigma = new Iron(Eta, Psi, Rho);
            Upsilon = Sigma->Beta();
            Tau = new Aluminium(Upsilon);
            Theta = new Iron(Mu->Upsilon, Sigma->Omicron(), Mu->Omicron());
        }

        Qiao(Iron* Omega, Affinity* Pi) {
            Omega->Gamma++;
            Pi->Rod->Gamma++;
            Pi->Cone->Gamma++;
            Mu = Omega;
            Rho = Mu->Beta();
            Psi = Pi;
            Nu = Mu->Delta(Psi, Rho);
            Eta = new Sulphur(Nu);
            Sigma = new Iron(Eta, Psi, Rho);
            Upsilon = Sigma->Beta();
            Tau = new Aluminium(Upsilon);
            Theta = new Iron(Mu->Upsilon, Sigma->Omicron(), Mu->Omicron());
        }

        Qiao(Iron* Omega) {
            Omega->Gamma++;
            Mu = Omega;
            Rho = Mu->Beta();
            Psi = Mu->Omicron();
            Nu = Mu->Delta(Psi, Rho);
            Eta = new Sulphur(Nu);
            Sigma = new Iron(Eta, Psi, Rho);
            Upsilon = Sigma->Beta();
            Tau = new Aluminium(Upsilon);
            Theta = new Iron(Mu->Upsilon, Sigma->Omicron(), Mu->Omicron());
        }

        Qiao() {
            Mu = new Iron();
            Rho = Mu->Omicron();
            Psi = Mu->Beta();
            Nu = Mu->Delta(Rho, Psi);
            Eta = new Sulphur(Nu);
            Sigma = new Iron(Eta, Psi, Rho);
            Upsilon = Sigma->Beta();
            Tau = new Aluminium(Upsilon);
            Theta = new Iron(Mu->Upsilon, Sigma->Omicron(), Mu->Omicron());
        }
	};
}