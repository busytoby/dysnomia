#pragma once
#include "02_Sulphur.h"

using namespace std;

namespace Dysnomia {
	class Iron {
	public:
		Sulphur* Mu;
		Aluminium* Rho;
		Aluminium* Psi;
		Faung* Nu;
		Faung* Eta;
		Faung* Sigma;
		Sulphur* Upsilon;
		Fa* Tau;
		Aluminium* Theta;
		int Gamma = 1;

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            vector<Faung*> Omicron = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Theta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

		~Iron() { 	
			if (--Gamma > 0) return;
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		
        Iron(Sulphur* Beta, Faung* Iota, Faung* Omicron, Faung* Lambda, Faung* Xi) {
            if (Math::POETRY > 0)
                cout << "Iron ";
            Beta->Gamma++;
            Iota->Rod->Gamma++;
            Iota->Cone->Gamma++;
            Omicron->Rod->Gamma++;
            Omicron->Cone->Gamma++;
            Lambda->Rod->Gamma++;
            Lambda->Cone->Gamma++;
            Xi->Rod->Gamma++;
            Xi->Cone->Gamma++;
            Mu = Beta;
            Rho = new Aluminium(Iota);
            Psi = new Aluminium(Omicron);
            Nu = Lambda;
            Eta = Xi;
            Sigma = Delta(Eta, Nu);
            Upsilon = new Sulphur(Sigma);
            Tau = Mu->Tau->Pi();
            Theta = new Aluminium(Tau, Upsilon->Mu->Theta->Cone->Base, Upsilon->Mu->Theta->Rod->Signal, Upsilon->Mu->Theta->Cone->Signal, Upsilon->Mu->Theta->Cone->Tau);
        }

        Iron(Sulphur* Xi, Faung* Iota, Faung* Lambda) {
            if (Math::POETRY > 0)
                cout << "Iron ";
            Xi->Gamma++;
            Iota->Rod->Gamma++;
            Iota->Cone->Gamma++;
            Lambda->Rod->Gamma++;
            Lambda->Cone->Gamma++;
            Mu = Xi;
            Rho = new Aluminium(Iota);
            Psi = new Aluminium(Lambda);
            Nu = Xi->Nu;
            Xi->Nu->Rod->Gamma++;
            Xi->Nu->Cone->Gamma++;
            Eta = Xi->Sigma;
            Xi->Sigma->Rod->Gamma++;
            Xi->Sigma->Cone->Gamma++;
            Sigma = Delta(Eta, Nu);
            Upsilon = new Sulphur(Sigma);
            Tau = Mu->Tau->Pi();
            Theta = new Aluminium(Tau, Upsilon->Mu->Theta->Cone->Base, Upsilon->Mu->Theta->Rod->Signal, Upsilon->Mu->Theta->Cone->Signal, Upsilon->Mu->Theta->Cone->Tau);
        }

        Iron() {
            if (Math::POETRY > 0)
                cout << "Iron ";
            Mu = new Sulphur();
            Rho = new Aluminium();
            Psi = new Aluminium(Mu->Theta, Mu->Upsilon->Base, Mu->Upsilon->Element, Mu->Upsilon->Manifold, Mu->Theta->Tau);
            Nu = Beta();
            Eta = Omicron();
            Sigma = Delta(Nu, Eta);
            Upsilon = new Sulphur(Sigma);
            Tau = Upsilon->Tau->Pi();
            Theta = new Aluminium(Tau, Upsilon->Mu->Theta->Cone->Base, Upsilon->Mu->Theta->Rod->Signal, Upsilon->Mu->Theta->Cone->Signal, Upsilon->Mu->Theta->Cone->Tau);
        }

        // SO(2) Versor 1
        Faung* Beta() {
            return new Faung(Rho->Pi(), Psi->Pi());
        }

        // SO(2) Versor 2
        Faung* Omicron() {
            return new Faung(Psi->Pi(), Rho->Pi());
        }

        // SO(3) Versors
        Faung* Delta(Faung* Pi, Faung* Alpha) {
            return new Faung(Pi->Cone->Base, Alpha->Cone->Element, Pi->Cone->Barn, Alpha->Cone->Tau);
        }

        // SO(4) Versors
        Faung* Kappa(Aluminium* Iota) {
            return new Faung(Iota->Pi(), Rho->Pi());
        }

        // SO(7) Versors
        Faung* Omega(Faung* Alpha, Faung* Pi) {
            return new Faung(Pi->Cone->Base, Alpha->Cone->Element, Pi->Cone->Barn, Alpha->Cone->Tau);
        }
	};
}