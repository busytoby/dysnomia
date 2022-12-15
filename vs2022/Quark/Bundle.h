#pragma once
#include "Quark.h"

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Bundle {
		BigInteger Epsilon;

		Tuple<Quark^, Quark^>^ Gamma;
		Tuple<Quark^, Quark^>^ Nu;
		Tuple<Quark^, Quark^>^ Phi;
		Tuple<Quark^, Quark^>^ Rho;
		Tuple<Quark^, Quark^>^ Sigma;
	};
}