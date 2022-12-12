#pragma once

using namespace System;
using namespace System::Globalization;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Math
	{
	private:
		static void Math::Initialize_Random();
		static bool rnd_Initialized = false;

	public:
		// Fourth Repunit Prime
		static BigInteger Prime = BigInteger::Parse(
			"3AF1BF72E45FFA4B0C58C8EFD853EC16D0CEF373229C476B51B61F54D30E04D8B76C" \
			"21AB7D561AFFBAF86D54B30F0801D3C469F90CA32AC22DE4B8D67628A6F8C7AFE84F" \
			"A17B62600A6DE053A7EA0D55E2F90E3052467ABBEF4DDFF671C71C71C71C71C71C71" \
			"C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C7", NumberStyles::AllowHexSpecifier);

		// Second Prime In Catalan's Constant
		static BigInteger CatalanPrime = BigInteger::Parse(
			"01A74B82867AB14262C6E0153A32170696AB92141212C6C478D195A94DE8FACB8AD0" \
			"901ABFE89B6129C427EBFA03AD511242C79FD93E89B20429DB33BEC356978F703875" \
			"07A95AD2068E195E9B852B6BF884AB9A714BA75CFB10A7F9CFE865A0764B6B6E8648" \
			"C98C8252C2B2AC42E7CAE4E8360", NumberStyles::AllowHexSpecifier);

		// Fifth Repunit Prime, Upsilon Meson Constant Value
		static BigInteger AzimuthPrime = BigInteger::Parse(
			"0355E90DAA587611B55393AEE8FFE8AD600FDEDB129E360ED9587A184A572D1FA860" \
			"E7E1591B3A0309B7D93CD708C553602E814FB883152FC371F710F53BA29F536EF802" \
			"1910AD842E8B0A071E7734DD74F36D5EFBE175CA8958279A4EDF524ECB6905D67387" \
			"20F1DDAD67D1B07157B3F0447E5ECFDDCDE90401F7E6251F6A819FB465EBEA97A59E" \
			"BC2AEEC27938BF86393D218E34C318480D6081BF689220AE845160EE5389C68740EB" \
			"B062C1897FDEDB2941D33F633D34161BE15624AEEE1E6805F9DD1D4F751AF93FBE5E" \
			"69C4E0FB472873E7A780FC527CA4C1CC3C8DCAFDD6B9A85889FAA535BF36860CDACD" \
			"A0BF0BA2046101BD7E44B3B6EB1ED86A86254394615544541534BA15724A3B6DA785" \
			"A61624AECE73EB0C1F96085AEAE82E74B880606DFFCFB0081CE3E499C71C71C71C71" \
			"C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C7" \
			"1C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C" \
			"71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71C71" \
			"C71C71C71C71C71C71C71C71C71C71C71C71C71C7", NumberStyles::AllowHexSpecifier);

		static BigInteger DeathPrime = 4294967297;
		static BigInteger MuPrime = 541;

		static Random rnd;

		static BigInteger Random();
		static String^ ByteArrayToHexString(array<Byte>^);
		static BigInteger ModPow(BigInteger, BigInteger, BigInteger);

		static Buffers::LinkedLicense^ LicenseKeys;
		static Buffers::LinkedLicense^ CacheKeys;

		// TODO: Add your methods for this class here.
	};
}
