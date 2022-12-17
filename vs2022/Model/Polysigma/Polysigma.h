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

		Polysigma::Polysigma() : LinkedList<KeyValuePair<Quark^, Bundle^>>() {};
		
		void Add(Spinor^, Spinor^, Spinor^, Spinor^);
		void Add(Wavelet^);
		void Add(Quark^);
		void Add(Polygamma^, Polysigma^);
		void Run(Soliton^);
		void Run(Soliton^, Quaternion^);
		void Run(Quark^);
	};
}
