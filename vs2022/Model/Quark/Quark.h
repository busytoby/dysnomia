#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

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

		BigInteger Epsilon;

		LinkedList<AntiQuark^>^ RAQ;
		Quaternion^ R;
		Quaternion^ N;
		Quaternion^ L;
		LinkedList<AntiQuark^>^ LAQ;

		Quark(Quaternion^, Quaternion^, Quaternion^);
		void Attach(Quark^);
	};
}
