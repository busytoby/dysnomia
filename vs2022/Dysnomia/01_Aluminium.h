#pragma once
#include <map>
#include <vector>
#include "Faung.h"

using namespace std;

namespace Dysnomia {
	class Aluminium {
	public:
		Fa* Mu;
		Faung* Rho;
		Faung* Psi;
		Fa* Nu;
		Faung* Eta;
		Fa* Sigma;
		Faung* Upsilon;
		Fa* Tau;
		Faung* Theta;
		int Gamma = 1;

        vector<Faung*> Affinities() { return vector<Faung*>({ Rho, Psi, Eta, Upsilon, Theta }); }

		~Aluminium() { 
			if (--Gamma > 0) return;
			if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
			if(Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}

        Aluminium(Faung* Pi) {
            if (Math::POETRY > 0)
                cout << "Aluminium ";
            Pi->Rod->Gamma++;
            Pi->Cone->Gamma++;
            Mu = new Fa();
            Rho = Pi;
            Psi = new Faung(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
            Nu = new Fa();
            Eta = new Faung(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
            Sigma = new Fa();
            Upsilon = new Faung(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
            Tau = new Fa();
            Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
            Tau->Tune();
            Theta = new Faung(Tau, Upsilon->Cone->Base, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
        }

        Aluminium(Fa* Beta, Int64 Iota, Int64 Omicron, Int64 Lambda, Int64 Xi) {
            if (Math::POETRY > 0)
                cout << "Aluminium ";
            Beta->Gamma++;
            Mu = new Fa();
            Rho = new Faung(Beta, Iota, Omicron, Lambda, Xi);
            Psi = new Faung(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
            Nu = new Fa();
            Eta = new Faung(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
            Sigma = new Fa();
            Upsilon = new Faung(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
            Tau = new Fa();
            Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
            Tau->Tune();
            Theta = new Faung(Tau, Upsilon->Cone->Base, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
        }

        Aluminium() {
            if (Math::POETRY > 0)
                cout << "Aluminium ";
            Mu = new Fa();
            Rho = new Faung();
            Psi = new Faung(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
            Nu = new Fa();
            Eta = new Faung(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
            Sigma = new Fa();
            Upsilon = new Faung(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
            Tau = new Fa();
            Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
            Tau->Tune();
            Theta = new Faung(Tau, Upsilon->Cone->Base, Upsilon->Rod->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
        }

        // First Quaternion
        Fa* Pi() {
            Fa* Beta = new Fa();
            Beta->Fuse(Eta->Rod->Base, Upsilon->Rod->Element, Upsilon->Cone->Manifold);
            Beta->Tune();
            return Beta;
        }
	};
}