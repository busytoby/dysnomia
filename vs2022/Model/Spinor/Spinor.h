#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class SpinorException : public Exception {
	public:
		int Code;
		String^ Description;

		SpinorException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Spinor : public Spin<Tuple<Affinity^, Affinity^>^> {
	public:
		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ Octogamma;
		property Polygamma^ List {Polygamma^ get() { return (Polygamma^)Octogamma->List; }};
		property Quaternion^ Current {Quaternion^ get() { return (Quaternion^)Octogamma->Value.Value; }};
		property Quaternion^ Last {Quaternion^ get() { return (Quaternion^)Octogamma->List->Last->Value.Value; }};
		property Quaternion^ First {Quaternion^ get() { return (Quaternion^)Octogamma->List->First->Value.Value; }};

		BigInteger Epsilon;
		Polygamma^ Lambda;

		Spinor(Quaternion^, Polygamma^);
		void Next();
		void Transit(Polygamma^);
		void Head();
	};

	public ref class Wavelet {
	public:
		property Quark^ Q {Quark^ get() { return gcnew Quark(N->Current, R->Current, L->Current); }};
		BigInteger Epsilon;

		Spinor^ R;
		Spinor^ N;
		Spinor^ L;

		Wavelet() {};
		Wavelet(Spinor^, Spinor^, Spinor^);
	};
}