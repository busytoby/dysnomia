#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	Orbital::Orbital(Dynamic^ Delta, Affinity^ Rho) {
		M = gcnew LinkedList<KeyValuePair<BigInteger, Dynamic^>>();
		Affinity^ E = gcnew Affinity(Delta, Rho->Cone);

		bool Failed = true;
		while (Failed) {
			try {
				N = gcnew Dynamic();
				R = gcnew Ion();
				Y = gcnew Ion();
				L = gcnew Ion(E);

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
		for each (KeyValuePair<BigInteger, Dynamic^> G in Rho->Rod->R)
			M->AddLast(G);
	}

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

	BigInteger Orbital::RunSigma() {
		Sigma = Rho;
		for each (KeyValuePair<BigInteger, Dynamic^> G in N->R) {
			for each (KeyValuePair<BigInteger, Dynamic^> L in L->M->Rod->R) {
				Sigma = BigInteger::Multiply(Sigma, Math::ModPow(G.Value->Channel, Rho, G.Key));
				Sigma = BigInteger::Multiply(Sigma, Math::ModPow(Eta, L.Value->Signal, L.Key));
			}
		}
		return Sigma;
	}

	void Orbital::Bridge(BigInteger Nu) {
		Y->Nu = N->Avail(Nu);
		if (!Y->M->Alpha.IsZero) throw gcnew AffinityException(4, "Alpha Chromosome Error");
		Y->M->Alpha = Y->M->Cone->Avail(Nu);
		N->Form(Y->M->Alpha);
		if (Y->M->Cone->Tau == (long long)1) Y->M->Cone->Tau = N->Channel;
		else throw gcnew DynamicException(10, "Cone Tau Exception");

		N->R->AddLast(KeyValuePair<BigInteger, Dynamic^>(Y->M->Cone->Tau, Y->M->Cone));

		N->Polarize();
		BigInteger Focus = Y->Form();
		N->Conjugate(Focus);
		Rho = Conjugate(N->Pole);
		N->Saturate(Rho, Y->M->Cone->Channel);
		Saturate(N->Foundation, N->Channel);
		
		Eta = Math::ModPow(N->Foundation, N->Signal, Math::Prime);
		Rho = Math::ModPow(Eta, N->Channel, Math::Prime);
		Sigma = Rho;

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