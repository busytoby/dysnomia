#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	Orbital::Orbital() {
		N = gcnew Dynamic();
		R = gcnew Ion();
		Y = gcnew Ion();
		L = gcnew Ion();
		
		BigInteger Carbenium = L->M->GetElement();
		BigInteger Carbonium = L->M->GetBarn();;

		Bridge(Carbenium);

		BigInteger Ligand = L->M->GetSignal();;
		R->Ligand = Carbonium;

		array<BigInteger>^ EyeExam = Y->M->Determine("Selfish");
	}

	void Orbital::Bridge(BigInteger Ligand) {
		Y->Ligand = N->Avail(Ligand);
		BigInteger Donor = Y->M->Cone->Avail(Ligand);
		N->Form(Donor);
		N->Polarize();
		BigInteger Focus = Y->Form();
		N->Conjugate(Focus);
		BigInteger Paradox = Conjugate(N->Pole);
		N->Saturate(Paradox, Y->M->Cone->Channel);
		Saturate(N->Foundation, N->Channel);
		N->Bond();
		N->Adduct(Y->M->Cone->Dynamo);
		N->Open();
		Y->Adduct(N->Dynamo);

		if (!Y->M->Cone->ManifoldCompare(N)) throw gcnew Exception("Never Failed The Boson Before");
	}

	BigInteger Orbital::Conjugate(BigInteger% Paradox) {
		Y->M->Cone->Conjugate(Paradox);
		Y->M->Cone->Conify();

		return Y->M->Cone->Foundation;
	}

	void Orbital::Saturate(BigInteger Foundation, BigInteger Channel) {
		Y->M->Cone->Saturate(Foundation, Channel);
		Y->M->Cone->Bond();
	}
}