#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class OctonionException : public Exception {
	public:
		int Code;
		String^ Description;

		OctonionException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Octonion {
	public:
		LinkedListNode<KeyValuePair<BigInteger, Quaternion^>>^ Octogamma;

		BigInteger Epsilon;

		Tuple<Affinity^, Affinity^>^ Gamma;
		Tuple<Affinity^, Affinity^>^ Nu;
		Tuple<Affinity^, Affinity^>^ Phi;
		Tuple<Affinity^, Affinity^>^ Rho;
		Tuple<Affinity^, Affinity^>^ Sigma;

		Octonion(Quaternion^, Polygamma^);
		void Transit();
		void IsoSpin(Polygamma^);
	};

	public ref class Tensor {
	public:
		Quaternion^ Gamma;
		Quaternion^ Nu;
		Quaternion^ Phi;
		Quaternion^ Rho;
		Quaternion^ Sigma;
	};
}