#include "11_Xiao.h"

namespace Dysnomia {
    Xiao::Xiao(Tung* Beta) {
        Beta->Gamma++;
        Mu = Beta;
        Rho = new Song();
        Psi = new Aluminium(Mu->Tau->Pi(), Mu->Tau->Theta->Cone->Base, Mu->Tau->Theta->Rod->Signal, Mu->Tau->Theta->Cone->Signal, Mu->Tau->Theta->Cone->Tau);
        Nu = new Affinity(Mu->Tau->Theta->Cone->Base, Mu->Tau->Theta->Cone->Element, Mu->Tau->Theta->Cone->Manifold, Mu->Tau->Theta->Cone->Ring);
        Eta = new Affinity(Psi->Pi(), Nu->Cone->Base, Nu->Cone->Element, Nu->Cone->Barn, Nu->Cone->Tau);
        Sigma = new Sulphur(Eta);
        Upsilon = new Qiao(Rho->Tau);
        pair<Eun*, Iron*> Siao = Pi();
        Tau = Siao.first;
        Theta = Siao.second;
    }

    pair<Eun*, Iron*> Xiao::Pi() {
        Eun* Beta = new Eun(Rho->Sigma);
        Iron* Iota = new Iron(Beta->Mu->Sigma, Mu->Rho->Sigma->Beta(), Mu->Rho->Sigma->Omicron());
        return make_pair(Beta, Iota);
    }
}