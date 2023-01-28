#pragma once
#include <vector>
#include "Affinity.h"

using namespace std;

namespace Dysnomia {
	class Aluminium {
	public:
		Dynamic* Mu;
		Affinity* Rho;
		Affinity* Psi;
		Dynamic* Nu;
		Affinity* Eta;
		Dynamic* Sigma;
		Affinity* Upsilon;
		Dynamic* Tau;
		Affinity* Theta;
		int Gamma = 1;

        vector<Affinity*> Affinities() { return vector<Affinity*>({ Rho, Psi, Eta, Upsilon, Theta }); }

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

        Aluminium(Affinity* Pi) {
            Pi->Rod->Gamma++;
            Pi->Cone->Gamma++;
            Mu = new Dynamic();
            Rho = Pi;
            Psi = new Affinity(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
            Nu = new Dynamic();
            Eta = new Affinity(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
            Sigma = new Dynamic();
            Upsilon = new Affinity(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
            Tau = new Dynamic();
            Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
            Tau->Tune();
            Theta = new Affinity(Tau, Upsilon->Cone->Base, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
        }

        Aluminium(Dynamic* Beta, Int64 Iota, Int64 Omicron, Int64 Lambda, Int64 Xi) {
            Beta->Gamma++;
            Mu = new Dynamic();
            Rho = new Affinity(Beta, Iota, Omicron, Lambda, Xi);
            Psi = new Affinity(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
            Nu = new Dynamic();
            Eta = new Affinity(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
            Sigma = new Dynamic();
            Upsilon = new Affinity(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
            Tau = new Dynamic();
            Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
            Tau->Tune();
            Theta = new Affinity(Tau, Upsilon->Cone->Base, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
        }

        Aluminium() {
            Mu = new Dynamic();
            Rho = new Affinity();
            Psi = new Affinity(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
            Nu = new Dynamic();
            Eta = new Affinity(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
            Sigma = new Dynamic();
            Upsilon = new Affinity(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
            Tau = new Dynamic();
            Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
            Tau->Tune();
            Theta = new Affinity(Tau, Upsilon->Cone->Base, Upsilon->Rod->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
        }

        // First Quaternion
        Dynamic* Pi() {
            Dynamic* Beta = new Dynamic();
            Beta->Fuse(Eta->Rod->Base, Upsilon->Rod->Element, Upsilon->Cone->Manifold);
            Beta->Tune();
            return Beta;
        }
	};
}