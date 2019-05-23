#pragma once
#include "base.h"

class Derived : public Base {
public:
	void some_method() {
		some_method();
		cout << "파생클래스의 기능 수행" << endl;
	}
};

