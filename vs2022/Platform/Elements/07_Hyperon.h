#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hyperon : public Edge<Hadron^, Hel^, Hadron^>
			{
			public:
				Hyperon(Hel^ C) : Edge(C->Last->I, gcnew Hel(), C->Last->L) {
				};

				Hyperon(Hadron^ X, Hel^ C, Hadron^ Y) : Edge(C->Last->I, gcnew Hel(gcnew Affinity(X, Y)), C->Last->L) {
				};
			};
		}
	}
}
