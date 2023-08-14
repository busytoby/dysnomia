#pragma once
#include "../005_ë.h"

using namespace std;

namespace Dysnomia {
    class Diatom {
    public:
        vector<ë*> Mu;
        Fa* Rho;

        vector<tuple<bool, bool, bool>> Omicron;

        bool Digesting = false;

        Diatom() {}

        Diatom(list<ë*>& Beta) {
            Faung* Iota;
            list<ë*>::iterator Lambda;

            short Number = 0;
            if (Beta.size() < 14) throw 1;
            Int64 Base = 0;
            Int64 Secret = 0;
            for (int i = 0; i < 14; i++) {
                ë* Alpha = Beta.front();
                if (Base == 0) Base = Alpha->Mu->Mu->Psi->Upsilon->Base;
                else if (Base != Alpha->Mu->Mu->Psi->Upsilon->Base) break;
                if (Secret == 0) Secret = Alpha->Mu->Mu->Psi->Upsilon->Secret;
                else if (Secret != Alpha->Mu->Mu->Psi->Upsilon->Secret) break;
                Mu.push_back(Beta.front());
                Beta.pop_front();
                Omicron.push_back(make_tuple(false, false, false));
                Number++;
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

            for (int i = 0, j = Number - 1; i < Number; i++, j--) {
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

            //Omicron.clear();
        }

        bool Eat(Diatom* Beta) {
            if (Beta->Mu.size() != 1) throw 4;
            if (Mu[1]->Mu->Mu->Psi->Upsilon->Phi == 0 && Beta->Mu[0]->Mu->Mu->Mu->Upsilon->Coordinate == 0) {
                Beta->Mu[0]->Gamma++;               
                Mu.insert(std::next(Mu.begin(), 1), Beta->Mu[0]);
                Faung* Omicron = new Faung(Beta->Mu[0]->Mu->Mu->Mu->Upsilon, Mu[2]->Mu->Mu->Psi->Upsilon);
                delete Omicron;
                Digesting = true;
                return true;
            }
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