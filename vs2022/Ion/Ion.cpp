#include "pch.h"

#include "Ion.h"

namespace Dysnomia {
    Ion::Ion() {
        M = gcnew Affinity();
    }

    Ion::Ion(Affinity^ A) {
        M = A;
    }

    BigInteger Ion::Form() {
        M->Cone->Form(Nu);
        M->Cone->Polarize();
        return M->Cone->Pole;
    }

    void Ion::Adduct(BigInteger Dynamo) {
        M->Cone->Adduct(Dynamo);
        M->Cone->Open();
    }
}