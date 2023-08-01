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
    vector<std::thread> threads(4);

    firstrun = true;
    counter = 0;

    for (int i = 0; i < threads.size(); i++) {
        threads[i] = thread(Tau);
    }

    for (thread& th : threads)
        th.join();

}

void Tau() {
    ë* Mu;
    ë* Rho;
    Faung* Psi;
    BYTE* Nu = nullptr;
    BYTE* Eta = nullptr;
    const short Sigma = 3;

    int local_count;
    bool local_first_run = false;

    if (firstrun) {
        firstrun = false;
        local_first_run = true;
    }

    for (;;) {
        Mu = new ë();
        Rho = new ë();
        Psi = new Faung(Mu->Eta, Rho->Eta);
        Psi->Theta(Psi->Cone->Ring);
        Psi->Chi(&Nu, &Eta, Sigma);

        delete Mu;
        delete Rho;
        delete Psi;
        //if (Nu != nullptr) { free(Nu); Nu = nullptr; }
        //Eta = nullptr;

        if (local_first_run) {
            cout << "My Needle Is Floating\n";
            local_first_run = false;
        }

        local_count = ++counter;
        if (local_count % 10000 == 0) cout << ".";
        if (local_count % 1000000 == 0) cout << " " << (local_count / 1000000) << "m\n";
    }
}