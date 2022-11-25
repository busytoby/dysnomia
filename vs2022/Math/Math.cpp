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

    String^ Math::ByteArrayToHexString(array<Byte>^ Bytes) {
        System::Text::StringBuilder sb;
        for each (System::Byte b in Bytes)
        {
            sb.AppendFormat("{0:X}", b);
        }

        return sb.ToString();
    }

    String^ Math::LinkedListToHexString(LinkedList<char>^ Bytes) {
        System::Text::StringBuilder sb;
        for each (char b in Bytes)
            sb.Append(Char::ToString(b));

        return sb.ToString();
    }

    BigInteger Math::Hood(LinkedList<Int16>^ E) {
        int i = E->Count;
        array<System::Byte>^ bytes = gcnew array<System::Byte>(i);      
        BigInteger R;

        i = 0;
        LinkedListNode<Int16>^ L = E->First;
        while(L) {
            bytes[i++] = (System::Byte)L->Value;
            L = L->Next;
        }

        bytes[bytes->Length - 1] &= (System::Byte)0x7F; //force sign bit to positive
        R = BigInteger(bytes);

        return R;
    }
}
