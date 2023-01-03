#include "pch.h"

#include "Math.h"

namespace Dysnomia {
    void Math::Initialize_Random() {
        rnd_Initialized = true;
    }

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

    String^ Math::ByteArrayToHexString(array<Byte>^ Bytes) {
        System::Text::StringBuilder sb;
        for each (System::Byte b in Bytes)
        {
            sb.AppendFormat("{0:X}", b);
        }

        return sb.ToString();
    }

    BigInteger Math::ModPow(BigInteger A, BigInteger B, BigInteger C) {
        BigInteger Result = BigInteger::ModPow(BigInteger::Abs(A), BigInteger::Abs(B), BigInteger::Abs(C));
        bool Negative = false;
        if (BigInteger::IsNegative(A)) Negative = !Negative;
        if (BigInteger::IsNegative(B)) Negative = !Negative;
        if (BigInteger::IsNegative(C)) Negative = !Negative;
        if (Negative) Result = Result * -1;

        return Result;
    }
}
