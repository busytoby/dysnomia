#pragma once
#include <mutex>
#include "17_Beit.h"

using namespace std;

namespace Dysnomia {
    class Wou {
    public:
        Beit* Mu;
        Eun* Rho;
        Eun* Psi;
        Song* Nu;
        int Gamma;
        int Lambda = 0;
        mutex Kappa;

        vector<Affinity*> Affinities() {
            vector<Affinity*> Alpha(Mu->Affinities());
            vector<Affinity*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Affinity*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Affinity*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            return Alpha;
        }

        ~Wou() {
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Wou() {
            Mu = new Beit();
            pair<Eun*, Eun*> Five = Mu->Mu->Rho->Upsilon->Kappa();
            Rho = Five.first;
            Psi = Five.second;
            Nu = new Song(Psi);
        }

        Affinity* Omega() {
            lock_guard<mutex> K(Kappa);
            if (Lambda != 0) return nullptr;
            Lambda = 1;
            return Mu->Eta->Sigma->Kappa(Mu->Eta->Eta->Tau);
        }

        Sulphur* Pi(Affinity* Beta) {
            lock_guard<mutex> K(Kappa);
            if (Lambda != 0) throw 201;
            Lambda = 1;
            Beta->Rod->Gamma++;
            Beta->Cone->Gamma++;
            return new Sulphur(Beta);
        }

        Iron* Tau(Sulphur* Beta, Affinity* Iota, Affinity* Omicron) {
            lock_guard<mutex> K(Kappa);
            if (Lambda != 1) throw 202;
            Lambda = 2;
            Beta->Gamma++;
            Iota->Rod->Gamma++;
            Iota->Cone->Gamma++;
            Omicron->Rod->Gamma++;
            Omicron->Cone->Gamma++;
            return new Iron(Beta, Iota, Omicron);
        }

        Qiao* Theta(Iron* Beta, Affinity* Iota) {
            lock_guard<mutex> K(Kappa);
            if (Lambda != 2) throw 203;
            Lambda = 3;
            Beta->Gamma++;
            Iota->Rod->Gamma++;
            Iota->Cone->Gamma++;
            return new Qiao(Beta, Iota);
        }

        void Alpha() {
            lock_guard<mutex> K(Kappa);
            if (Lambda != 3) throw 204;
            Lambda = 0;
        }
    };
}