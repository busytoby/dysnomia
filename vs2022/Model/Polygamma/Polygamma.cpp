#include "pch.h"

#include "Polygamma.h"

using namespace System::Globalization;

namespace Dysnomia {
	Polygamma::Polygamma(Orbital^ S, Orbital^ Q) {
        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion();
        Ion^ N = gcnew Ion();
       
        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(S->Y->Rod, I->Cone);
        V->Nu = gcnew Affinity(S->L->Rod, Q->Y->Cone);
        V->Phi = gcnew Affinity(S->Y->Rod, Q->Y->Cone);
        V->Rho = gcnew Affinity(Q->Y->Rod, S->L->Cone);
        V->Sigma = gcnew Affinity(R->Rod, Q->R->Cone);

        V->Epsilon = Math::ModPow(V->Gamma->Cone->Barn, V->Nu->Cone->Barn, N->Rod->Manifold);
        if (V->Epsilon.IsZero)
            throw gcnew Exception("Zero Epsilon");

        AddFirst(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
        Kappa(I, R, N);
	}

    Polygamma::Polygamma(Quaternion^ Q) {
        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion(Q->Phi);
        Ion^ N = gcnew Ion(Q->Sigma);

        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(I->Rod, I->Cone);
        V->Nu = gcnew Affinity(Q->Nu->Rod, I->Cone);
        V->Phi = gcnew Affinity(Q->Phi->Rod, N->Cone);
        V->Rho = Q->Rho;
        V->Sigma = gcnew Affinity(R->Rod, R->Cone);

        V->Epsilon = Math::ModPow(V->Gamma->Cone->Barn, Q->Nu->Cone->Barn, N->Rod->Manifold);
        if (V->Epsilon.IsZero)
            throw gcnew Exception("Zero Epsilon");

        AddFirst(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
        Kappa(I, R, N);
    }

    void Polygamma::Add(Orbital^ S) {
        Ion^ I = gcnew Ion();
        Ion^ R = gcnew Ion();
        Ion^ N = gcnew Ion();

        Quaternion^ V = gcnew Quaternion();
        V->Gamma = gcnew Affinity(Last->Value.Value->Gamma->Rod, I->Cone);
        V->Nu = gcnew Affinity(Last->Value.Value->Rho->Rod, S->Y->Cone);
        V->Phi = gcnew Affinity(Last->Value.Value->Gamma->Rod, S->Y->Cone);
        V->Rho = gcnew Affinity(S->Y->Rod, Last->Value.Value->Rho->Cone);
        V->Sigma = gcnew Affinity(R->Rod, S->R->Cone);

        V->Epsilon = Math::ModPow(Last->Value.Key, Last->Value.Value->Nu->Cone->Manifold, S->R->Rod->Barn);
        if (V->Epsilon.IsZero)
            throw gcnew Exception("Zero Epsilon");

        AddFirst(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
        Kappa(I, R, N);
    }

    void Polygamma::Add(Quaternion^ S) {
        Ion^ I;
        Ion^ R;
        Ion^ N;

        if (S->Gamma->Cone->Nu < S->Gamma->Rod->Nu) { // Animal Masculine Or Feminine
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
            V->Gamma = gcnew Affinity(Last->Value.Value->Gamma->Rod, I->Cone);
            V->Nu = gcnew Affinity(Last->Value.Value->Rho->Rod, S->Phi->Cone);
            if (S->Gamma->Rod->Signal > Last->Value.Value->Gamma->Rod->Signal)
                V->Phi = gcnew Affinity(S->Gamma->Rod, Last->Value.Value->Nu->Cone);
            else
                V->Phi = gcnew Affinity(Last->Value.Value->Gamma->Rod, S->Nu->Cone);
            if (S->Rho->Rod->Foundation > Last->Value.Value->Rho->Cone->Foundation)
                V->Rho = gcnew Affinity(S->Rho->Rod, Last->Value.Value->Rho->Cone);
            else
                V->Rho = gcnew Affinity(Last->Value.Value->Rho->Rod, S->Rho->Cone);
            if (S->Phi->Cone->Barn < R->Rod->Barn)
                V->Sigma = gcnew Affinity(R->Rod, S->Sigma->Cone);
            else
                V->Sigma = gcnew Affinity(S->Sigma->Rod, R->Cone);

            V->Epsilon = Math::ModPow(Last->Value.Key, Last->Value.Value->Nu->Cone->Manifold, S->Sigma->Rod->Barn);

            if (V->Epsilon.IsZero)
                throw gcnew Exception("Zero Epsilon");

            AddFirst(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
            Kappa(I, R, N);
        }
        else { // Plant Hybrid Or Cultivar
            I = gcnew Ion(S->Nu);
            R = gcnew Ion(S->Phi);
            N = gcnew Ion(S->Rho);

            Quaternion^ V = gcnew Quaternion();
            if(S->Phi->Cone->Manifold < Last->Value.Value->Phi->Cone->Manifold)
                V->Gamma = gcnew Affinity(Last->Value.Value->Gamma->Rod, I->Cone);
            else 
                V->Gamma = gcnew Affinity(I->Rod, Last->Value.Value->Gamma->Cone);
            V->Nu = gcnew Affinity(Last->Value.Value->Rho->Rod, S->Phi->Cone);
            V->Phi = gcnew Affinity(S->Gamma->Rod, Last->Value.Value->Nu->Cone);
            if (S->Rho->Rod->Foundation > Last->Value.Value->Rho->Cone->Foundation)
                V->Rho = gcnew Affinity(S->Rho->Rod, Last->Value.Value->Rho->Cone);
            else
                V->Rho = gcnew Affinity(Last->Value.Value->Rho->Rod, S->Rho->Cone);
            if (S->Phi->Cone->Barn < R->Rod->Barn)
                V->Sigma = gcnew Affinity(R->Rod, S->Sigma->Cone);
            else
                V->Sigma = gcnew Affinity(S->Sigma->Rod, R->Cone);

            V->Epsilon = Math::ModPow(Last->Value.Key, Last->Value.Value->Nu->Cone->Manifold, S->Sigma->Rod->Barn);

            if (V->Epsilon.IsZero)
                throw gcnew Exception("Zero Epsilon");

            AddFirst(KeyValuePair<BigInteger, Quaternion^>(V->Epsilon, V));
            Kappa(I, R, N);
        }
    }

    void Polygamma::Kappa(Ion^ I, Ion^ R, Ion^ N) {
        Quaternion^ L = gcnew Quaternion();
        L->Gamma = gcnew Affinity(I->Rod, Last->Value.Value->Nu->Cone);
        L->Nu = gcnew Affinity(N->Rod, R->Cone);
        L->Phi = gcnew Affinity(First->Value.Value->Gamma->Rod, N->Cone);
        L->Rho = gcnew Affinity(gcnew Dynamic(), First->Value.Value->Nu->Cone);
        L->Sigma = gcnew Affinity(R->Rod, I->Cone);

        L->Epsilon = Math::ModPow(Last->Value.Key, Last->Value.Value->Rho->Cone->Manifold, N->Rod->Barn);

        if (L->Epsilon.IsZero)
            throw gcnew Exception("Zero Epsilon");

        AddLast(KeyValuePair<BigInteger, Quaternion^>(L->Epsilon, L));
    }
}