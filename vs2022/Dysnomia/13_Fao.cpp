#include "13_Fao.h"

namespace Dysnomia {
    Fao::Fao(Life* Alpha) {
        Alpha->Gamma++;
        Mu = new Tsuan(Alpha);
        Rho = new Tung(Mu->Mu->Mu);
        Psi = new Xiao(Rho);
        Nu = new Qiao(Psi->Theta, Psi->Theta->Beta(), Psi->Theta->Omicron(), Mu->Rho->Sigma);
        pair<Eun*, Iron*> Three = Psi->Pi();
        Eta = Three.first;
        Sigma = Three.second;
        Upsilon = new Qiao(Sigma, Eta->Upsilon, Mu->Sigma->Upsilon, Mu->Rho->Sigma);
        Tau = new Tin(Upsilon->Upsilon);
    }
}