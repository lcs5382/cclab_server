#pragma once
#include <iostream>
using namespace std;

class Base{

public:
	virtual void some_method() {
		cout << "기초클래스의 기능 수행" << endl;
	}
};

