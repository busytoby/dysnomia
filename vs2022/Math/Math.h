#pragma once

using namespace System;
using namespace System::Globalization;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Math
	{
	private:
		static void Math::Initialize_Random();
		static bool rnd_Initialized = false;

	public:
		static BigInteger Prime = BigInteger::Parse(
			"3AF1BF72E45FFA4B0C58C8EFD853EC16D0CEF373229C476B51B61F54D30E04D8B76C" \
			"21AB7D561AFFBAF86D54B30F0801D3C469F90CA32AC22DE4B8D67628A6F8C7AFE84F" \
			"A17B62600A6DE053A7EA0D55E2F90E3052467ABBEF4DDFF671C71C71C71C71C71C71" \
			"C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C7", NumberStyles::AllowHexSpecifier);

		static Random rnd;

		static BigInteger Random();

		// TODO: Add your methods for this class here.
	};
}
