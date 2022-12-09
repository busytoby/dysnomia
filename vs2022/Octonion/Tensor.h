#pragma once
#include "Spinor.h"

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Tensor {
	public:
		Quaternion^ Gamma;
		Quaternion^ Nu;
		Quaternion^ Phi;
		Quaternion^ Rho;
		Quaternion^ Sigma;

		Tensor(Quark^, Polygamma^);
		Tensor(Polygamma^, Polygamma^, Polygamma^, Polygamma^, Polygamma^);
	};
}