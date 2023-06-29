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

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            return Alpha;
        }

        ~Wou() {
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Wou(Beit* Beta) {
            Beta->Gamma++;
            Mu = Beta;
            pair<Eun*, Eun*> Five = Mu->Mu->Rho->Upsilon->Kappa();
            Rho = Five.first;
            Psi = Five.second;
            Nu = new Song(Psi);
        }

        Wou() {
            Mu = new Beit();
            pair<Eun*, Eun*> Five = Mu->Mu->Rho->Upsilon->Kappa();
            Rho = Five.first;
            Psi = Five.second;
            Nu = new Song(Psi);
        }

        Faung* Omega() {
            lock_guard<mutex> K(Kappa);
            if (Lambda != 0) return nullptr;
            Lambda = 1;
            return Mu->Eta->Sigma->Kappa(Mu->Eta->Eta->Tau);
        }

        Sulphur* Pi(Faung* Beta) {
            lock_guard<mutex> K(Kappa);
            if (Lambda != 0) throw 201;
            Lambda = 1;
            Beta->Rod->Gamma++;
            Beta->Cone->Gamma++;
            return new Sulphur(Beta);
        }

        Iron* Tau(Sulphur* Beta, Faung* Iota, Faung* Omicron) {
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

        Qiao* Theta(Iron* Beta, Faung* Iota) {
            lock_guard<mutex> K(Kappa);
            if (Lambda != 2) throw 203;
            Lambda = 3;
            Beta->Gamma++;
            Iota->Rod->Gamma++;
            Iota->Cone->Gamma++;
            return new Qiao(Beta, Iota);
        }

        void Alpha(bool Zero = false) {
            lock_guard<mutex> K(Kappa);
            if (Zero = true) Lambda = 0;
            else if (Lambda != 3) throw 204;
            else if (Zero == false)
                Lambda = 1;
        }
    };
}