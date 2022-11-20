#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Ion
	{
	public:
		Dynamic^ R;
		Valence Ir;

		Ion(Dynamic);
		void Nitrate(BigInteger);
		Ion^ Push();
		Ion^ Push(BigInteger);
	};
}
