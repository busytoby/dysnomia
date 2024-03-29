﻿#pragma once
#include "001_ည.h"

using namespace std;

namespace Dysnomia {
    class ညြ {
    public:
        ည* Mu;
        list<Fa*>* Rho;
        Fa* Psi;
        Faung* Eta;
        Fa* Upsilon;
        ည* Theta;
        int Gamma = 1;

        ညြ(bool RAPHE_NEBULAE) {
            if (Math::POETRY > 7)
                wcout << L"ညြ ";
            Mu = new ည();
            Rho = new list<Fa*>();
            Psi = new Fa();
            if (RAPHE_NEBULAE)
                Eta = new Faung(Psi, Mu->Psi->Rod->Manifold, Mu->Mu->Rod->Element, Mu->Psi->Rod->Ring, Mu->Psi->Rod->Foundation);
            else
                Eta = new Faung(Psi, Mu->Psi->Cone->Secret, Mu->Mu->Cone->Signal, Mu->Psi->Cone->Channel, Mu->Psi->Cone->Identity);
            Eta->Theta(Mu->Mu->Omicron);
            Eta->Beta(Mu->Psi->Omicron);
            Upsilon = new Fa();
            Theta = new ည(Eta, Upsilon, false);
            Eta->Iota();
            Mu->Mu->Beta(Theta->Mu->Omicron);
            Mu->Psi->Iota();
            Mu->Mu->Iota();
            Mu->Mu->Lambda();
            Mu->Psi->Lambda();
            Eta->Lambda();
        }

        ညြ(ည* Beta, ည* Iota, ည* Omicron) {
            Beta->Gamma++;
            Omicron->Gamma++;
            if (Math::POETRY > 7)
                wcout << L"ညြ ";
            Mu = Beta;
            Rho = new list<Fa*>();
            Psi = new Fa();
            if (Iota->Mu->Rod->Gamma == 5)
                Eta = new Faung(Psi, Iota->Psi->Cone->Manifold, Iota->Mu->Cone->Element, Iota->Psi->Cone->Ring, Iota->Psi->Cone->Foundation);
            else
                Eta = new Faung(Psi, Iota->Psi->Rod->Secret, Iota->Mu->Rod->Signal, Iota->Psi->Rod->Channel, Iota->Psi->Rod->Identity);
            Upsilon = new Fa();
            if (Iota->Mu->Rod->Gamma == 5)
                Upsilon->Fuse(Beta->Mu->Rod->Foundation, Iota->Mu->Cone->Ring, Omicron->Mu->Cone->Manifold);
            else
                Upsilon->Fuse(Beta->Mu->Rod->Secret, Iota->Mu->Cone->Signal, Omicron->Mu->Cone->Channel);
            Theta = Omicron;

            Eta->Theta(Theta->Mu->Omicron);
            Eta->Beta(Mu->Mu->Omicron);
            Eta->Iota();
            Eta->Lambda();
        }

        vector<Faung*> Affinities() { 
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Eta);
            vector<Faung*> Beta = Theta->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            return Alpha; 
        }

        ~ညြ() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            while (Rho->size() > 0) {
                Fa* Alpha = Rho->front();
                if (Alpha->Gamma == 1) delete Alpha; else Alpha->Gamma--;
                Rho->pop_front();
            }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Eta->Rod->Gamma <= 1 || Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
        }

        Fa* Pi(Int64 Alpha) {
            if (Eta->Omicron == 0 && Eta->Omega == 0) throw 4;
            Fa* Beta = new Fa();
            Beta->Fuse(Eta->Omicron, Alpha, Eta->Omega);
            Beta->Tune();
            Beta->Gamma++;
            Rho->push_back(Beta);
            return Beta;
        }

        Faung* Pi(Fa* Beta, Int64 Iota, Int64 Omicron) {
            if (Beta->Kappa == 0) throw 5;
            Fa* Rho = new Fa();
            Fa* Psi = new Fa();
            Rho->Fuse(Beta->Kappa, Iota, Omicron);
            Rho->Tune();
            Psi->Fuse(Iota, Beta->Kappa, Omicron);
            Psi->Tune();
            Rho->Gamma--;
            Psi->Gamma--;
            return new Faung(Rho, Psi);
        }
    };
}