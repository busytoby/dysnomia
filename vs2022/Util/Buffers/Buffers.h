#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;
using namespace System::IO;

namespace Dysnomia {
	public ref class Buffers
	{
	public:
		ref class LinkedLicense : LinkedList<BigInteger> { 
		public:
			bool Loaded = false;
			bool Record = false;
			FileStream^ file;
			BinaryReader^ reader;
			BinaryWriter^ writer;
			LinkedList<BigInteger>^ RecordKeys;
			LinkedListNode<BigInteger>^ KeyPtr;
		};

		static void CopyToPtr(BigInteger^, void**, size_t*);
		static void WriteLicense(String^, LinkedLicense^);
		static void ReadLicense(String^, LinkedLicense^);
		static BigInteger ReadNextLicenseKey(BinaryReader^);
		static void WriteNextLicenseKey(BinaryWriter^, BigInteger);
	};
}
