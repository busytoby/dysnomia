#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Affinity
	{
	private:
		Dynamic Rod, Cone;

		void ConductorGenerate();
		void OpenManifolds();
		void Ratchet();

	public:
		Affinity();
	};
}
