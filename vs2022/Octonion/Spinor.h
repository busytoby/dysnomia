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

	public ref class Spinor {
	public:
		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ Octogamma;

		BigInteger Epsilon;

		Tuple<Affinity^, Affinity^>^ Gamma;
		Tuple<Affinity^, Affinity^>^ Nu;
		Tuple<Affinity^, Affinity^>^ Phi;
		Tuple<Affinity^, Affinity^>^ Rho;
		Tuple<Affinity^, Affinity^>^ Sigma;

		Spinor(Quaternion^, Polygamma^);
		void Transit();
		void IsoSpin(Polygamma^);
	};
}