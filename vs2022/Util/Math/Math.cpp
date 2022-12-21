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

        if (LicenseKeys != nullptr) {
            if (LicenseKeys->Loaded) {
                if (LicenseKeys->reader->BaseStream->Position <= LicenseKeys->reader->BaseStream->Length) {
                    return Buffers::ReadNextLicenseKey(LicenseKeys->reader);
                }
                if (LicenseKeys->Record == false) {
                    LicenseKeys->Loaded = false;
                    LicenseKeys->reader->Close();
                    LicenseKeys->file->Close();
                    Buffers::WriteLicense("private.key", LicenseKeys);
                }
            }
            else if (LicenseKeys->Record == false)
                Buffers::WriteLicense("private.key", LicenseKeys);
        }

        rnd.NextBytes(bytes);
        //bytes[bytes->Length - 1] &= (System::Byte)0x7F; //force sign bit to positive
        R = BigInteger(bytes);
        while (R > Prime) R = R / 2;

        if (LicenseKeys != nullptr && LicenseKeys->Record)
            Buffers::WriteNextLicenseKey(LicenseKeys->writer, R);

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
        if (CacheKeys != nullptr) {
            if (CacheKeys->Loaded) {
                if (CacheKeys->reader->BaseStream->Position <= CacheKeys->reader->BaseStream->Length) {
                    return Buffers::ReadNextLicenseKey(CacheKeys->reader);
                }
                if (CacheKeys->Record == false) {
                    CacheKeys->Loaded = false;
                    CacheKeys->reader->Close();
                    CacheKeys->file->Close();
                    Buffers::WriteLicense("public.key", CacheKeys);
                }
            }
            else if (CacheKeys->Record == false)
                Buffers::WriteLicense("public.key", CacheKeys);
        }

        BigInteger Result = BigInteger::ModPow(BigInteger::Abs(A), BigInteger::Abs(B), BigInteger::Abs(C));
        bool Negative = false;
        if (BigInteger::IsNegative(A)) Negative = !Negative;
        if (BigInteger::IsNegative(B)) Negative = !Negative;
        if (BigInteger::IsNegative(C)) Negative = !Negative;
        if (Negative) Result = Result * -1;

        if (CacheKeys != nullptr && CacheKeys->Record)
            Buffers::WriteNextLicenseKey(CacheKeys->writer, Result);

        return Result;
    }
}
