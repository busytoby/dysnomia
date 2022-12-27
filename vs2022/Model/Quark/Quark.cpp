#include "pch.h"

#include "Quark.h"

namespace Dysnomia {
    Quark::Quark(Quaternion^ Y, Quaternion^ X, Quaternion^ Z)
    {
        N = Y;
        R = X;
        L = Z;

        LAQ = gcnew LinkedList<AntiQuark^>();
        RAQ = gcnew LinkedList<AntiQuark^>();

        if (!L->Epsilon.IsZero)
            Epsilon = L->Epsilon;
        else if (!N->Epsilon.IsZero)
            Epsilon = N->Epsilon;
        else if (!R->Epsilon.IsZero)
            Epsilon = R->Epsilon;
        else throw gcnew Exception("Zero Epsilons");
    }

    void Quark::Attach(Quark^ R) {
        LinkedListNode<AntiQuark^>^ P = RAQ->First;
        while (P != nullptr)
            if (P->Value->R->Epsilon == R->Epsilon) return;
            else P = P->Next;
        RAQ->AddFirst(gcnew Quark::AntiQuark(R, this));
    }

    Quark::AntiQuark::AntiQuark(Quark^ _R, Quark^ _L) {
        LinkedListNode<AntiQuark^>^ P = _R->LAQ->First;
        while (P != nullptr)
            if (P->Value->L->Epsilon == _L->Epsilon) return;
            else P = P->Next;
        R = _R;
        L = _L;
        _R->LAQ->AddFirst(this);
    }

}