#pragma once

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
	};
}