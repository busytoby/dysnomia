#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	Orbital::Orbital() {
		bool Failed = true;
		while (Failed) {
			try {
				N = gcnew Dynamic();
				R = gcnew Ion();
				Y = gcnew Ion();
				L = gcnew Ion();

				Nu = L->M->Rod->Element;
				BigInteger Ligate = L->M->Cone->Barn;

				Bridge(Nu);

				Nu = L->M->Cone->Signal;
				Failed = false;
			}
			catch (DynamicException^ E) {
				if (E->Code == 1) continue;
				if (E->Code == 4) continue;
				if (E->Code == 6) continue;
				if (E->Code == 7) continue;
				else throw;
			}
		}
	}

	Orbital::Orbital(Affinity^ A) {
		bool Failed = true;
		while (Failed) {
			try {
				N = gcnew Dynamic();
				R = gcnew Ion();
				Y = gcnew Ion();
				L = gcnew Ion(A);

				Nu = L->M->Rod->Element;
				BigInteger Ligate = L->M->Cone->Barn;

				Bridge(Nu);

				Nu = L->M->Cone->Signal;
				Failed = false;
			}
			catch (DynamicException^ E) {
				if (E->Code == 1) continue;
				if (E->Code == 4) continue;
				if (E->Code == 6) continue;
				if (E->Code == 7) continue;
				else throw;
			}
		}
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

	void Orbital::Saturate(BigInteger Rho, BigInteger Theta) {
		Y->M->Cone->Saturate(Rho, Theta);
		Y->M->Cone->Bond();
	}
}