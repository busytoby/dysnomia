#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	Orbital::Orbital() {
		N = gcnew Dynamic();
		R = gcnew Ion();
		Y = gcnew Ion();
		L = gcnew Ion();
		
		Nu = L->M->GetElement();
		BigInteger Ligate = L->M->GetBarn();

		Bridge(Nu);

		Nu = L->M->GetSignal();
	}

	Orbital::Orbital(Affinity^ A) {
		N = gcnew Dynamic();
		R = gcnew Ion();
		Y = gcnew Ion();
		L = gcnew Ion(A);

		Nu = L->M->GetElement();
		BigInteger Ligate = L->M->GetBarn();;

		Bridge(Nu);

		Nu = L->M->GetSignal();;
	}

	void Orbital::Bridge(BigInteger Nu) {
		Y->Nu = N->Avail(Nu);
		BigInteger Alpha = Y->M->Cone->Avail(Nu);
		N->Form(Alpha);
		N->Polarize();
		BigInteger Focus = Y->Form();
		N->Conjugate(Focus);
		Rho = Conjugate(N->Pole);
		N->Saturate(Rho, Y->M->Cone->Channel);
		Saturate(N->Foundation, N->Channel);
		N->Bond();
		N->Adduct(Y->M->Cone->Dynamo);
		N->Open();
		Y->Adduct(N->Dynamo);

		if (!Y->M->Cone->ManifoldCompare(N)) throw gcnew Exception("Never Failed The Boson Before");
	}

	BigInteger Orbital::Conjugate(BigInteger% Rho) {
		Y->M->Cone->Conjugate(Rho);
		Y->M->Cone->Conify();

		return Y->M->Cone->Foundation;
	}

	void Orbital::Saturate(BigInteger Foundation, BigInteger Channel) {
		Y->M->Cone->Saturate(Foundation, Channel);
		Y->M->Cone->Bond();
	}
}