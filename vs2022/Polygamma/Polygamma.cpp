#include "pch.h"

#include "Polygamma.h"

using namespace System::Globalization;

namespace Dysnomia {
	Polygamma::Polygamma(Orbital^ S, Orbital^ Q) {
		T = gcnew LinkedList<KeyValuePair<BigInteger, Quaternion^>>();

        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion();
        Ion^ N = gcnew Ion();

        BigInteger Epsilon = Math::Random();
        
        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(S->Y->M->Rod, I->M->Cone);
        V->Nu = gcnew Affinity(S->L->M->Rod, Q->Y->M->Cone);
        V->Phi = gcnew Affinity(S->Y->M->Rod, Q->Y->M->Cone);
        V->Rho = gcnew Affinity(Q->Y->M->Rod, S->L->M->Cone);
        V->Sigma = gcnew Affinity(R->M->Rod, Q->R->M->Cone);

        T->AddLast(KeyValuePair<BigInteger, Quaternion^>(Epsilon, V));
        CapSpinor(I, R, N);
	}

    void Polygamma::Add(Orbital^ S) {
        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion();
        Ion^ N = gcnew Ion();

        BigInteger Epsilon = Math::ModPow(T->Last->Value.Key, T->Last->Value.Value->Nu->Cone->Manifold, S->R->M->Rod->Barn);

        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, I->M->Cone);
        V->Nu = gcnew Affinity(T->Last->Value.Value->Rho->Rod, S->Y->M->Cone);
        V->Phi = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, S->Y->M->Cone);
        V->Rho = gcnew Affinity(S->Y->M->Rod, T->Last->Value.Value->Rho->Cone);
        V->Sigma = gcnew Affinity(R->M->Rod, S->R->M->Cone);

        T->AddLast(KeyValuePair<BigInteger, Quaternion^>(Epsilon, V));
        CapSpinor(I, R, N);
    }

    void Polygamma::CapSpinor(Ion^ I, Ion^ R, Ion^ N) {
        BigInteger Gamma = Math::ModPow(T->Last->Value.Key, T->Last->Value.Value->Rho->Cone->Manifold, N->M->Rod->Barn);

        Quaternion^ L = gcnew Quaternion();
        L->Gamma = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, T->Last->Value.Value->Sigma->Cone);
        L->Nu = gcnew Affinity(T->Last->Value.Value->Rho->Rod, R->M->Cone);
        L->Phi = gcnew Affinity(I->M->Rod, T->Last->Value.Value->Rho->Cone);
        L->Rho = gcnew Affinity(gcnew Dynamic(), T->Last->Value.Value->Phi->Cone);
        L->Sigma = gcnew Affinity(N->M->Rod, N->M->Cone);

        T->AddLast(KeyValuePair<BigInteger, Quaternion^>(Gamma, L));
    }
}