#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Bath : public Spin<Octonion^> {
	public:
		property Quaternion^ Xi { Quaternion^ get() {
			Quaternion^ Chi = gcnew Quaternion();
			Chi->Gamma = Gamma->R;
			Chi->Nu = Nu->R;
			Chi->Phi = Phi->R;
			Chi->Rho = Rho->R;
			Chi->Sigma = Sigma->R;
			return Chi;
		}};
	};

	public ref class Tensor : public Spin<Bath^> {
	public:
		Tensor() {};
		Tensor(Quark^, Polygamma^);
		Tensor(Polygamma^, Polygamma^, Polygamma^, Polygamma^, Polygamma^);
	};
}