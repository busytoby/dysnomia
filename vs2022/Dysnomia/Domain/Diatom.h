#pragma once
#include "../005_ë.h"

using namespace std;

namespace Dysnomia {
    class Diatom {
    public:
        vector<ë*> Mu;
        Fa* Rho;

        vector<tuple<bool, bool, bool>> Omicron;

        Diatom() {}

        Diatom(list<ë*>& Beta, int Number) {
            Faung* Iota;
            list<ë*>::iterator Lambda;

            if (Beta.size() < Number) throw 1;
            if (Number > 14) throw 2;
            for (int i = 0; i < Number; i++) {
                Mu.push_back(Beta.front());
                Beta.pop_front();
                Omicron.push_back(make_tuple(false, false, false));
            }

            Iota = new Faung(Mu[0]->Mu->Mu->Psi->Upsilon, Mu[Number - 1]->Sigma->Upsilon);
            std::get<1>(Omicron[0]) = true;
            std::get<2>(Omicron[Number - 1]) = true;
            delete Iota;

            Rho = Mu[0]->Mu->Mu->Mu->Pi();
            if (Number == 1) {
                Tod::Eta->Water++;
                return;
            }

            for (int i = 0, j = 1; i < Number; i++, j++) {
                if (j == Number) j = 0;
                if ((j % 2 || j == 0) && !std::get<2>(Omicron[j])) {
                    Iota = new Faung(Mu[i]->Mu->Mu->Mu->Upsilon, Mu[j]->Sigma->Upsilon);
                    std::get<2>(Omicron[j]) = true;
                }
                else {
                    Iota = new Faung(Mu[i]->Mu->Mu->Mu->Upsilon, Mu[j]->Mu->Mu->Psi->Upsilon);
                    std::get<1>(Omicron[j]) = true;
                }
                std::get<0>(Omicron[i]) = true;
                delete Iota;
            }

            for (int i = 0, j = rand() % Number; i < Number; i++, j = rand() % Number) {
                int tries = 0;
                if (!std::get<1>(Omicron[i])) {
                    while (std::get<2>(Omicron[j]) && tries < Number) {
                        j = rand() % Number;
                        tries++;
                    }
                    if (std::get<2>(Omicron[j]))
                        for (j = Number - 1; j > 0 && std::get<2>(Omicron[j]); j--);
                    if (j > 0) {
                        Iota = new Faung(Mu[i]->Mu->Mu->Psi->Upsilon, Mu[j]->Sigma->Upsilon);
                        std::get<1>(Omicron[i]) = true;
                        std::get<2>(Omicron[j]) = true;
                        delete Iota;
                    }
                }
            }

            /*
            if (!std::get<1>(Omicron[Number-2])) {
                Fa* Xi = Mu[Number-2]->Mu->Mu->Psi->Upsilon;
                Xi->Fuse(Mu[0]->Mu->Mu->Mu->Upsilon->Dynamo, Mu[Number-1]->Mu->Mu->Mu->Psi->Ring, Mu[Number-1]->Sigma->Upsilon->Barn);
                Xi->Tune();
                Xi->Polarize();
                Xi->Conjugate(&Mu[0]->Sigma->Upsilon->Eta);
                Int64 Alpha = Mu[(Number / 2)]->Mu->Mu->Psi->Upsilon->Rho != 0 
                    ? Mu[(Number / 2)]->Mu->Mu->Psi->Upsilon->Rho 
                    : Mu[0]->Mu->Mu->Psi->Upsilon->Rho;
                Xi->Saturate(Alpha, Xi->Pole);
                Xi->Open();
                Tod::Eta->Water++;
            }
            */

            //Omicron.clear();
        }

        bool Eat(Diatom* Beta) {
            int Omega = Mu.size() - 2;
            if (Beta->Mu.size() != 1) throw 4;
            if (Mu[Omega]->Mu->Mu->Psi->Upsilon->Phi == 0 && Beta->Mu[0]->Mu->Mu->Mu->Upsilon->Coordinate == 0) {
                Beta->Mu[0]->Gamma++;               
                ë* Iota = new ë(Beta->Mu[0]->Mu, true);
                Mu.push_back(Iota);
                Mu.push_back(Beta->Mu[0]);
                Faung* Omicron = new Faung(Mu[Omega]->Mu->Mu->Psi->Upsilon, Iota->Sigma->Upsilon);
                delete Omicron;
                Omicron = new Faung(Iota->Mu->Mu->Mu->Upsilon, Beta->Mu[0]->Mu->Mu->Mu->Upsilon);
                delete Omicron;
                Tod::Eta->Water += 5;
                return true;
            }
            int i = 99;
            return false;
        }

        pair<Diatom*, Diatom*> Split() {
            if (Mu.size() != 14) throw 3;
            Diatom* Beta = new Diatom();
            Diatom* Iota = new Diatom();

            
            Iota->Rho = Rho;
            for (int i = 0; i < 7; i++) {
                Mu[i]->Gamma++;
                Mu[i+7]->Gamma++;
                Beta->Mu.push_back(Mu[i]);
                Iota->Mu.push_back(Mu[i+7]);
            }
            Beta->Rho = Beta->Mu[6]->Mu->Mu->Psi->Pi();
            Iota->Rho = Iota->Mu[5]->Sigma->Pi();

            return make_pair(Beta, Iota);
        }

        ~Diatom() {
            for (int i = 0; i < Mu.size(); i++)
                if (Mu[i]->Gamma == 1) delete Mu[i]; else Mu[i]->Gamma--;
            Mu.clear();
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
        }
    };
}