#include "pch.h"

#include "Ion.h"
/*
Ordered Pairs:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn;
*/

namespace Dysnomia {
	Ion::Ion(Dynamic Boson) {
        R = gcnew Dynamic(Boson);
        Ir.Foundation = BigInteger::ModPow(R->Identity, R->Barn, Math::Prime); // Patent Lepton
        Ir.Element = BigInteger::ModPow(Ir.Foundation, R->Foundation, Math::Prime); // Catalan Prime Magnetic Paradox Tau
        Ir.Dynamo = BigInteger::ModPow(R->Dynamo, Ir.Element, Math::Prime); // Patent Muon
        Ir.Manifold = BigInteger::ModPow(Ir.Foundation, Ir.Element, Math::Prime); // Patent Electron
	}

    void Ion::Nitrate(BigInteger G)
    {
        Ir.Ring = BigInteger::ModPow(G, R->Signal, Math::Prime);
    }

    Ion^ Ion::Push()
    {
        return Push(Ir.Element); // Patent Start
    }

    Ion^ Ion::Push(BigInteger RL)
    {
        if (Ir.Barn.IsZero)
            Ir.Prime = Ir.Barn = BigInteger::ModPow(
                BigInteger::ModPow(RL, Ir.Element, Math::Prime),
                Ir.Manifold,
                Math::CatalanPrime);
        else
            Ir.Prime = BigInteger::ModPow(
                BigInteger::Add(
                    BigInteger::ModPow(Ir.Barn, Ir.Dynamo, Math::Prime),
                    BigInteger::ModPow(RL, Ir.Dynamo, Math::Prime)
                ),
                Ir.Element,
                Ir.Prime); // Patent Specific Gravity
        return this; // Patent Graviton
    }

}