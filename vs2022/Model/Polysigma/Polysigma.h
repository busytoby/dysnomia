#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class PolysigmaException : public Exception {
	public:
		int Code;
		String^ Description;

		PolysigmaException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Polysigma : LinkedList<KeyValuePair<Quark^, Bundle^>>
	{
	public:
		Bundle^ J;
		Wavelet^ Muon;
		Wavelet^ Gluon;

		void Add(Spinor^, Spinor^, Spinor^, Spinor^);
		void Add(Wavelet^);
		void Add(Quark^);
	};
}
