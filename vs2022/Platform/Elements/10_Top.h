#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Top : public Edge<Charm^, Fermion^, Baryon^>
			{
			public:
				Top(Charm^ Beta) : Edge(Beta, Beta[0]->I, Beta[0]->L) {
				}
			};
		}
	}
}
