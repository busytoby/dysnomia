#include <random>
#include <thread>

#include "Math.h"

namespace Dysnomia {
    Int64 Math::Prime;
    short Math::POETRY;

    static std::random_device rd;

    /*
    union Union64 {
        uint64_t i;
        uint32_t l[2];
    };
    */

    Int64 Math::Random() {
        static thread_local std::mt19937_64 generator{ rd() };
        std::uniform_int_distribution<Int64> distribution(0, Math::Prime);
        return distribution(generator);

        /*
        Union64 N;
        N.l[0] = rand();
        N.l[1] = rand();
        return N.i;
        */
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