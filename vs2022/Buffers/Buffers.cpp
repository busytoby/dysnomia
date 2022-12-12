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
        using namespace Runtime::InteropServices;
        const char* FileNamePtr = (const char*)(Marshal::StringToHGlobalAnsi(LicenseFile)).ToPointer();
        FILE* outfile = nullptr;

        if (LicenseData->RecordKeys == nullptr || LicenseData->RecordKeys->Count == 0) return;

        fopen_s(&outfile, FileNamePtr, "ab+");
        LicenseData->KeyPtr = LicenseData->RecordKeys->First;
        do {
            size_t length;
            void* bytes;

            CopyToPtr(LicenseData->KeyPtr->Value, &bytes, &length);
            size_t l = length;
            fwrite(&l, sizeof(size_t), 1, outfile);
            fwrite(bytes, length, 1, outfile);
        } while (LicenseData->KeyPtr = LicenseData->KeyPtr->Next);
        fclose(outfile);
        Marshal::FreeHGlobal(IntPtr((void*)FileNamePtr));
    }

    void Buffers::ReadLicense(String^ LicenseFile, LinkedLicense^ LicenseData) {
        using namespace Runtime::InteropServices;
        const char* FileNamePtr = (const char*)(Marshal::StringToHGlobalAnsi(LicenseFile)).ToPointer();
        void* Bytes = nullptr;
        size_t Length;
        size_t offset = 0;
        size_t KeyLength;
        FILE* infile = nullptr;

        if (_access(FileNamePtr, 0) != 0) return;
        fopen_s(&infile, FileNamePtr, "rb");

        fseek(infile, 0, SEEK_END);
        Length = ftell(infile);
        rewind(infile);

        while (offset < Length) {
            fread(&KeyLength, sizeof(size_t), 1, infile);
            Bytes = (unsigned char*)malloc(KeyLength * sizeof(unsigned char));
            fread(Bytes, KeyLength, 1, infile);
            offset += KeyLength + sizeof(size_t);

            array<Byte>^ byteArray = gcnew array<Byte>(KeyLength);
            pin_ptr<Byte> p = &byteArray[0];
            unsigned char* pch = reinterpret_cast<unsigned char*>((unsigned char*)p);
            memcpy(pch, Bytes, KeyLength);
            LicenseData->AddLast(BigInteger(byteArray));
            free(Bytes);           
        }
        fclose(infile);
        LicenseData->Loaded = true;
    }

}