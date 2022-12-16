#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	generic <typename T>
	public ref class Spin {
	public:
		T Gamma;
		T Nu;
		T Phi;
		T Rho;
		T Sigma;
	};
}
