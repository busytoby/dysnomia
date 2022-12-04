#include "pch.h"

#include "Polygamma.h"

using namespace System::Globalization;

namespace Dysnomia {
	Polygamma::Polygamma(Orbital^ S, Orbital^ Q) {
		M = gcnew LinkedList<KeyValuePair<BigInteger, Quaternion^>>();

        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion();
        Ion^ N = gcnew Ion();

        BigInteger Epsilon = Math::Random();
        BigInteger Gamma = Math::Random();
        
        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(S->Y->M->Rod, I->M->Cone);
        V->Nu = gcnew Affinity(S->L->M->Rod, Q->Y->M->Cone);
        V->Phi = gcnew Affinity(S->Y->M->Rod, Q->Y->M->Cone);
        V->Rho = gcnew Affinity(Q->Y->M->Rod, S->L->M->Cone);
        V->Sigma = gcnew Affinity(R->M->Rod, Q->R->M->Cone);

        Quaternion^ L = gcnew Quaternion();
        L->Gamma = gcnew Affinity(V->Gamma->Rod, V->Sigma->Cone);
        L->Nu = gcnew Affinity(V->Rho->Rod, R->M->Cone);
        L->Phi = gcnew Affinity(I->M->Rod, V->Rho->Cone);
        L->Rho = gcnew Affinity(gcnew Dynamic(), V->Phi->Cone);
        L->Sigma = gcnew Affinity(N->M->Rod, N->M->Cone);

        M->AddLast(KeyValuePair<BigInteger, Quaternion^>(Epsilon, V));
        M->AddLast(KeyValuePair<BigInteger, Quaternion^>(Gamma, L));
	}
}