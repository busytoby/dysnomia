#include "pch.h"

#include "Math.h"

namespace Dysnomia {
    void Math::Initialize_Random() {
        rnd_Initialized = true;
    }

	BigInteger Math::Random() {
        array<System::Byte>^ bytes = Prime.ToByteArray();
        BigInteger R;

        if (!rnd_Initialized) Initialize_Random();

        rnd.NextBytes(bytes);
        bytes[bytes->Length - 1] &= (System::Byte)0x7F; //force sign bit to positive
        R = BigInteger(bytes);
        while (R > Prime) R = R / 2;

		return R;
	}
}
