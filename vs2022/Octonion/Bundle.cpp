#include "pch.h"

#include "Bundle.h"

namespace Dysnomia {
	Bundle::Bundle(Spinor^ X, Spinor^ N, Spinor^ R, Spinor^ L) {
		Quaternion^ Gamma1 = gcnew Quaternion();
		Gamma1->Gamma = gcnew Affinity(N->Gamma->Item1->Rod, gcnew Dynamic());
		Gamma1->Nu = gcnew Affinity(L->Nu->Item1->Rod, gcnew Dynamic());
		Gamma1->Phi = gcnew Affinity(X->Gamma->Item1->Rod, X->Gamma->Item1->Cone);
		Gamma1->Rho = gcnew Affinity(R->Rho->Item1->Rod, R->Rho->Item1->Cone);
		Gamma1->Sigma = gcnew Affinity(L->Gamma->Item1->Rod, gcnew Dynamic());
		Quaternion^ Gamma2 = gcnew Quaternion();
		Gamma2->Gamma = gcnew Affinity(gcnew Dynamic(), N->Gamma->Item2->Cone);
		Gamma2->Nu = gcnew Affinity(L->Nu->Item2->Rod, gcnew Dynamic());
		Gamma2->Phi = gcnew Affinity(X->Gamma->Item2->Rod, X->Gamma->Item2->Cone);
		Gamma2->Rho = gcnew Affinity(R->Rho->Item2->Rod, R->Rho->Item2->Cone);
		Gamma2->Sigma = gcnew Affinity(L->Gamma->Item2->Rod, gcnew Dynamic());

		Gamma = gcnew Tuple<Quark^, Quark^>(
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Gamma1), 
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Gamma2));

		Quaternion^ Nu1 = gcnew Quaternion();
		Nu1->Gamma = gcnew Affinity(gcnew Dynamic(), N->Gamma->Item1->Cone);
		Nu1->Nu = gcnew Affinity(gcnew Dynamic(), gcnew Dynamic());
		Nu1->Phi = gcnew Affinity(gcnew Dynamic(), X->Nu->Item1->Cone);
		Nu1->Rho = gcnew Affinity(L->Rho->Item1->Rod, L->Rho->Item1->Cone);
		Nu1->Sigma = gcnew Affinity(gcnew Dynamic(), L->Nu->Item1->Cone);
		Quaternion^ Nu2 = gcnew Quaternion();
		Nu2->Gamma = gcnew Affinity(N->Gamma->Item2->Rod, gcnew Dynamic());
		Nu2->Nu = gcnew Affinity(gcnew Dynamic(), gcnew Dynamic());
		Nu2->Phi = gcnew Affinity(X->Nu->Item2->Rod, gcnew Dynamic());
		Nu2->Rho = gcnew Affinity(L->Rho->Item2->Rod, L->Rho->Item2->Cone);
		Nu2->Sigma = gcnew Affinity(gcnew Dynamic(), L->Nu->Item2->Cone);

		Nu = gcnew Tuple<Quark^, Quark^>(
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Nu1),
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Nu2));

		Quaternion^ Phi1 = gcnew Quaternion();
		Phi1->Gamma = gcnew Affinity(R->Sigma->Item1->Rod, R->Sigma->Item1->Cone);
		Phi1->Nu = gcnew Affinity(gcnew Dynamic(), L->Phi->Item1->Cone);
		Phi1->Phi = gcnew Affinity(N->Nu->Item1->Rod, N->Nu->Item1->Cone);
		Phi1->Rho = gcnew Affinity(X->Rho->Item1->Rod, gcnew Dynamic());
		Phi1->Sigma = gcnew Affinity(gcnew Dynamic(), L->Sigma->Item1->Cone);
		Quaternion^ Phi2 = gcnew Quaternion();
		Phi2->Gamma = gcnew Affinity(R->Sigma->Item2->Rod, R->Sigma->Item2->Cone);
		Phi2->Nu = gcnew Affinity(gcnew Dynamic(), L->Phi->Item2->Cone);
		Phi2->Phi = gcnew Affinity(N->Nu->Item2->Rod, N->Nu->Item2->Cone);
		Phi2->Rho = gcnew Affinity(gcnew Dynamic(), X->Rho->Item2->Cone);
		Phi2->Sigma = gcnew Affinity(gcnew Dynamic(), L->Sigma->Item2->Cone);

		Phi = gcnew Tuple<Quark^, Quark^>(
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Phi1),
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Phi2));

		Quaternion^ Rho1 = gcnew Quaternion();
		Rho1->Gamma = gcnew Affinity(gcnew Dynamic(), R->Gamma->Item1->Cone);
		Rho1->Nu = gcnew Affinity(X->Nu->Item1->Rod, gcnew Dynamic());
		Rho1->Phi = gcnew Affinity(gcnew Dynamic(), X->Rho->Item1->Cone);
		Rho1->Rho = gcnew Affinity(N->Rho->Item1->Rod, gcnew Dynamic());
		Rho1->Sigma = gcnew Affinity(gcnew Dynamic(), N->Sigma->Item1->Cone);
		Quaternion^ Rho2 = gcnew Quaternion();
		Rho2->Gamma = gcnew Affinity(gcnew Dynamic(), R->Gamma->Item2->Cone);
		Rho2->Nu = gcnew Affinity(gcnew Dynamic(), X->Nu->Item2->Cone);
		Rho2->Phi = gcnew Affinity(X->Rho->Item2->Rod, gcnew Dynamic());
		Rho2->Rho = gcnew Affinity(gcnew Dynamic(), N->Rho->Item2->Cone);
		Rho2->Sigma = gcnew Affinity(N->Sigma->Item2->Rod, gcnew Dynamic());

		Rho = gcnew Tuple<Quark^, Quark^>(
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Rho1),
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Rho2));

		Quaternion^ Sigma1 = gcnew Quaternion();
		Sigma1->Gamma = gcnew Affinity(L->Sigma->Item1->Rod, gcnew Dynamic());
		Sigma1->Nu = gcnew Affinity(gcnew Dynamic(), L->Gamma->Item1->Cone);
		Sigma1->Phi = gcnew Affinity(R->Nu->Item1->Rod, R->Nu->Item1->Cone);
		Sigma1->Rho = gcnew Affinity(gcnew Dynamic(), L->Rho->Item1->Cone);
		Sigma1->Sigma = gcnew Affinity(gcnew Dynamic(), N->Rho->Item1->Cone);
		Quaternion^ Sigma2 = gcnew Quaternion();
		Sigma2->Gamma = gcnew Affinity(L->Sigma->Item2->Rod, gcnew Dynamic());
		Sigma2->Nu = gcnew Affinity(gcnew Dynamic(), L->Gamma->Item2->Cone);
		Sigma2->Phi = gcnew Affinity(R->Nu->Item2->Rod, R->Nu->Item2->Cone);
		Sigma2->Rho = gcnew Affinity(gcnew Dynamic(), L->Rho->Item2->Cone);
		Sigma2->Sigma = gcnew Affinity(N->Rho->Item2->Rod, gcnew Dynamic());

		Sigma = gcnew Tuple<Quark^, Quark^>(
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Sigma1),
			gcnew Quark(gcnew Quaternion(), gcnew Quaternion(), Sigma2));
	}

	void Bundle::Spin(Wavelet^ W) {
		Quaternion^ Gamma1 = gcnew Quaternion();
		Gamma1->Gamma = gcnew Affinity(W->N->Gamma->Item2->Rod, Gamma->Item1->L->Gamma->Cone);
		Gamma1->Nu = gcnew Affinity(W->L->Nu->Item2->Rod, Gamma->Item1->L->Nu->Cone);
		Gamma1->Phi = gcnew Affinity(gcnew Dynamic(), gcnew Dynamic());
		Gamma1->Rho = gcnew Affinity(Gamma->Item1->L->Rho->Rod, W->R->Rho->Item2->Cone);
		Gamma1->Sigma = gcnew Affinity(W->L->Gamma->Item2->Rod, Gamma->Item1->L->Sigma->Cone);
		Quaternion^ Gamma2 = gcnew Quaternion();
		Gamma2->Gamma = gcnew Affinity(Gamma->Item2->L->Gamma->Rod, W->N->Gamma->Item1->Cone);
		Gamma2->Nu = gcnew Affinity(W->L->Nu->Item1->Rod, Gamma->Item2->L->Nu->Cone);
		Gamma2->Phi = gcnew Affinity(gcnew Dynamic(), gcnew Dynamic());
		Gamma2->Rho = gcnew Affinity(W->R->Rho->Item1->Rod, Gamma->Item2->L->Rho->Cone);
		Gamma2->Sigma = gcnew Affinity(W->L->Gamma->Item1->Rod, Gamma->Item2->L->Sigma->Cone);

		Gamma->Item1->N = Gamma1;
		Gamma->Item2->N = Gamma2;

		Quaternion^ Nu1 = gcnew Quaternion();
		Nu1->Gamma = gcnew Affinity(Nu->Item1->L->Gamma->Rod, W->N->Gamma->Item2->Cone);
		Nu1->Nu = Nu->Item2->L->Nu;
		Nu1->Phi = gcnew Affinity(Nu->Item1->L->Phi->Rod, gcnew Dynamic());
		Nu1->Rho = gcnew Affinity(Nu->Item1->L->Rho->Rod, W->L->Rho->Item2->Cone);
		Nu1->Sigma = gcnew Affinity(Nu->Item1->L->Sigma->Rod, W->L->Nu->Item2->Cone);
		Quaternion^ Nu2 = gcnew Quaternion();
		Nu2->Gamma = gcnew Affinity(W->N->Gamma->Item1->Rod, Nu->Item2->L->Gamma->Cone);
		Nu2->Nu = Nu->Item1->L->Nu;
		Nu2->Phi = gcnew Affinity(gcnew Dynamic(), Nu->Item2->L->Phi->Cone);
		Nu2->Rho = gcnew Affinity(W->L->Rho->Item1->Rod, Nu->Item2->L->Rho->Cone);
		Nu2->Sigma = gcnew Affinity(Nu->Item2->L->Sigma->Rod, W->L->Nu->Item1->Cone);

		Nu->Item1->N = Nu1;
		Nu->Item2->N = Nu2;

		Quaternion^ Phi1 = gcnew Quaternion();
		Phi1->Gamma = gcnew Affinity(W->R->Sigma->Item2->Rod, Phi->Item1->L->Gamma->Cone);
		Phi1->Nu = gcnew Affinity(Phi->Item1->L->Nu->Rod, W->L->Phi->Item2->Cone);
		Phi1->Phi = gcnew Affinity(Phi->Item1->L->Phi->Rod, W->N->Nu->Item2->Cone);
		Phi1->Rho = gcnew Affinity(gcnew Dynamic(), Phi->Item1->L->Rho->Cone);
		Phi1->Sigma = gcnew Affinity(Phi->Item1->L->Sigma->Rod, W->L->Sigma->Item2->Cone);
		Quaternion^ Phi2 = gcnew Quaternion();
		Phi2->Gamma = gcnew Affinity(Phi->Item2->L->Gamma->Rod, W->R->Sigma->Item1->Cone);
		Phi2->Nu = gcnew Affinity(Phi->Item2->L->Nu->Rod, W->L->Phi->Item1->Cone);
		Phi2->Phi = gcnew Affinity(Phi->Item2->L->Phi->Rod, W->N->Nu->Item1->Cone);
		Phi2->Rho = gcnew Affinity(Phi->Item2->L->Rho->Rod, gcnew Dynamic());
		Phi2->Sigma = gcnew Affinity(Phi->Item2->L->Sigma->Rod, W->L->Sigma->Item1->Cone);

		Phi->Item1->N = Phi1;
		Phi->Item2->N = Phi2;

		Quaternion^ Rho1 = gcnew Quaternion();
		Rho1->Gamma = gcnew Affinity(Rho->Item1->L->Gamma->Rod, W->R->Gamma->Item2->Cone);
		Rho1->Nu = gcnew Affinity(gcnew Dynamic(), Rho->Item1->L->Nu->Cone);
		Rho1->Phi = gcnew Affinity(Rho->Item1->L->Phi->Rod, gcnew Dynamic());
		Rho1->Rho = gcnew Affinity(W->N->Rho->Item2->Rod, Rho->Item1->L->Rho->Cone);
		Rho1->Sigma = gcnew Affinity(Rho->Item1->L->Sigma->Rod, W->N->Sigma->Item2->Cone);
		Quaternion^ Rho2 = gcnew Quaternion();
		Rho2->Gamma = gcnew Affinity(Rho->Item2->L->Gamma->Rod, W->R->Gamma->Item1->Cone);
		Rho2->Nu = gcnew Affinity(Rho->Item2->L->Nu->Rod, gcnew Dynamic());
		Rho2->Phi = gcnew Affinity(gcnew Dynamic(), Rho->Item2->L->Phi->Cone);
		Rho2->Rho = gcnew Affinity(Rho->Item2->L->Rho->Rod, W->N->Rho->Item1->Cone);
		Rho2->Sigma = gcnew Affinity(W->N->Sigma->Item1->Rod, Rho->Item2->L->Sigma->Cone);

		Rho->Item1->N = Rho1;
		Rho->Item2->N = Rho2;

		Quaternion^ Sigma1 = gcnew Quaternion();
		Sigma1->Gamma = gcnew Affinity(W->L->Sigma->Item2->Rod, Sigma->Item1->L->Gamma->Cone);
		Sigma1->Nu = gcnew Affinity(Sigma->Item1->L->Nu->Rod, W->L->Gamma->Item2->Cone);
		Sigma1->Phi = gcnew Affinity(W->R->Nu->Item2->Rod, Sigma->Item1->L->Phi->Cone);
		Sigma1->Rho = gcnew Affinity(Sigma->Item1->L->Rho->Rod, W->L->Rho->Item2->Cone);
		Sigma1->Sigma = gcnew Affinity(Sigma->Item1->L->Sigma->Rod, W->N->Rho->Item2->Cone);
		Quaternion^ Sigma2 = gcnew Quaternion();
		Sigma2->Gamma = gcnew Affinity(W->L->Sigma->Item1->Rod, Sigma->Item2->L->Gamma->Cone);
		Sigma2->Nu = gcnew Affinity(Sigma->Item2->L->Nu->Rod, W->L->Gamma->Item1->Cone);
		Sigma2->Phi = gcnew Affinity(Sigma->Item2->L->Phi->Rod, W->R->Nu->Item1->Cone);
		Sigma2->Rho = gcnew Affinity(Sigma->Item2->L->Rho->Rod, W->L->Rho->Item1->Cone);
		Sigma2->Sigma = gcnew Affinity(W->N->Rho->Item1->Rod, Sigma->Item2->L->Sigma->Cone);

		Sigma->Item1->N = Sigma1;
		Sigma->Item2->N = Sigma2;
	}
}