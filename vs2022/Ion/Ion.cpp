#include "pch.h"

#include "Ion.h"
/*
Ordered Pairs:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn;
*/

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