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

		property Quark^ TailQuark {Quark^ get() { return First->Value.Key; }};
		property Quark^ HeadQuark {Quark^ get() { return Last->Value.Key; }};
		property Bundle^ TailBundle {Bundle^ get() { return First->Value.Value; }};
		property Bundle^ HeadBundle {Bundle^ get() { return Last->Value.Value; }};

		Polysigma::Polysigma() : LinkedList<KeyValuePair<Quark^, Bundle^>>() {};
		Polysigma(Polysigma^);
		
		void Add(Spinor^, Spinor^, Spinor^, Spinor^, Soliton^);
		void Add(Spinor^, Spinor^, Spinor^, Spinor^);
		void Add(Soliton^);
		void Add(Wavelet^, Soliton^);
		void Add(Wavelet^);
		void Add(Quark^);
		void Add(Polygamma^, Polysigma^);
		void Cap(Polygamma^, Polysigma^);
		void Run(Soliton^);
		void Run(Soliton^, Quaternion^);
		void Run(Quark^);
	};
}
