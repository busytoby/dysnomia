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
		Nu2->Rho = gcnew Affinity(L->Rho->Item1->Rod, L->Rho->Item1->Cone);
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
		Rho1->Gamma = gcnew Affinity(R->Gamma->Item1->Rod, R->Gamma->Item1->Cone);
		Rho1->Nu = gcnew Affinity(X->Nu->Item1->Rod, gcnew Dynamic());
		Rho1->Phi = gcnew Affinity(gcnew Dynamic(), X->Rho->Item1->Cone);
		Rho1->Rho = gcnew Affinity(N->Rho->Item1->Rod, gcnew Dynamic());
		Rho1->Sigma = gcnew Affinity(gcnew Dynamic(), N->Sigma->Item1->Cone);
		Quaternion^ Rho2 = gcnew Quaternion();
		Rho2->Gamma = gcnew Affinity(R->Gamma->Item2->Rod, R->Gamma->Item2->Cone);
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
}