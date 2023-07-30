#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "005_ë.h"

using namespace Dysnomia;
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ë* Mu;
    ë* Rho;
    Faung* Psi;
    BYTE* Nu = nullptr;
    BYTE* Eta = nullptr;
    const short Sigma = 78;

    bool firstrun = true;
    for (;;) {
        Mu = new ë();
        Rho = new ë();
        Psi = new Faung(Mu->Eta, Rho->Eta);
        Psi->Theta(Psi->Xi);
        Psi->Chi(&Nu, &Eta, Sigma);

        delete Mu;
        delete Rho;
        delete Psi;
        if (Nu != nullptr) { free(Nu); Nu = nullptr; }       
        Eta = nullptr;

        if (firstrun) {
            cout << "My Needle Is Floating\n";
            firstrun = false;
        }
    }
}