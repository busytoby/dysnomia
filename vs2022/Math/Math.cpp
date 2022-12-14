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

        if (LicenseKeys != nullptr && LicenseKeys->Loaded && LicenseKeys->First != nullptr) {
            R = LicenseKeys->First->Value;
            LicenseKeys->RemoveFirst();
            return R;
        }

        rnd.NextBytes(bytes);
        //bytes[bytes->Length - 1] &= (System::Byte)0x7F; //force sign bit to positive
        R = BigInteger(bytes);
        while (R > Prime) R = R / 2;

        if (LicenseKeys != nullptr && LicenseKeys->Record) {
            if (LicenseKeys->RecordKeys == nullptr) LicenseKeys->RecordKeys = gcnew LinkedList<BigInteger>();
            LicenseKeys->RecordKeys->AddLast(R);
        }

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
        if (CacheKeys != nullptr && CacheKeys->Loaded && CacheKeys->First != nullptr) {
            BigInteger R = CacheKeys->First->Value;
            CacheKeys->RemoveFirst();
            return R;
        }

        BigInteger Result = BigInteger::ModPow(BigInteger::Abs(A), BigInteger::Abs(B), BigInteger::Abs(C));
        bool Negative = false;
        if (BigInteger::IsNegative(A)) Negative = !Negative;
        if (BigInteger::IsNegative(B)) Negative = !Negative;
        if (BigInteger::IsNegative(C)) Negative = !Negative;
        if (Negative) Result = Result * -1;

        if (CacheKeys != nullptr && CacheKeys->Record) {
            if (CacheKeys->RecordKeys == nullptr) CacheKeys->RecordKeys = gcnew LinkedList<BigInteger>();
            CacheKeys->RecordKeys->AddLast(Result);
        }

        return Result;
    }
}
