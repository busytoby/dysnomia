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

        V.R = BigInteger::ModPow(P->Identity, P->Barn, Math::Prime);
        V.T = BigInteger::ModPow(V.R, P->Foundation, Math::CatalanPrime); // Catalan Prime Magnetic Paradox
        V.P = BigInteger::ModPow(P->Dynamo, V.T, Math::CatalanPrime);
        V.Y = BigInteger::ModPow(V.R, V.T, Math::CatalanPrime); // Patent Electron
	}

    void Ion::Avail(BigInteger Sb)
    {
        V.O = BigInteger::ModPow(Sb, P->Signal, Math::CatalanPrime); // Patently Oxygen
    }

    BigInteger Ion::Hydrate()
    {
        return Hydrate(V.Y);
    }

    BigInteger Ion::Hydrate(BigInteger RL)
    {
        if (V.E.IsZero)
            V.E = BigInteger::ModPow(
                BigInteger::Add(
                    BigInteger::ModPow(P->Barn, V.O, Math::CatalanPrime),
                    BigInteger::ModPow(RL, V.O, Math::CatalanPrime)
                ),
                V.P,
                Math::AzimuthPrime);
        else
            V.E = BigInteger::ModPow(
                BigInteger::Add(
                    BigInteger::ModPow(V.E, V.O, Math::CatalanPrime),
                    BigInteger::ModPow(RL, V.O, Math::CatalanPrime)
                ),
                V.P,
                Math::AzimuthPrime); // Patent Gravity
        return V.E;
    }

}