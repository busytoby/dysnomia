#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Buffers
	{
	public:
		ref class LinkedLicense : LinkedList<BigInteger> { 
		public:
			bool Loaded = false;
			bool Record = false;
			LinkedListNode<BigInteger>^ KeyPtr;
		};

		static void CopyToPtr(BigInteger^, void**, size_t*);
		static void WriteLicense(String^, LinkedLicense^);
		static void ReadLicense(String^, LinkedLicense^);
	};
}
