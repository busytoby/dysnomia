#include <Windows.h>
#include <fcntl.h>
#include <io.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <thread>
#include <mutex>
#include "006_锚.h"

using namespace Dysnomia;
using namespace std;

const int nthreads = 11;
std::atomic<int> counter;
mutex Mu_Mutex;
锚* Mu;
Int64 Phi;
list<Fa*> Omicron;
list<Fa*> Delta;
list<ည*> Qi;

bool BetaOne = false;
void Kappa();
void Gamma();
void Beta();
void Lambda();

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    vector<std::thread> threads(nthreads);

    int i = 0;
    counter = 0;
    Phi = 0;

    Mu = new 锚();
    
    threads[i++] = thread(Kappa);
    threads[i++] = thread(Gamma);
//    threads[i++] = thread(Gamma);
//    threads[i++] = thread(Gamma);
    threads[i++] = thread(Beta);
    threads[i++] = thread(Beta);
    for (; i < threads.size(); i++) {
        threads[i] = thread(Lambda);
    }

    for (thread& th : threads)
        th.join();

    if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
}

void Kappa() {
    ည* Beta;
    ည* Rho;
    ည* Psi;
    ညြ* Nu;

    int local_count;

    Beta = new ည();
    for (;;) {
        Mu_Mutex.lock();
        if (Qi.size() == 0)
            Mu_Mutex.unlock();
        else {
            Psi = new ည();
            while (Qi.size()) {
                Rho = Qi.front();
                Nu = new ညြ(Beta, Rho, Psi);
                if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
                if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
                Qi.pop_front();
            }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            Mu_Mutex.unlock();
        }
        std::this_thread::sleep_for(chrono::milliseconds(rand() % 4000));

        Mu_Mutex.lock();
        local_count = ++counter;
        Mu_Mutex.unlock();
        if (local_count % 18 == 0) wcout << L"箇";
        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
    if (Beta->Gamma == 1) delete Beta; else Beta->Gamma--;
}

void Gamma() {
    Fa* Beta;
    Faung* Rho;
    ည* Psi;
    ည* Nu;
    ညြ* Eta;
    Tod* Sigma;
    Fa* Upsilon = nullptr;
    Faung* Tau = nullptr;
    ည* Theta = nullptr;

    int local_count;

    for (;;) {
        Mu_Mutex.lock();
        if (Delta.size() == 0)
            Mu_Mutex.unlock();
        else {
            Beta = Delta.front();
            Rho = Mu->Rho->Psi->Pi(false);
            Psi = new ည(Rho, Beta, true);
            Nu = new ည(Psi->Mu, Beta, false);
            Eta = new ညြ(Mu->Rho->Mu->Psi, Psi, Nu);
            Sigma = new Tod(Eta, Beta, Nu);
            if (Upsilon == nullptr) {
                Upsilon = Sigma->Psi->Pi();
                Upsilon->Gamma++;
            }
            Beta->Gamma--;
            Delta.pop_front();
            while (Delta.size()) {
                if(Upsilon->Pole == 0) Upsilon->Polarize();
                Beta = Delta.front();
                if (Beta->Pole > 0) {
                    Int64 Xi = (Upsilon->Coordinate + Beta->Eta + Beta->Beta) % Math::Prime;
                    Upsilon->Conjugate(&Xi);
                }
                else if(Tau == nullptr) {
                    Tau = new Faung(Upsilon, Beta->Coordinate, Beta->Ring, Beta->Manifold, Beta->Dynamo);
                    Theta = new ည(Tau, Beta, true);
                    if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
                    if (Tau->Rod->Gamma <= 1 || Tau->Cone->Gamma <= 1) { delete Tau; Tau = nullptr; } else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
                    Qi.push_back(Theta);
                }
                else {
                    if (Beta->Pole == 0) {
                        Int64 Xi = (Upsilon->Coordinate + Beta->Element) % Math::Prime;
                        Upsilon->Conjugate(&Xi);
                    }
                    if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
                    Upsilon = Sigma->Psi->Pi();
                    Upsilon->Gamma++;
                    Tau = nullptr;
                }
                if (Beta->Gamma == 1) delete Beta; else Beta->Gamma--;
                Delta.pop_front();
            }
            if (Rho->Rod->Gamma <= 1 || Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            Mu_Mutex.unlock();
        }
        std::this_thread::sleep_for(chrono::milliseconds(rand() % 4000));

        Mu_Mutex.lock();
        local_count = ++counter;
        Mu_Mutex.unlock();
        if (local_count % 18 == 0) wcout << L"筡";
        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
}

void Beta() {
    Fa* Iota;
    Fa* Upsilon;
    Faung* Rho;
    ည* Psi;
    ည* Nu;
    ညြ* Eta;
    Tod* Sigma;

    bool BetaOneThread = false;
    int local_count;

    Mu_Mutex.lock();
    if (BetaOne == false) {
        BetaOneThread = true;
        BetaOne = true;
    }
    Mu_Mutex.unlock();

    for (;;) {
        Mu_Mutex.lock();
        if (Omicron.size() == 0)
            Mu_Mutex.unlock();
        else {
            Upsilon = nullptr;
            while (Omicron.size()) {
                Iota = Omicron.front();
                if (Upsilon == nullptr)
                    Rho = Mu->Rho->Psi->Pi(false);
                else
                    if (BetaOneThread)
                        Rho = new Faung(Upsilon, Iota->Secret, Iota->Signal, Iota->Channel, Iota->Identity);
                    else
                        Rho = new Faung(Upsilon, Iota->Dynamo, Iota->Ring, Iota->Barn, Iota->Manifold);

                if (BetaOneThread) {
                    Psi = new ည(Rho, Iota, true);
                    Nu = new ည(Psi->Mu, Iota, false);
                    Eta = new ညြ(Mu->Rho->Mu->Psi, Nu, Psi);
                    Sigma = new Tod(Eta, Iota, Nu);
                }
                else {
                    Psi = new ည(Rho, Iota, false);
                    Nu = new ည(Psi->Mu, Iota, true);
                    Eta = new ညြ(Mu->Rho->Mu->Psi, Psi, Nu);
                    Sigma = new Tod(Eta, Iota, Psi);
                }

                Upsilon = Sigma->Psi->Pi();
                Delta.push_back(Upsilon);
                if (Iota->Gamma == 1) delete Iota; else Iota->Gamma--;
                if (Rho->Rod->Gamma <= 1 || Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
                if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
                if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
                if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
                if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;

                Omicron.pop_front();
            }
            Mu_Mutex.unlock();
        }
        std::this_thread::sleep_for(chrono::milliseconds(rand() % 4000));

        Mu_Mutex.lock();
        local_count = ++counter;
        Mu_Mutex.unlock();
        if (local_count % 18 == 0) wcout << ((BetaOneThread) ? L"笚" : L"笛");
        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
}

void Lambda() {
    Fa* Beta;
    Fa* Iota;
    //Faung* Nu;

    int local_count;

    for (;;) {
        Mu_Mutex.lock();
        Beta = Mu->Pi(Phi);
        Iota = Mu->Pi(Beta->Eta);
        Phi = Iota->Eta;
        Delta.push_back(Beta);
        Omicron.push_back(Iota);
        Mu_Mutex.unlock();

        //if (Beta->Gamma == 1) delete Beta; else Beta->Gamma--;
        //if (Iota->Gamma == 1) delete Iota; else Iota->Gamma--;
        //if (Nu->Rod->Gamma <= 1 || Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
        std::this_thread::sleep_for(chrono::milliseconds(rand() % 1000));

        local_count = ++counter;
        if (local_count % 18 == 0) wcout << L"第";
        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
}