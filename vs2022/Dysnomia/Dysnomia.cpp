﻿#include <Windows.h>
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

void Gamma();
void Beta();
void Lambda();

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    vector<std::thread> threads(nthreads);

    int i = 0;
    counter = 0;
    Phi = 0;

    Mu = new 锚();
    
    threads[i++] = thread(Gamma);
    threads[i++] = thread(Beta);
    for (; i < threads.size(); i++) {
        threads[i] = thread(Lambda);
    }

    for (thread& th : threads)
        th.join();

    if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
}

void Gamma() {
    for (;;) {
        Mu_Mutex.lock();
        if (Delta.size() == 0)
            Mu_Mutex.unlock();
        else {
            while (Delta.size()) {
                Fa* Beta = Delta.front();
                if (Beta->Gamma == 1) delete Beta; else Beta->Gamma--;
                Delta.pop_front();
            }
            Mu_Mutex.unlock();
        }
        std::this_thread::sleep_for(90ms);
    }
}

void Beta() {
    for (;;) {
        Mu_Mutex.lock();
        if (Omicron.size() == 0)
            Mu_Mutex.unlock();
        else {
            while (Omicron.size()) {
                Fa* Iota = Omicron.front();
                Faung* Rho = Mu->Rho->Psi->Pi(false);
                ည* Psi = new ည(Rho, Iota, true);
                ည* Nu = new ည(Psi->Mu, Iota, false);
                ညြ* Eta = new ညြ(Mu->Rho->Mu->Psi, Psi, Nu);
                Tod* Sigma = new Tod(Eta, Nu, Iota);
                Fa* Upsilon = Sigma->Psi->Pi();
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
        std::this_thread::sleep_for(30ms);
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
        if (local_count % 10 == 0) cout << "第";
        if (local_count % 1000 == 0) cout << "錨 " << (local_count / 1000) << "k\n";
    }
}