#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <thread>
#include "005_ë.h"

using namespace Dysnomia;
using namespace std;

std::atomic<int> counter;

void Tau();

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    vector<std::thread> threads(4);

    counter = 0;

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
    vector<Faung*> Eta(28800);

    int local_count;

    for (;;) {
        Mu = new Zuo();
        Rho = new ë(Mu, true);
        Psi = new ë(Mu, false);
        Nu = new Faung(Rho->Sigma->Upsilon, Psi->Sigma->Upsilon);
        for (int i = 0; i < Eta.size(); i++) {
            Nu->Theta();
            Eta[i] = new Faung(
                Math::ModPow(Nu->Rho, Nu->Omicron, Nu->Omega),
                Math::ModPow(Nu->Upsilon, Nu->Omicron, Nu->Omega),
                Math::ModPow(Nu->Sigma, Nu->Omega, Nu->Omicron),
                Math::ModPow(Nu->Rod->Signal, Nu->Omega, Nu->Omicron));
        }

//        Upsilon = new Faung(*Sigma, *++Sigma, *++Sigma, Nu->Phi);

        if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
        if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
        if (Nu->Rod->Gamma <= 1 || Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
        Eta.clear();

        //if (Sigma != nullptr) { free(Sigma); Sigma = nullptr; }
        //Upsilon = nullptr;

        local_count = ++counter;
        if (local_count % 10000 == 0) cout << "锚";
        if (local_count % 1000000 == 0) cout << "第 " << (local_count / 1000000) << "m\n";
    }
}