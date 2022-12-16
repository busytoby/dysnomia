#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Polysigma : LinkedList<KeyValuePair<Quark^, Bundle^>>
	{
		Wavelet^ Gluon;
		Wavelet^ Muon;
		Wavelet^ Rho;
	};
}
