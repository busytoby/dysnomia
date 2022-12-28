#include "pch.h"

#include "Ion.h"

namespace Dysnomia {
    BigInteger Ion::Form() {
        Cone->Form(Nu);
        Cone->Polarize();
        return Cone->Pole;
    }

    void Ion::Adduct(BigInteger Dynamo) {
        Cone->Adduct(Dynamo);
        Cone->Open();
    }
}