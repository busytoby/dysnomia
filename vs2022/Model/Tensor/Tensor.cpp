#include "pch.h"

#include "Tensor.h"

namespace Dysnomia {
	Tensor::Tensor(Quark^ M, Polygamma^ Q)
	{
		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ Octogamma = Q->Last;

		Gamma = gcnew Bath();
		Gamma->Gamma = gcnew Octonion(Octogamma->Value.Value->Gamma, M->L->Gamma);
		Gamma->Nu = gcnew Octonion(Octogamma->Value.Value->Gamma, M->R->Nu);
		Gamma->Phi = gcnew Octonion(Octogamma->Value.Value->Gamma, M->L->Phi);
		Gamma->Rho = gcnew Octonion(Octogamma->Value.Value->Gamma, M->R->Rho);
		Gamma->Sigma = gcnew Octonion(Octogamma->Value.Value->Gamma, M->L->Sigma);

		Nu = gcnew Bath();
		Nu->Gamma = gcnew Octonion(Octogamma->Value.Value->Nu, M->R->Gamma);
		Nu->Nu = gcnew Octonion(M->N->Nu, Octogamma->Value.Value->Nu);
		Nu->Phi = gcnew Octonion(Octogamma->Value.Value->Nu, M->R->Phi);
		Nu->Rho = gcnew Octonion(M->N->Nu, Octogamma->Value.Value->Rho);
		Nu->Sigma = gcnew Octonion(Octogamma->Value.Value->Nu, M->R->Sigma);

		Phi = gcnew Bath();
		Phi->Gamma = gcnew Octonion(Octogamma->Value.Value->Phi, M->N->Gamma);
		Phi->Nu = gcnew Octonion(M->L->Phi, Octogamma->Value.Value->Nu);
		Phi->Phi = gcnew Octonion(Octogamma->Value.Value->Phi, M->N->Phi);
		Phi->Rho = gcnew Octonion(M->L->Phi, Octogamma->Value.Value->Rho);
		Phi->Sigma = gcnew Octonion(Octogamma->Value.Value->Phi, M->N->Sigma);

		Rho = gcnew Bath();
		Rho->Gamma = gcnew Octonion(Octogamma->Value.Value->Rho, M->N->Gamma);
		Rho->Nu = gcnew Octonion(Octogamma->Value.Value->Rho, M->L->Nu);
		Rho->Phi = gcnew Octonion(M->N->Phi, Octogamma->Value.Value->Rho);
		Rho->Rho = gcnew Octonion(Octogamma->Value.Value->Rho, M->R->Rho);
		Rho->Sigma = gcnew Octonion(Octogamma->Value.Value->Rho, M->N->Sigma);

		Sigma = gcnew Bath();
		Sigma->Gamma = gcnew Octonion(Octogamma->Value.Value->Sigma, M->R->Gamma);
		Sigma->Nu = gcnew Octonion(Octogamma->Value.Value->Sigma, M->N->Nu);
		Sigma->Phi = gcnew Octonion(Octogamma->Value.Value->Sigma, M->R->Phi);
		Sigma->Rho = gcnew Octonion(Octogamma->Value.Value->Sigma, M->N->Rho);
		Sigma->Sigma = gcnew Octonion(Octogamma->Value.Value->Sigma, M->R->Sigma);
	}

	Tensor::Tensor(Polygamma^ X, Polygamma^ Y, Polygamma^ Z, Polygamma^ R, Polygamma^ L) {
		Gamma = gcnew Bath();
		Gamma->Gamma = gcnew Octonion(Y->Last->Value.Value->Gamma, X->First->Value.Value->Gamma);
		Gamma->Nu = gcnew Octonion(Y->Last->Value.Value->Gamma, R->Last->Value.Value->Nu);
		Gamma->Phi = gcnew Octonion(Y->First->Value.Value->Gamma, X->Last->Value.Value->Phi);
		Gamma->Rho = gcnew Octonion(Y->Last->Value.Value->Gamma, R->Last->Value.Value->Rho);
		Gamma->Sigma = gcnew Octonion(Y->Last->Value.Value->Gamma, L->First->Value.Value->Sigma);

		Nu = gcnew Bath();
		Nu->Gamma = gcnew Octonion(Y->Last->Value.Value->Nu, R->First->Value.Value->Gamma);
		Nu->Nu = gcnew Octonion(Z->First->Value.Value->Nu, Y->Last->Value.Value->Nu);
		Nu->Phi = gcnew Octonion(Y->Last->Value.Value->Nu, R->Last->Value.Value->Phi);
		Nu->Rho = gcnew Octonion(Z->First->Value.Value->Nu, Y->Last->Value.Value->Rho);
		Nu->Sigma = gcnew Octonion(Y->Last->Value.Value->Nu, R->First->Value.Value->Sigma);

		Phi = gcnew Bath();
		Phi->Gamma = gcnew Octonion(Y->First->Value.Value->Phi, Z->Last->Value.Value->Gamma);
		Phi->Nu = gcnew Octonion(X->Last->Value.Value->Phi, Y->First->Value.Value->Nu);
		Phi->Phi = gcnew Octonion(Y->First->Value.Value->Phi, Z->Last->Value.Value->Phi);
		Phi->Rho = gcnew Octonion(X->Last->Value.Value->Phi, Y->First->Value.Value->Rho);
		Phi->Sigma = gcnew Octonion(Y->First->Value.Value->Phi, Z->Last->Value.Value->Sigma);

		Rho = gcnew Bath();
		Rho->Gamma = gcnew Octonion(Y->First->Value.Value->Rho, Z->Last->Value.Value->Gamma);
		Rho->Nu = gcnew Octonion(Y->First->Value.Value->Rho, X->First->Value.Value->Nu);
		Rho->Phi = gcnew Octonion(Z->Last->Value.Value->Rho, Y->Last->Value.Value->Phi);
		Rho->Rho = gcnew Octonion(Y->First->Value.Value->Rho, R->First->Value.Value->Rho);
		Rho->Sigma = gcnew Octonion(Y->Last->Value.Value->Rho, Z->First->Value.Value->Sigma);

		Sigma = gcnew Bath();
		Sigma->Gamma = gcnew Octonion(L->First->Value.Value->Sigma, L->Last->Value.Value->Gamma);
		Sigma->Nu = gcnew Octonion(Y->First->Value.Value->Sigma, L->First->Value.Value->Nu);
		Sigma->Phi = gcnew Octonion(L->Last->Value.Value->Sigma, R->First->Value.Value->Phi);
		Sigma->Rho = gcnew Octonion(Y->First->Value.Value->Sigma, L->First->Value.Value->Rho);
		Sigma->Sigma = gcnew Octonion(L->First->Value.Value->Sigma, L->Last->Value.Value->Sigma);
	}
}