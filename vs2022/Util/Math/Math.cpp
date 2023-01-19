#include "pch.h"

#include "Math.h"

namespace Dysnomia {
    /*
	BigInteger Math::Random() {
        if (Prime.IsZero) throw gcnew Exception("Prime Undeclared");
        array<System::Byte>^ bytes = Prime.ToByteArray();
        BigInteger R;

        if (!rnd_Initialized) Initialize_Random();

        rnd.NextBytes(bytes);
        bytes[bytes->Length - 1] &= (System::Byte)0x7F; //force sign bit to positive
        R = BigInteger(bytes);
        while (R > Prime) R = R / 2;

		return R;
	}
    */

    Int64 Math::Random() { 
        if (rnd == nullptr) rnd = gcnew System::Random();
        return rnd->NextInt64(); 
    }

    String^ Math::ByteArrayToHexString(array<Byte>^ Bytes) {
        System::Text::StringBuilder sb;
        for each (System::Byte b in Bytes)
        {
            sb.AppendFormat("{0:X}", b);
        }

        return sb.ToString();
    }

    Int64 Math::ModPow(Int64 A, Int64 B, Int64 C) {
        Int64 Result = Int64::Abs(A) ^ Int64::Abs(B) % Int64::Abs(C);
        bool Negative = false;
        if (Int64::IsNegative(A)) Negative = !Negative;
        if (Int64::IsNegative(B)) Negative = !Negative;
        if (Int64::IsNegative(C)) Negative = !Negative;
        if (Negative) Result = Result * -1;

        return Result;
    }

    /*
    BigInteger Math::ModPow(BigInteger A, BigInteger B, BigInteger C) {
        BigInteger Result = BigInteger::ModPow(BigInteger::Abs(A), BigInteger::Abs(B), BigInteger::Abs(C));
        bool Negative = false;
        if (BigInteger::IsNegative(A)) Negative = !Negative;
        if (BigInteger::IsNegative(B)) Negative = !Negative;
        if (BigInteger::IsNegative(C)) Negative = !Negative;
        if (Negative) Result = Result * -1;

        return Result;
    }
    */
}
