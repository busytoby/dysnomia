#pragma once

namespace Dysnomia {
	void freeptr(void* ptr) {
		if ((unsigned long long) ptr == 0xdddddddddddddddd) {
			ptr = nullptr;
		}
		if (ptr != nullptr)
			delete ptr;
		ptr = nullptr;
	}
}