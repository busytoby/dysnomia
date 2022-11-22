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
		Ion(Dynamic, Ion%);
		void Nitrate(BigInteger);
		void Prime(Valence^, Valence^);
		void Swing(Valence^, Valence^);
		void Push(BigInteger);
	};
}
