#include "pch.h"

#include "Wou.h"
#include <assert.h>
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;

				Carbon^ C = gcnew Carbon(); // Contains First Pion

				Hydrogen^ HelloCone = gcnew Hydrogen(); // Entropically First Lepton
				Nitrogen^ N = gcnew Nitrogen(C->Xi, C->Pi->N, HelloCone); // First Muon

				Oxygen^ SeaQuark = gcnew Oxygen();

				Affinity^ Gauge = gcnew Affinity(C->Alpha, ((Affinity^)SeaQuark->N)->Cone);
			}
		}
	}
}