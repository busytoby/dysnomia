#include "pch.h"

#include "Polygamma.h"

using namespace System::Globalization;

namespace Dysnomia {
	Polygamma::Polygamma(Orbital^ S, Orbital^ Q) {
		T = gcnew LinkedList<KeyValuePair<BigInteger, Quaternion^>>();

        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion();
        Ion^ N = gcnew Ion();
       
        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(S->Y->M->Rod, I->M->Cone);
        V->Nu = gcnew Affinity(S->L->M->Rod, Q->Y->M->Cone);
        V->Phi = gcnew Affinity(S->Y->M->Rod, Q->Y->M->Cone);
        V->Rho = gcnew Affinity(Q->Y->M->Rod, S->L->M->Cone);
        V->Sigma = gcnew Affinity(R->M->Rod, Q->R->M->Cone);

        V->Epsilon = Math::ModPow(V->Gamma->Cone->Barn, V->Nu->Cone->Barn, N->M->Rod->Barn);

        T->AddLast(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
        CapSpinor(I, R, N);
	}

    Polygamma::Polygamma(Quaternion^ Q) {
        T = gcnew LinkedList<KeyValuePair<BigInteger, Quaternion^>>();

        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion(Q->Phi);
        Ion^ N = gcnew Ion(Q->Sigma);

        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(I->M->Rod, I->M->Cone);
        V->Nu = gcnew Affinity(Q->Nu->Rod, R->M->Cone);
        V->Phi = gcnew Affinity(Q->Phi->Rod, N->M->Cone);
        V->Rho = Q->Rho;
        V->Sigma = gcnew Affinity(R->M->Rod, Q->Sigma->Cone);

        V->Epsilon = Math::ModPow(V->Gamma->Cone->Barn, Q->Nu->Cone->Barn, N->M->Rod->Barn);

        T->AddLast(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
        CapSpinor(I, R, N);
    }

    void Polygamma::Add(Orbital^ S) {
        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion();
        Ion^ N = gcnew Ion();

        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, I->M->Cone);
        V->Nu = gcnew Affinity(T->Last->Value.Value->Rho->Rod, S->Y->M->Cone);
        V->Phi = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, S->Y->M->Cone);
        V->Rho = gcnew Affinity(S->Y->M->Rod, T->Last->Value.Value->Rho->Cone);
        V->Sigma = gcnew Affinity(R->M->Rod, S->R->M->Cone);

        V->Epsilon = Math::ModPow(T->Last->Value.Key, T->Last->Value.Value->Nu->Cone->Manifold, S->R->M->Rod->Barn);

        T->AddLast(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
        CapSpinor(I, R, N);
    }

    void Polygamma::Add(Quaternion^ S) {
        Ion^ I = gcnew Ion(S->Nu);
        Ion^ R = gcnew Ion(S->Phi);
        Ion^ N = gcnew Ion(S->Sigma);

        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, I->M->Cone);
        V->Nu = gcnew Affinity(T->Last->Value.Value->Rho->Rod, S->Nu->Cone);
        V->Phi = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, S->Phi->Cone);
        V->Rho = gcnew Affinity(S->Rho->Rod, T->Last->Value.Value->Rho->Cone);
        V->Sigma = gcnew Affinity(R->M->Rod, S->Sigma->Cone);

        V->Epsilon = Math::ModPow(T->Last->Value.Key, T->Last->Value.Value->Nu->Cone->Manifold, S->Sigma->Rod->Barn);

        T->AddLast(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
        CapSpinor(I, R, N);
    }

    void Polygamma::CapSpinor(Ion^ I, Ion^ R, Ion^ N) {
        Quaternion^ L = gcnew Quaternion();
        L->Gamma = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, T->Last->Value.Value->Sigma->Cone);
        L->Nu = gcnew Affinity(T->Last->Value.Value->Rho->Rod, R->M->Cone);
        L->Phi = gcnew Affinity(I->M->Rod, T->Last->Value.Value->Rho->Cone);
        L->Rho = gcnew Affinity(gcnew Dynamic(), T->Last->Value.Value->Phi->Cone);
        L->Sigma = gcnew Affinity(N->M->Rod, N->M->Cone);

        L->Epsilon = Math::ModPow(T->Last->Value.Key, T->Last->Value.Value->Rho->Cone->Manifold, N->M->Rod->Barn);

        T->AddLast(KeyValuePair<BigInteger, Quaternion^>(L->Epsilon, L));
    }
}