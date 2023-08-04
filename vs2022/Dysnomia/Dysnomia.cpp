﻿#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <thread>
#include "005_ë.h"

using namespace Dysnomia;
using namespace std;

const int nthreads = 4;
std::atomic<int> counter;
std::atomic<Int64> Phi;

void Tau();

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    vector<std::thread> threads(nthreads);

    counter = 0;
    Phi = 0;
    
    for (int i = 0; i < threads.size(); i++) {
        threads[i] = thread(Tau);
    }

    for (thread& th : threads)
        th.join();

}

void Tau() {
    Zuo* Mu;
    ë* Rho;
    ë* Psi;
    Faung* Nu;
    vector<Faung*> Eta(3);
    Fa* Sigma;

    int local_count;

    for (;;) {
        Mu = new Zuo();
        Rho = new ë(Mu, true);
        Psi = new ë(Mu, false);
        Nu = new Faung(Rho->Sigma->Upsilon, Psi->Sigma->Upsilon);
        
        for (int i = 0; i < Eta.size(); i++) {
            Nu->Theta(Phi);
            Phi = Nu->Omicron;
            Eta[i] = new Faung(
                Math::ModPow(Nu->Rho, Nu->Omicron, Nu->Omega),
                Math::ModPow(Nu->Upsilon, Nu->Omicron, Nu->Omega),
                Math::ModPow(Nu->Sigma, Nu->Omega, Nu->Omicron),
                Math::ModPow(Nu->Rod->Signal, Nu->Omega, Nu->Omicron));
        }
        Sigma = new Fa();
        Sigma->Fuse(Eta[2]->Cone->Dynamo, Eta[1]->Cone->Ring, Eta[0]->Cone->Barn);
        Sigma->Tune();
        Sigma->Polarize();
        Sigma->Conjugate(&Nu->Eta);
        Phi = Sigma->Saturate(Nu->Rho, Sigma->Pole);

        if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
        if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
        if (Nu->Rod->Gamma <= 1 || Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
        for (int i = 0; i < Eta.size(); i++) delete Eta[i];
        delete Sigma;

        local_count = ++counter;
        if (local_count % 10000 == 0) cout << "锚";
        if (local_count % 1000000 == 0) cout << "第 " << (local_count / 1000000) << "m\n";
    }
}