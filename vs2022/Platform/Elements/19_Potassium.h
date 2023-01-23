#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Potassium : Edge<Argon^, Dysnomium^, Gluon^>
			{
			public:
				Potassium(Argon^ Beta) : Edge<Argon^, Dysnomium^, Gluon^>(Beta, gcnew Dysnomium(Beta), Beta->R) {
				}
			};
		}
	}
}
