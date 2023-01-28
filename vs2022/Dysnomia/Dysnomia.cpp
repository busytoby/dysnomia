#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "08a_Tong.h"
#include "08b_Tsong.h"
#include "13_Fao.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Tong* Mu = new Tong();
    Fao* Rho = new Fao(Mu);
    Tung* Psi = new Tung(Rho->Pi());
    Xiao* Nu = new Xiao(Psi);
    Qiao* Eta = new Qiao(Nu->Theta, Nu->Theta->Beta(), Nu->Theta->Omicron(), Psi->Theta->Mu->Eta);
}
