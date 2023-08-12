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
        for (int i = 1; i < 15; i++) {
            Diatom* Beta = Mu->Pi(i);
            delete Beta;
        }
    }
}