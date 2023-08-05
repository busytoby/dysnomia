#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <thread>
#include "006_锚.h"

using namespace Dysnomia;
using namespace std;

const int nthreads = 11;
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
    锚* Mu;
    Fa* Rho;
    Fa* Psi;
    //Faung* Nu;

    int local_count;

    for (;;) {
        Mu = new 锚();
        Rho = Mu->Pi(Phi);
        Psi = Mu->Pi(Rho->Eta);
        Phi = Psi->Eta;

        if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
        if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
        //if (Nu->Rod->Gamma <= 1 || Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
        std::this_thread::sleep_for(chrono::nanoseconds(rand() % 1000));

        local_count = ++counter;
        if (local_count % 10000 == 0) cout << "锚";
        if (local_count % 1000000 == 0) cout << "第 " << (local_count / 1000000) << "m\n";
    }
}