#include "pch.h"

#include "Quark.h"

namespace Dysnomia {
    generic <typename T1, typename T2, typename T3>
    where T1 : Epsilon 
    where T2 : Epsilon 
    where T3 : Epsilon
    Quark<T1, T2, T3>::Quark(T1 Y, T2 X, T3 Z)
    {
        N = Y;
        I = X;
        R = Z;

        if (!N->Epsilon == 0)
            this->Epsilon = N->Epsilon;
        else if (!I->Epsilon == 0)
            this->Epsilon = I->Epsilon;
        else if (!R->Epsilon == 0)
            this->Epsilon = R->Epsilon;
        else throw gcnew Exception("Zero Epsilons");
    }
}