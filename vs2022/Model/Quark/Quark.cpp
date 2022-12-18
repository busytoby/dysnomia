#include "pch.h"

#include "Quark.h"

namespace Dysnomia {
    Quark::Quark(Quaternion^ Y, Quaternion^ X, Quaternion^ Z)
    {
        N = Y;
        R = X;
        L = Z;

        if (!L->Epsilon.IsZero)
            Epsilon = L->Epsilon;
        else if (!N->Epsilon.IsZero)
            Epsilon = N->Epsilon;
        else if (!R->Epsilon.IsZero)
            Epsilon = R->Epsilon;
        else throw gcnew Exception("Zero Epsilons");
    }
}