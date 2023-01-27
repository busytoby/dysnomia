#include "12_Tsuan.h"

namespace Dysnomia {
	Tsuan::Tsuan(Life* Alpha) {
        int DestructiveAvoidances = 0;

        while (DestructiveAvoidances < 10) {
            try {
                Mu = new Tung(Alpha);
                Rho = new Xiao(Mu);
                Psi = new Sulphur();
                Nu = new Qiao(Rho->Theta, Rho->Theta->Beta(), Rho->Theta->Omicron(), Psi);
                Eta = new Iron(Psi, Nu->Nu, Mu->Mu->Nu->Omicron());
                pair<Eun*, Eun*> Two = Kappa();
                Sigma = Two.first;
                Upsilon = Two.second;
                Tau = new Qiao(Eta, Sigma->Upsilon, Upsilon->Upsilon, Psi);
                Theta = new Tin(Tau->Upsilon);
                break;
            }
            catch (int e) { DestructiveAvoidances++; continue; };
        }
        if (DestructiveAvoidances > 10) throw 100;
	}

    pair<Eun*, Eun*> Tsuan::Kappa() {
        pair<Eun*, Iron*> Two = Rho->Pi();
        Eun* Beta = Two.first;
        Eun* Iota = new Eun(Two.second);
        return make_pair(Beta, Iota);
    }
}