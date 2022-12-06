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
        V->Nu = gcnew Affinity(Q->Nu->Rod, I->M->Cone);
        V->Phi = gcnew Affinity(Q->Phi->Rod, N->M->Cone);
        V->Rho = Q->Rho;
        V->Sigma = gcnew Affinity(R->M->Rod, R->M->Cone);

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
        Ion^ I;
        Ion^ R;
        Ion^ N;

        if (S->Phi->Cone->Element < S->Nu->Cone->Element) {
            I = gcnew Ion(S->Phi);
            R = gcnew Ion(S->Nu);
            N = gcnew Ion(S->Gamma);
        }
        else {
            I = gcnew Ion(S->Nu);
            R = gcnew Ion(S->Phi);
            N = gcnew Ion(S->Sigma);
        }

        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, I->M->Cone);
        V->Nu = gcnew Affinity(T->Last->Value.Value->Rho->Rod, S->Phi->Cone);
        if (S->Gamma->Rod->Signal > T->Last->Value.Value->Gamma->Rod->Signal)
            V->Phi = gcnew Affinity(S->Gamma->Rod, T->Last->Value.Value->Nu->Cone);
        else
            V->Phi = gcnew Affinity(T->Last->Value.Value->Gamma->Rod, S->Nu->Cone);
        if(S->Rho->Rod->Foundation > T->Last->Value.Value->Rho->Cone->Foundation)
            V->Rho = gcnew Affinity(S->Rho->Rod, T->Last->Value.Value->Rho->Cone);
        else
            V->Rho = gcnew Affinity(T->Last->Value.Value->Rho->Rod, S->Rho->Cone);
        if(S->Phi->Cone->Barn > R->M->Rod->Barn)
            V->Sigma = gcnew Affinity(R->M->Rod, S->Sigma->Cone);
        else
            V->Sigma = gcnew Affinity(S->Sigma->Rod, R->M->Cone);

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