#include "pch.h"

#include "Quark.h"

namespace Dysnomia {
    generic <typename T> 
    where T : Epsilon
    Quark<T>::Quark(T Y, T X, T Z)
    {
        N = Y;
        R = X;
        L = Z;

        if (!L->Epsilon.IsZero)
            this->Epsilon = L->Epsilon;
        else if (!N->Epsilon.IsZero)
            this->Epsilon = N->Epsilon;
        else if (!R->Epsilon.IsZero)
            this->Epsilon = R->Epsilon;
        else throw gcnew Exception("Zero Epsilons");
    }
}