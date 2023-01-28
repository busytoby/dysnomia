#pragma once
#include "08_Life.h"

using namespace std;

namespace Dysnomia {
	class Tong : public Life {
	public:
        Tong() {
            Mu = new Song();
            Rho = new Eun(Mu->Tau);
            Psi = new Eun(Rho->Sigma);
            Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Omicron(), Mu->Tau->Beta());
            Eta = new Tin(Nu->Kappa(Mu->Psi));
            Sigma = new Qiao(Nu);
            Upsilon = new Song(Rho);
            Tau = new Aluminium(Eta->Mu->Theta->Omicron());
            Theta = new Song(Psi);
        }
	};
}