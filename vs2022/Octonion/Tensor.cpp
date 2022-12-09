#include "pch.h"

#include "Tensor.h"

namespace Dysnomia {
    Tensor::Tensor(Quark^ M, Polygamma^ Q)
    {
		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ Octogamma = Q->T->Last;

		Gamma = gcnew Quaternion();
		Gamma->Gamma = gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, M->L->Gamma->Cone);
		Gamma->Nu = gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, M->L->Nu->Cone);
		Gamma->Phi = gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, M->L->Phi->Cone);
		Gamma->Rho = gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, M->L->Rho->Cone);
		Gamma->Sigma = gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, gcnew Dynamic());
		Gamma->Epsilon = Math::ModPow(Octogamma->Value.Key, Octogamma->Value.Value->Nu->Cone->Manifold, M->L->Nu->Rod->Barn);

		Nu = gcnew Quaternion();
		Nu->Gamma = gcnew Affinity(Octogamma->Value.Value->Nu->Rod, M->R->Gamma->Cone);
		Nu->Nu = gcnew Affinity(Octogamma->Value.Value->Nu->Rod, M->R->Nu->Cone);
		Nu->Phi = gcnew Affinity(Octogamma->Value.Value->Nu->Rod, M->R->Phi->Cone);
		Nu->Rho = gcnew Affinity(Octogamma->Value.Value->Nu->Rod, M->R->Rho->Cone);
		Nu->Sigma = gcnew Affinity(gcnew Dynamic(), M->R->Sigma->Cone);
		Nu->Epsilon = Math::ModPow(Gamma->Epsilon, Octogamma->Value.Value->Nu->Cone->Manifold, M->L->Nu->Rod->Barn);

		Phi = gcnew Quaternion();
		Phi->Gamma = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Gamma->Cone);
		Phi->Nu = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Nu->Cone);
		Phi->Phi = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Phi->Cone);
		Phi->Rho = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Rho->Cone);
		Phi->Sigma = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Sigma->Cone);
		Phi->Epsilon = Math::ModPow(Nu->Epsilon, Octogamma->Value.Value->Nu->Cone->Manifold, M->L->Nu->Rod->Barn);

		Rho = gcnew Quaternion();
		Rho->Gamma = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Gamma->Cone);
		Rho->Nu = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Nu->Cone);
		Rho->Phi = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Phi->Cone);
		Rho->Rho = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Rho->Cone);
		Rho->Sigma = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Sigma->Cone);
		Rho->Epsilon = Math::ModPow(Phi->Epsilon, Octogamma->Value.Value->Nu->Cone->Manifold, M->L->Nu->Rod->Barn);

		Sigma = gcnew Quaternion();
		Sigma->Gamma = gcnew Affinity(gcnew Dynamic(), gcnew Dynamic());
		Sigma->Nu = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, gcnew Dynamic());
		Sigma->Phi = gcnew Affinity(gcnew Dynamic(), M->R->Phi->Cone);
		Sigma->Rho = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, gcnew Dynamic());
		Sigma->Sigma = gcnew Affinity(gcnew Dynamic(), gcnew Dynamic());
		Sigma->Epsilon = Math::ModPow(Rho->Epsilon, Octogamma->Value.Value->Nu->Cone->Manifold, M->L->Nu->Rod->Barn);
    }

	Tensor::Tensor(Polygamma^ X, Polygamma^ Y, Polygamma^ Z, Polygamma^ R, Polygamma^ L) {
		Gamma = gcnew Quaternion();
		Gamma->Gamma = gcnew Affinity(Y->T->First->Value.Value->Gamma->Rod, X->T->First->Value.Value->Gamma->Cone);
		Gamma->Nu = gcnew Affinity(Z->T->First->Value.Value->Gamma->Rod, Z->T->First->Value.Value->Gamma->Cone);
		Gamma->Phi = gcnew Affinity(L->T->First->Value.Value->Gamma->Rod, R->T->First->Value.Value->Gamma->Cone);
		Gamma->Rho = gcnew Affinity(Z->T->First->Value.Value->Gamma->Rod, R->T->First->Value.Value->Gamma->Cone);
		Gamma->Sigma = gcnew Affinity(L->T->First->Value.Value->Gamma->Rod, gcnew Dynamic());
		Gamma->Epsilon = Math::ModPow(R->T->First->Value.Key, L->T->First->Value.Value->Nu->Cone->Manifold, Z->T->First->Value.Value->Nu->Rod->Barn);

		Nu = gcnew Quaternion();
		Nu->Gamma = gcnew Affinity(Y->T->First->Value.Value->Nu->Rod, X->T->First->Value.Value->Nu->Cone);
		Nu->Nu = gcnew Affinity(Z->T->First->Value.Value->Nu->Rod, Z->T->First->Value.Value->Nu->Cone);
		Nu->Phi = gcnew Affinity(L->T->First->Value.Value->Nu->Rod, R->T->First->Value.Value->Nu->Cone);
		Nu->Rho = gcnew Affinity(Z->T->First->Value.Value->Nu->Rod, R->T->First->Value.Value->Nu->Cone);
		Nu->Sigma = gcnew Affinity(L->T->First->Value.Value->Nu->Rod, gcnew Dynamic());
		Nu->Epsilon = Math::ModPow(Gamma->Epsilon, L->T->First->Value.Value->Nu->Cone->Manifold, Z->T->First->Value.Value->Nu->Rod->Barn);

		Phi = gcnew Quaternion();
		Phi->Gamma = gcnew Affinity(Y->T->First->Value.Value->Phi->Rod, X->T->First->Value.Value->Phi->Cone);
		Phi->Nu = gcnew Affinity(Z->T->First->Value.Value->Phi->Rod, Z->T->First->Value.Value->Phi->Cone);
		Phi->Phi = gcnew Affinity(L->T->First->Value.Value->Phi->Rod, R->T->First->Value.Value->Phi->Cone);
		Phi->Rho = gcnew Affinity(Z->T->First->Value.Value->Phi->Rod, R->T->First->Value.Value->Phi->Cone);
		Phi->Sigma = gcnew Affinity(L->T->First->Value.Value->Phi->Rod, gcnew Dynamic());
		Phi->Epsilon = Math::ModPow(Nu->Epsilon, L->T->First->Value.Value->Nu->Cone->Manifold, Z->T->First->Value.Value->Nu->Rod->Barn);

		Rho = gcnew Quaternion();
		Rho->Gamma = gcnew Affinity(Y->T->First->Value.Value->Rho->Rod, X->T->First->Value.Value->Rho->Cone);
		Rho->Nu = gcnew Affinity(Z->T->First->Value.Value->Rho->Rod, Z->T->First->Value.Value->Rho->Cone);
		Rho->Phi = gcnew Affinity(L->T->First->Value.Value->Rho->Rod, R->T->First->Value.Value->Rho->Cone);
		Rho->Rho = gcnew Affinity(Z->T->First->Value.Value->Rho->Rod, R->T->First->Value.Value->Rho->Cone);
		Rho->Sigma = gcnew Affinity(L->T->First->Value.Value->Rho->Rod, gcnew Dynamic());
		Rho->Epsilon = Math::ModPow(Phi->Epsilon, L->T->First->Value.Value->Nu->Cone->Manifold, Z->T->First->Value.Value->Nu->Rod->Barn);

		Sigma = gcnew Quaternion();
		Sigma->Gamma = gcnew Affinity(Y->T->First->Value.Value->Sigma->Rod, X->T->First->Value.Value->Sigma->Cone);
		Sigma->Nu = gcnew Affinity(Z->T->First->Value.Value->Sigma->Rod, Z->T->First->Value.Value->Sigma->Cone);
		Sigma->Phi = gcnew Affinity(L->T->First->Value.Value->Sigma->Rod, R->T->First->Value.Value->Sigma->Cone);
		Sigma->Rho = gcnew Affinity(Z->T->First->Value.Value->Sigma->Rod, R->T->First->Value.Value->Sigma->Cone);
		Sigma->Sigma = gcnew Affinity(L->T->First->Value.Value->Sigma->Rod, gcnew Dynamic());
		Sigma->Epsilon = Math::ModPow(Rho->Epsilon, L->T->First->Value.Value->Nu->Cone->Manifold, Z->T->First->Value.Value->Nu->Rod->Barn);
	}
}