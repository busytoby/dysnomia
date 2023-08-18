﻿#include <Windows.h>
#include <time.h>
#include "007_錨.h"
#include "Domain/Diatom.h"
#include "Domain/Atmos.h"
#include "Lib/Window.h"

using namespace Dysnomia;
using namespace std;

HANDLE 錨::hConsole;

ည* Mu;

/* 1
Fa* Mu;
Fa* Rho;
Faung* Psi;
*/

// 2
//Atmos* Tod::Eta;
//錨* Mu;

// 2
//Diatom* Pi(int);
//void ShowWindow1();

int main() {
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Mu = new ည();

    /* 1
    Mu = new Fa();
    Rho = new Fa();
    Psi = new Faung(Mu, Rho);
    Psi->Theta(666);
    Int64 Upsilon = Mu->Torque(666);
    Int64 Ohm = Mu->Amplify(Upsilon);
    Int64 Pi = Mu->Sustain(Ohm);
    Mu->React(Pi, Rho->Dynamo);
    Rho->React(Pi, Mu->Dynamo);

    Int64 Upsilon2 = Rho->Torque(Mu->Kappa);
    Int64 Ohm2 = Rho->Amplify(Upsilon2);
    Int64 Pi2 = Rho->Sustain(Ohm2);
    Mu->React(Pi2, Mu->Channel);
    Rho->React(Pi2, Rho->Channel);

    Int64 Upsilon3 = Rho->Torque(Mu->Eta);
    Int64 Ohm3 = Rho->Amplify(Upsilon3);
    Int64 Pi3 = Rho->Sustain(Ohm3);
    Rho->React(Pi3, Rho->Dynamo);
    Mu->React(Pi3, Mu->Dynamo);

    if (Mu->Eta != Rho->Kappa) throw 1;
    if (Mu->Kappa != Rho->Eta) throw 2;
    */
    int v = 4;
}

/* 2
int main()
{
    HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);

    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    thread wnd = thread(ShowWindow1);
    wnd.detach();

    Mu = new 錨();
    list<pair<Diatom*, list<Faung*>::iterator>> Psi;

    for (;;) {
        Diatom* Beta = Pi((rand() % 14) + 1);

        Fa* Iota = new Fa();
        Iota->Fuse(Tod::Eta->Mu->Secret, Tod::Eta->Mu->Signal, Tod::Eta->Mu->Channel);
        Iota->Tune();
        list<Faung*>::iterator Omicron = Tod::Eta->Rho.insert(Tod::Eta->Rho.begin(), new Faung(Iota, Beta->Rho));
        Iota->Gamma--;
        Psi.push_back(make_pair(Beta, Omicron));
        
        Mu->Mu_Mutex.lock();
        Mu->counter++;
        SetConsoleTextAttribute(錨::hConsole, 8);
        wcout << L"藻";
        if (Mu->counter % 55 == 0) wcout << L"\n";
        Mu->Mu_Mutex.unlock();

        list<pair<Diatom*, list<Faung*>::iterator>>::iterator Lambda = Psi.begin();
        while (Psi.size() > 0 && Lambda != Psi.end()) {
            size_t DiatomSize = (*Lambda).first->Mu.size();
            if (DiatomSize == 1) {
                ++Lambda; continue;
            }
            list<pair<Diatom*, list<Faung*>::iterator>>::iterator Xi = Psi.begin();
            while (Xi != Psi.end()) {
                if ((*Xi).first->Mu.size() == 1) {
                    if (!(*Lambda).first->Eat((*Xi).first)) 
                        break;;
                    delete (*Xi).first;
                    delete* ((*Xi).second);
                    Tod::Eta->Rho.erase((*Xi).second);
                    Xi = Psi.erase(Xi);
                    Mu->Mu_Mutex.lock();
                    Mu->counter++;
                    SetConsoleTextAttribute(錨::hConsole, 4);
                    wcout << L"义";
                    if (Mu->counter % 55 == 0) wcout << L"\n";
                    Mu->Mu_Mutex.unlock();
                } else
                    Xi++;
            }
            if (Tod::Eta->Water < DiatomSize) {
                if ((*Lambda).first->Mu.size() == 14) {
                    pair<Diatom*, Diatom*> Alpha = (*Lambda).first->Split();
                    Iota = new Fa();
                    Iota->Fuse(Tod::Eta->Mu->Secret, Tod::Eta->Mu->Signal, Tod::Eta->Mu->Channel);
                    Iota->Tune();
                    Omicron = Tod::Eta->Rho.insert(Tod::Eta->Rho.begin(), new Faung(Iota, Alpha.first->Rho));
                    Iota->Gamma--;
                    Psi.push_back(make_pair(Alpha.first, Omicron));

                    Iota = new Fa();
                    Iota->Fuse(Tod::Eta->Mu->Secret, Tod::Eta->Mu->Signal, Tod::Eta->Mu->Channel);
                    Iota->Tune();
                    Omicron = Tod::Eta->Rho.insert(Tod::Eta->Rho.begin(), new Faung(Iota, Alpha.second->Rho));
                    Iota->Gamma--;
                    Psi.push_back(make_pair(Alpha.second, Omicron));
                    Tod::Eta->Water += 4;
                    Mu->Mu_Mutex.lock();
                    Mu->counter++;
                    SetConsoleTextAttribute(錨::hConsole, 5); 
                    wcout << L"迸";
                    if (Mu->counter % 55 == 0) wcout << L"\n";
                    Mu->Mu_Mutex.unlock();
                }
                delete (*Lambda).first;
                delete *((*Lambda).second);
                Tod::Eta->Rho.erase((*Lambda).second);
                Tod::Eta->Water += DiatomSize;
                Lambda = Psi.erase(Lambda);
                Mu->Mu_Mutex.lock();
                Mu->counter++;
                SetConsoleTextAttribute(錨::hConsole, 7);
                wcout << L"藻";
                if (Mu->counter % 55 == 0) wcout << L"\n";
                Mu->Mu_Mutex.unlock();
            }
            else {
                if ((*Lambda).first->Mu[0]->Sigma->Upsilon->Eta == 0) 
                    Tod::Eta->Water++;
                Tod::Eta->Water = (Tod::Eta->Water > (DiatomSize/3)) ? Tod::Eta->Water - (DiatomSize/3) : 0;
                ++Lambda;
            }
        }

        Mu->Mu_Mutex.lock();
        Mu->counter++;
        SetConsoleTextAttribute(錨::hConsole, 6);
        if (Psi.size() > 0) {
            if (Psi.size() < 10) wcout << L" " << Psi.size();
            else wcout << Psi.size();
        }
        else wcout << L"--";
        if (Mu->counter % 55 == 0) wcout << L"\n";
        Mu->Mu_Mutex.unlock();
    }
}
*/

/* 2
Diatom* Pi(int Number) {
    while (Mu->Qing.size() < 14) {
        std::this_thread::sleep_for(chrono::milliseconds(100));
    }

    return new Diatom(Mu->Qing);
}

void ShowWindow1() {
    Window* DW = new Window();
    DW->Init();
    DW->Step();    
}
*/