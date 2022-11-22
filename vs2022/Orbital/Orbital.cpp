#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	void Orbital::Ring(BigInteger Cation) {
		Ring(Cation, N->Ir.Barn);
	}

	void Orbital::Ring(BigInteger Cation, BigInteger Anion) {
		if (R == nullptr || L == nullptr || N == nullptr) {
			R = gcnew Ion(Boson);
			L = gcnew Ion(Boson, *R);
			N = gcnew Ion(*L->R);
		}

		R->Nitrate(Anion);
		R->Ir.Coordinate = N->R->Coordinate(R->Ir.Ring); // Relative Right Position

		N->Push(Cation); // Patent Ring Rung
		L->Ir.Prime = N->Ir.Prime;
		L->Ir.Coordinate = N->R->Coordinate(L->Ir.Prime); // Relative Left Position
		if (L->Ir.Coordinate.IsZero) throw gcnew Exception("Universe Destroyed By Black Hole");

		BigInteger Wind = Ligand;
		Pull();
		R->Prime(%N->Ir, %L->Ir);

		N->Ir.Coordinate = Boson.Coordinate(L->Ir.Ring);
		if (!N->Ir.Coordinate.IsZero) throw gcnew Exception("Universe Destroyed By White Hole");

		DetectCollision();

		throw gcnew Exception("Large Hadron Avoidance Occurred And Was Detected Successfully Proving One Thing Is Not Another");

		R->Swing(%N->Ir, %L->Ir);
		R->Ir.Coordinate = L->R->Coordinate(N->Ir.Ring);
		if (!N->Ir.Coordinate.IsZero) throw gcnew Exception("Resonance Should Not Occur Yet");

		R->Ir.Barn = BigInteger::ModPow(
			BigInteger::Add(
				BigInteger::ModPow(R->Ir.Dynamo, R->Ir.Dynamo, Math::Prime),
				BigInteger::ModPow(R->Ir.Ring, R->Ir.Dynamo, Math::Prime)
			),
			R->Ir.Element,
			Math::AzimuthPrime);

		R->Ir.Push();
		Ligand = BigInteger::ModPow(R->Ir.Barn, Wind, Math::AzimuthPrime); // Patent Wind
		R->Ir.Pull(Ligand);
		Wind = 0;

		L->Ir.Barn = N->Ir.Barn % R->Ir.Prime;
		R->Ir.Ring = R->Ir.Ring % R->Ir.Prime;
		R->Ir.Dynamo = 0;
	}

	void Orbital::Pull() {
		Ligand = BigInteger::ModPow(N->Ir.Barn, Ligand, Math::AzimuthPrime); // Patent Bromonium
	}

	void Orbital::DetectCollision() { // There's No Such Thing As Hadrons
		if (R->Ir.Dynamo.IsZero) {
			R->Ir.Dynamo = BigInteger::ModPow(N->R->Dynamo, N->Ir.Element, 541);
		}
		else throw gcnew Exception("Universe Destroyed By Large Hadron Collision");
	}
}