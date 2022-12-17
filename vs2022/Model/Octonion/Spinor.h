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

		BigInteger Epsilon;

		Spinor(Quaternion^, Polygamma^);
		void Transit();
		void Transit(Polygamma^);
		void IsoSpin();
		Quaternion^ Head();
	};

	public ref class Wavelet {
	public:
		BigInteger Epsilon;

		Spinor^ R;
		Spinor^ N;
		Spinor^ L;

		Wavelet() {};
		Wavelet(Spinor^, Spinor^, Spinor^);
	};
}