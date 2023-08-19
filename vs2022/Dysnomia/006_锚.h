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

        Fa* Pi(Int64 Alpha) {
            throw 500; // this will produce water
            vector<Faung*> Beta(3);
            Fa* Iota;
            
            Int64 Lambda = Alpha;
            for (int i = 0; i < Beta.size(); i++) {
                Nu->Theta(Lambda);
                Lambda = Nu->Omicron;
                Beta[i] = new Faung(
                    Math::ModPow(Lambda, Nu->Rho, Nu->Omega),
                    Math::ModPow(Nu->Upsilon, Lambda, Nu->Omega),
                    Math::ModPow(Lambda, Nu->Sigma, Nu->Omicron),
                    Math::ModPow(Nu->Rod->Signal, Lambda, Nu->Omicron));
            }
            Iota = new Fa();
            Iota->Fuse(Beta[2]->Cone->Dynamo, Beta[1]->Cone->Ring, Beta[0]->Cone->Barn);
            Iota->Tune();
            Iota->Polarize();
            Iota->Conjugate(&Beta[1]->Eta);
            Iota->Saturate(Beta[2]->Rho, Iota->Pole);
            Iota->Open();

            for (int i = 0; i < Beta.size(); i++) delete Beta[i];
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