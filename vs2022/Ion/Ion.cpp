#include "pch.h"

#include "Ion.h"
/*
Ordered Pairs:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn;
*/

namespace Dysnomia {
    Ion::Ion() {}

	Ion::Ion(Dynamic Boson) {
        P = gcnew Dynamic(Boson);

        V.H = BigInteger::ModPow(P->Base, P->Barn, Math::Prime);
        V.T = BigInteger::ModPow(V.H, P->Element, Math::CatalanPrime);
        V.S = BigInteger::ModPow(V.T, P->Signal, Math::CatalanPrime);
	}

    void Ion::Avail(BigInteger Sb)
    {
        V.O = BigInteger::ModPow(Sb, P->Signal, Math::CatalanPrime); // Patently Oxygen
    }

    BigInteger Ion::Hydrate()
    {
        return Hydrate(V.S);
    }

    BigInteger Ion::Hydrate(BigInteger RL)
    {
        V.P = BigInteger::ModPow(
            BigInteger::Add(
                BigInteger::ModPow(P->Barn, V.O, Math::CatalanPrime),
                BigInteger::ModPow(RL, V.O, Math::CatalanPrime)
            ), 
            P->Dynamo, 
            Math::AzimuthPrime);
        return V.P;
    }

}