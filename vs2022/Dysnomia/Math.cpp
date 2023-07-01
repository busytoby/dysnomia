#include <random>

#include "Math.h"

namespace Dysnomia {
    Int64 Math::Prime;
    short Math::POETRY;

    union Union64 {
        uint64_t i;
        uint32_t l[2];
    };

    Int64 Math::Random() {
        Union64 N;
        N.l[0] = rand();
        N.l[1] = rand();
        return N.i;
    }

    Int64 Math::ModPow(Int64 A, Int64 B, Int64 C) {
        Int64 Result = abs(A) ^ abs(B) % abs(C);
        bool Negative = false;
        if (A < 0) Negative = !Negative;
        if (B < 0) Negative = !Negative;
        if (C < 0) Negative = !Negative;
        if (Negative) Result = Result * -1;

        return Result;
    }
}