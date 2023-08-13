#include <Windows.h>
#include <time.h>
#include "007_錨.h"
#include "Domain/Diatom.h"
#include "Domain/Atmos.h"

using namespace Dysnomia;
using namespace std;

HANDLE 錨::hConsole;

Atmos* Tod::Eta;
錨* Mu;

Diatom* Pi(int);

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

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
            if (Tod::Eta->Water < DiatomSize) {
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
                Tod::Eta->Water -= DiatomSize;
                ++Lambda;
            }
        }
    }
}

Diatom* Pi(int Number) {
    if (Number > 14) throw 3;
    while (Mu->Qing.size() < Number) {
        std::this_thread::sleep_for(chrono::milliseconds(100));
    }

    return new Diatom(Mu->Qing, Number);
}