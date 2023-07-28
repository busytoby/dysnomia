#pragma once
#include "08_Life.h"

using namespace std;

namespace Dysnomia {
	class Tong : public Life {
	public:
        Tong(Song* Alpha, Faung* Xi) {
            if (Math::POETRY > 0)
                cout << "Tong ";
            Mu = Alpha;
            Rho = new Eun(Mu->Tau);
            Psi = new Eun(Rho->Sigma);
            Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Beta(), Xi);
            Eta = new Tin(Nu->Kappa(Mu->Psi));
            Sigma = new Qiao(Nu);
            Upsilon = new Song(Rho);
            Tau = new Aluminium(Xi);
            Theta = new Song(Psi);
        }

        Tong() {
            if (Math::POETRY > 0)
                cout << "Tong ";
            Mu = new Song();
            Rho = new Eun(Mu->Tau);
            Psi = new Eun(Rho->Sigma);
            if(RAPHE_NEBULAE)
                Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Beta(), Mu->Tau->Omicron());
            else
                Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Omicron(), Mu->Tau->Beta());
            Eta = new Tin(Nu->Kappa(Mu->Psi));
            Sigma = new Qiao(Nu);
            Upsilon = new Song(Rho);
            Tau = new Aluminium(Eta->Mu->Theta->Omicron());
            Theta = new Song(Psi);
        }
	};
}