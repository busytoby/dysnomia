#pragma once

namespace Dysnomia {
	void freeptr(void* ptr) {
		if ((unsigned long long) ptr == 0xdddddddddddddddd) {
			return;
		}
		if (ptr != nullptr)
			delete ptr;
		ptr = nullptr;
	}
}