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

				Nu = L->Rod->Element;
				BigInteger Ligate = L->Cone->Barn;

				Bridge(Nu);

				Nu = L->Cone->Signal;
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

				Nu = L->Rod->Element;
				BigInteger Ligate = L->Cone->Barn;

				Bridge(Nu);

				Nu = L->Cone->Signal;
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

				Nu = L->Rod->Element;
				BigInteger Ligate = L->Cone->Barn;

				Bridge(Nu);

				Nu = L->Cone->Signal;
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

	Orbital::Orbital(Affinity^ C, Affinity^ D) {
		bool Failed = true;
		while (Failed) {
			try {
				N = gcnew Dynamic();
				R = gcnew Ion(C);
				Y = gcnew Ion();
				L = gcnew Ion(D);

				Nu = L->Rod->Element;
				BigInteger Ligate = L->Cone->Barn;

				Bridge(Nu);

				Nu = L->Cone->Signal;
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
			for each (KeyValuePair<BigInteger, Dynamic^> L in L->Rod->R) {
				Sigma = BigInteger::Multiply(Sigma, Math::ModPow(G.Value->Channel, Rho, G.Key));
				Sigma = BigInteger::Multiply(Sigma, Math::ModPow(Eta, L.Value->Signal, L.Key));
			}
		}
		return Sigma;
	}

	void Orbital::Bridge(BigInteger Nu) {
		Y->Nu = N->Avail(Nu);
		if (!Y->Alpha.IsZero) throw gcnew AffinityException(4, "Alpha Chromosome Error");
		Y->Alpha = Y->Cone->Avail(Nu);
		N->Form(Y->Alpha);
		if (Y->Cone->Tau == (long long)1) Y->Cone->Tau = N->Channel;
		else throw gcnew DynamicException(10, "Cone Tau Exception");

		N->R->AddLast(KeyValuePair<BigInteger, Dynamic^>(Y->Cone->Tau, Y->Cone));

		N->Polarize();
		BigInteger Focus = Y->Form();
		N->Conjugate(Focus);
		Rho = Conjugate(N->Pole);
		N->Saturate(Rho, Y->Cone->Channel);
		Saturate(N->Foundation, N->Channel);
		
		Eta = Math::ModPow(N->Foundation, N->Signal, Math::Prime);
		Rho = Math::ModPow(Eta, N->Channel, Math::Prime);
		Sigma = Rho;

		N->Bond();
		N->Adduct(Y->Cone->Dynamo);
		N->Open();
		Y->Adduct(N->Dynamo);

		if (!Y->Cone->ManifoldCompare(N)) throw gcnew Exception("Never Failed The Boson Before");
	}

	BigInteger Orbital::Conjugate(BigInteger% Rho) {
		Y->Cone->Conjugate(Rho);
		Y->Cone->Conify();

		return Y->Cone->Foundation;
	}

	void Orbital::Saturate(BigInteger Rho, BigInteger Theta) {
		Y->Cone->Saturate(Rho, Theta);
		Y->Cone->Bond();
	}
}