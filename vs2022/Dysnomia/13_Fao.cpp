#include "13_Fao.h"

namespace Dysnomia {
    Fao::Fao(Life* Alpha) {
        Tsuan* Mu = new Tsuan(Alpha);
        Tung* Rho = new Tung(Mu->Mu->Mu);
        Xiao* Psi = new Xiao(Rho);
        Qiao* Nu = new Qiao(Psi->Theta, Psi->Theta->Beta(), Psi->Theta->Omicron(), Mu->Rho->Sigma);
        pair<Eun*, Iron*> Three = Psi->Pi();
        Eun* Eta = Three.first;
        Iron* Sigma = Three.second;
        Qiao* Upsilon = new Qiao(Sigma, Eta->Upsilon, Mu->Sigma->Upsilon, Mu->Rho->Sigma);
        Tin* Tau = new Tin(Upsilon->Upsilon);
    }
}