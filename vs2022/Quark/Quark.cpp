#include "pch.h"

#include "Quark.h"

namespace Dysnomia {
    Quark::Quark(Quaternion^ Y, Quaternion^ X, Quaternion^ Z)
    {
        N = Y;
        R = X;
        L = Z;

        Epsilon = L->Epsilon;
    }
}