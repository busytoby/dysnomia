#pragma once
#include "Spinor.h"
using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Bundle {
	public:
		BigInteger Epsilon;

		Tuple<Quark^, Quark^>^ Gamma;
		Tuple<Quark^, Quark^>^ Nu;
		Tuple<Quark^, Quark^>^ Phi;
		Tuple<Quark^, Quark^>^ Rho;
		Tuple<Quark^, Quark^>^ Sigma;

		Bundle(Spinor^, Spinor^, Spinor^, Spinor^);
		void Spin(Wavelet^);
		void Run(Wavelet^);
	};
}