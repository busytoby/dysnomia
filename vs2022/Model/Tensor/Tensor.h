#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Tensor : public Spin<Quaternion^> {
	public:
		Tensor() {};
		Tensor(Quark^, Polygamma^);
		Tensor(Polygamma^, Polygamma^, Polygamma^, Polygamma^, Polygamma^);
	};
}