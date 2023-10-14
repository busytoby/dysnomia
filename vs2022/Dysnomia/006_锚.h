#pragma once
#include "005_ë.h"

using namespace std;

namespace Dysnomia {
    class 锚 {
    public:
        Zuo* Mu;
        ë* Rho;
        ë* Psi;
        Faung* Nu;
        int Gamma = 1;

        锚() {
            if (Math::POETRY > 5)
                wcout << L"锚 ";
            Mu = new Zuo();
            Rho = new ë(Mu, true);
            Psi = new ë(Mu, false);
            Nu = new Faung(Rho->Sigma->Upsilon, Psi->Sigma->Upsilon);
            Nu->Theta(Rho->Nu->Omicron);
            Nu->Beta(Psi->Nu->Omega);
            Nu->Iota();
            Nu->Lambda();
        }

        Fa* Pi() {
            vector<Faung*> Beta(3);
            Fa* Iota;
            
            for (int i = 0; i < Beta.size(); i++) {
                Beta[i] = new Faung(
                    Math::ModPow(Psi->Mu->Sigma->Ohm, Psi->Mu->Sigma->Pi, Psi->Nu->Omicron),
                    Math::ModPow(Mu->Sigma->Ohm, Mu->Sigma->Pi, Psi->Nu->Omicron),
                    Math::ModPow(Rho->Mu->Sigma->Ohm, Rho->Mu->Sigma->Pi, Psi->Nu->Omicron),
                    Math::ModPow(Nu->Pi, Nu->Ohm, Psi->Nu->Omicron));
                Beta[i]->Theta(Nu->Upsilon);
            }

            if (!(Beta[0]->Xi == Beta[1]->Xi &&
                Beta[2]->Xi == Beta[0]->Rod->Barn &&
                Beta[1]->Cone->Barn == Beta[2]->Cone->Coordinate &&
                Beta[2]->Rod->Coordinate == Beta[0]->Cone->Barn)) throw 101;

            Iota = new Fa();
            Iota->Fuse(Beta[2]->Omega, Beta[0]->Omega, Beta[1]->Omega);
            Iota->Tune();
            Iota->Polarize();
            Iota->Conjugate(&Beta[2]->Omicron);
            Iota->Saturate(Beta[0]->Omicron, Iota->Pole);
            Iota->Open();

            for (int i = 0; i < Beta.size(); i++) Tod::Eta->Water.push_front(Beta[i]);
            Beta.clear();
            return Iota;
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Nu);
            return Alpha;
        }

        ~锚() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Nu->Rod->Gamma <= 1 || Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
        }
    };
}