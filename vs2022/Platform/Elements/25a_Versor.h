#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Versor : public Edge<Eun^, Auctus^, Ascus^>
			{
			public:
				static Versor^ Mercury;

				Versor(Auctus^ Beta) : Edge(Beta[0]->I, Beta, Beta[0]->L) {
					if (Mercury == nullptr) Mercury = this;
				}
			};
		}
	}
}
