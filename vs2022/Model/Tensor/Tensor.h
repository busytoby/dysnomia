#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Bath : public Spin<Octonion^> {
	public:
		property Quaternion^ Xi { Quaternion^ get() {
			Quaternion^ Chi = gcnew Quaternion();
			Chi->Gamma = Gamma->Phi->Y;
			Chi->Nu = Nu->Phi->Y;
			Chi->Phi = Phi->Phi->Y;
			Chi->Rho = Rho->Phi->Y;
			Chi->Sigma = Sigma->Phi->Y;
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