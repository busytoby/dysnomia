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

		Nu = gcnew Quaternion();
		Nu->Gamma = gcnew Affinity(Octogamma->Value.Value->Nu->Rod, M->R->Gamma->Cone);
		Nu->Nu = gcnew Affinity(Octogamma->Value.Value->Nu->Rod, M->R->Nu->Cone);
		Nu->Phi = gcnew Affinity(Octogamma->Value.Value->Nu->Rod, M->R->Phi->Cone);
		Nu->Rho = gcnew Affinity(Octogamma->Value.Value->Nu->Rod, M->R->Rho->Cone);
		Nu->Sigma = gcnew Affinity(gcnew Dynamic(), M->R->Sigma->Cone);

		Phi = gcnew Quaternion();
		Phi->Gamma = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Gamma->Cone);
		Phi->Nu = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Nu->Cone);
		Phi->Phi = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Phi->Cone);
		Phi->Rho = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Rho->Cone);
		Phi->Sigma = gcnew Affinity(Octogamma->Value.Value->Phi->Rod, M->R->Sigma->Cone);

		Rho = gcnew Quaternion();
		Rho->Gamma = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Gamma->Cone);
		Rho->Nu = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Nu->Cone);
		Rho->Phi = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Phi->Cone);
		Rho->Rho = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Rho->Cone);
		Rho->Sigma = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, M->R->Sigma->Cone);

		Sigma = gcnew Quaternion();
		Sigma->Gamma = gcnew Affinity(gcnew Dynamic(), gcnew Dynamic());
		Sigma->Nu = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, gcnew Dynamic());
		Sigma->Phi = gcnew Affinity(gcnew Dynamic(), M->R->Phi->Cone);
		Sigma->Rho = gcnew Affinity(Octogamma->Value.Value->Rho->Rod, gcnew Dynamic());
		Sigma->Sigma = gcnew Affinity(gcnew Dynamic(), gcnew Dynamic());
    }

	Tensor::Tensor(Polygamma^ X, Polygamma^ Y, Polygamma^ Z, Polygamma^ R, Polygamma^ L) {
		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ Octogamma = X->T->Last;

		int i = 99;

	}
}