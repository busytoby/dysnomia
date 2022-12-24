#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Polynu
	{
	private:
		Spin<Spinor^>^ Chi();
	public:
		LinkedList<Spinor^>^ Rho;
		Spin<Spinor^>^ Phi;
		LinkedList<KeyValuePair<Spin<Spinor^>^, Spin<Spinor^>^>>^ Nu;

		Polynu();
		void Alpha(Spinor^);
		void Eta();
		void Delta(Spin<Spinor^>^);
		void Sigma(LinkedList<KeyValuePair<Spin<Spinor^>^, Spin<Spinor^>^>>^);
	};
}
