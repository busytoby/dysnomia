#pragma once
using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Bundle : public Spin<Tuple<Quark^, Quark^>^> {
	public:
		Soliton^ Eta;

		Bundle(Spinor^, Spinor^, Spinor^, Spinor^);
		void Spin(Wavelet^);
		void Run(Wavelet^);
	};
}