#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class QuarkException : public Exception {
	public:
		int Code;
		String^ Description;

		QuarkException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};




	public ref class Quark
	{
	public:
		ref class AntiQuark
		{
		public:
			Quark^ R;
			Quark^ L;

			AntiQuark(Quark^, Quark^);
		};

		property Quark^ RR {Quark^ get() { return RAQ->R; }};
		property Quark^ LL {Quark^ get() { return LAQ->L; }};

		BigInteger Epsilon;

		AntiQuark^ RAQ;
		Quaternion^ R;
		Quaternion^ N;
		Quaternion^ L;
		AntiQuark^ LAQ;

		Quark(Quaternion^, Quaternion^, Quaternion^);
		void Attach(Quark^);
	};
}
