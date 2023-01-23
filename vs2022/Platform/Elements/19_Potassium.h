#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Pion : Edge<Argon^, Dysnomium^, Gluon^>
			{
			public:
				Pion(Argon^ Beta) : Edge<Argon^, Dysnomium^, Gluon^>(Beta, gcnew Dysnomium(Beta), Beta->R) {
				}
			};
		}
	}
}
