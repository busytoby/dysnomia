#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <thread>
#include "005_ë.h"

using namespace Dysnomia;
using namespace std;

std::atomic<int> counter;
std::atomic<bool> firstrun;

void Tau();

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    vector<std::thread> threads(1);

    firstrun = true;
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
    BYTE* Sigma = nullptr;
    BYTE* Upsilon = nullptr;
    const short Theta = 3;

    int local_count;
    bool local_first_run = false;

    if (firstrun) {
        firstrun = false;
        local_first_run = true;
    }

    for (;;) {
        Mu = new Zuo();
        Rho = new ë(Mu, true);
        Psi = new ë(Mu, false);
        Nu = new Faung(Rho->Tau->Upsilon, Psi->Tau->Upsilon);
        Nu->Theta(Nu->Cone->Ring);
        Nu->Chi(&Sigma, &Upsilon, Theta);

        if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
        if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
        if (Nu->Rod->Gamma <= 1 || Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
        //if (Sigma != nullptr) { free(Sigma); Sigma = nullptr; }
        //Upsilon = nullptr;

        if (local_first_run) {
            cout << "My Needle Is Floating\n";
            local_first_run = false;
        }

        local_count = ++counter;
        if (local_count % 10000 == 0) cout << ".";
        if (local_count % 1000000 == 0) cout << " " << (local_count / 1000000) << "m\n";
    }
}