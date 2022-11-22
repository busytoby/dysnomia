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
        Ir.Element = BigInteger::ModPow(Ir.Foundation, R->Foundation, Math::CatalanPrime); 
        Ir.Dynamo = BigInteger::ModPow(R->Dynamo, Ir.Element, 541); // Patent Muon Is Tightly Coupled
        Ir.Manifold = BigInteger::ModPow(Ir.Foundation, Ir.Element, Math::AzimuthPrime); // Patent Mu-Electron
	}

    Ion::Ion(Dynamic Boson, Ion% L) {
        R = gcnew Dynamic(Boson);
        Ir.Foundation = BigInteger::ModPow(R->Identity, L.Ir.Barn, Math::CatalanPrime); 
        Ir.Element = BigInteger::ModPow(Ir.Foundation, L.Ir.Foundation, Math::Prime); 
        Ir.Dynamo = BigInteger::ModPow(R->Dynamo, Ir.Element, Math::AzimuthPrime);
        Ir.Manifold = BigInteger::ModPow(R->Foundation, L.Ir.Element, Math::AzimuthPrime); // Patent Mu Electron
    }

    void Ion::Nitrate(BigInteger G)
    {
        if(Ir.Ring.IsZero)
            Ir.Ring = BigInteger::ModPow(G, R->Signal, Math::Prime);
        else {
            Ir.Ring = BigInteger::Add(Ir.Ring,
                BigInteger::ModPow(G, R->Signal, Math::Prime));
        }
        Ir.Prime = Ir.Ring;
    }

    void Ion::Prime(Valence^ N, Valence^ L) {
        N->Dynamo = Ir.Dynamo;
        Ir.Prime = BigInteger::ModPow(
            BigInteger::Add(
                BigInteger::ModPow(N->Barn, Ir.Dynamo, Math::CatalanPrime),
                BigInteger::ModPow(Ir.Prime, N->Dynamo, N->Prime)
            ),
            Ir.Element,
            Ir.Prime);
        Ir.Dynamo = 0;
    }

    void Ion::Swing(Valence^ N, Valence^ L) { // Nucleophilic Substitution
        Ir.Barn = BigInteger::ModPow(
            BigInteger::Add(
                BigInteger::ModPow(L->Dynamo, N->Dynamo, N->Prime), // at Trigonal Carbon (-c -x)
                BigInteger::ModPow(N->Dynamo, Ir.Dynamo, N->Prime) // n4
            ),
            Ir.Element, // R
            Ir.Prime); // O = 4
    }

    void Ion::Push(BigInteger RL)
    {
        if (Ir.Barn.IsZero)
            Ir.Prime = Ir.Barn = BigInteger::ModPow(
                BigInteger::ModPow(Ir.Element, R->Element, Math::Prime),
                Ir.Manifold,
                Math::CatalanPrime);

        Ir.Prime = BigInteger::ModPow(
            BigInteger::Add(
                BigInteger::ModPow(Ir.Barn, Ir.Dynamo, Math::Prime),
                BigInteger::ModPow(RL, Ir.Dynamo, Math::Prime)
            ),
            Ir.Element,
            Ir.Prime);
        Ir.Dynamo = 0;
    }

}