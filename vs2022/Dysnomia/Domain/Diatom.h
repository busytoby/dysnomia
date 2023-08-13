#pragma once
#include "../005_ë.h"

using namespace std;

namespace Dysnomia {
    class Diatom {
    public:
        vector<ë*> Mu;
        Fa* Rho;

        Diatom(list<ë*>& Beta, int Number) {
            Faung* Iota;
            vector<tuple<bool, bool, bool>> Omicron;
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
            if (Number == 1) return;

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
            Omicron.clear();
        }

        ~Diatom() {
            for (int i = 0; i < Mu.size(); i++)
                delete Mu[i];
            Mu.clear();
        }
    };
}