#include <Windows.h>
#include <time.h>
#include "007_錨.h"
#include "Domain/Diatom.h"

using namespace Dysnomia;
using namespace std;


錨* Mu;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    錨* Mu = new 錨();

    for (;;) {
        Diatom* Beta = Mu->Pi((rand() % 14) + 1);
        delete Beta;
    }
}