#include "pch.h"

#include "Quark.h"

namespace Dysnomia {
    generic <typename T> 
    where T : Epsilon
    Quark<T>::Quark(T Y, T X, T Z)
    {
        N = Y;
        R = X;
        L = Z;

        LAQ = gcnew LinkedList<AntiQuark^>();
        RAQ = gcnew LinkedList<AntiQuark^>();

        if (!L->Epsilon.IsZero)
            this->Epsilon = L->Epsilon;
        else if (!N->Epsilon.IsZero)
            this->Epsilon = N->Epsilon;
        else if (!R->Epsilon.IsZero)
            this->Epsilon = R->Epsilon;
        else throw gcnew Exception("Zero Epsilons");
    }

    generic <typename T> 
    where T : Epsilon
    void Quark<T>::Attach(Quark^ R) {
        LinkedListNode<AntiQuark^>^ P = RAQ->First;
        while (P != nullptr)
            if (P->Value->R != nullptr && P->Value->R->Epsilon == R->Epsilon) return;
            else P = P->Next;
        RAQ->AddFirst(gcnew Quark::AntiQuark(R, this));
    }

    generic <typename T> 
    where T : Epsilon
    Quark<T>::AntiQuark::AntiQuark(Quark^ _R, Quark^ _L) {
        LinkedListNode<AntiQuark^>^ P = _R->LAQ->First;
        while (P != nullptr)
            if (P->Value->L != nullptr && P->Value->L->Epsilon == _L->Epsilon) return;
            else P = P->Next;
        R = _R;
        L = _L;
        _R->LAQ->AddFirst(this);
    }

}