#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Polyrho : LinkedList<KeyValuePair<Polygamma^, Soliton^>>
	{
	public:
		Polyrho(Polysigma^, Polygamma^);
		void Cap(Polygamma^);
		void Propagate(Polysigma^);
	};
}
