#include "pch.h"

#include "Buffers.h"
#include <cstdio>
#include <cstring>
#include <malloc.h>
#include <io.h>

namespace Dysnomia {
    void Buffers::CopyToPtr(BigInteger^ N, void** ptr, size_t* Length) {
        array<Byte>^ byteArray = N->ToByteArray();
        pin_ptr<Byte> p = &byteArray[0];
        unsigned char* pch = reinterpret_cast<unsigned char*>((unsigned char*)p);
        *ptr = malloc(byteArray->Length);
        memcpy(*ptr, pch, byteArray->Length);
        *Length = byteArray->Length;
    }

    void Buffers::WriteLicense(String^ LicenseFile, LinkedLicense^ LicenseData) {
        LicenseData->file = gcnew FileStream(LicenseFile, FileMode::Append);
        LicenseData->writer = gcnew BinaryWriter(LicenseData->file);
    }

    void Buffers::WriteNextLicenseKey(BinaryWriter^ outdata, BigInteger Key) {
        array<Byte>^ KeyBytes = Key.ToByteArray();
        outdata->Write((Int64) KeyBytes->Length);
        outdata->Write(KeyBytes);
    }

    void Buffers::ReadLicense(String^ LicenseFile, LinkedLicense^ LicenseData) {
        LicenseData->file = gcnew FileStream(LicenseFile, FileMode::Open);
        LicenseData->reader = gcnew BinaryReader(LicenseData->file);
        LicenseData->Loaded = true;
    }

    BigInteger Buffers::ReadNextLicenseKey(BinaryReader^ indata) {
        int keyLength = indata->ReadInt64();
        array<Byte>^ Key = indata->ReadBytes(keyLength);
        return BigInteger(Key);
    }
}